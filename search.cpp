#include <iostream>
#include<algorithm>

using namespace std;
int main(){
    int arr[]={3,9,1,2,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    int low=0, high=n-1, target, found=-1;
    cout<<"Enter value to check : ";
    cin>>target;
    for(int i =0; i<n; i++){
          int mid = low + (high-low)/2;
          if(arr[i]<target){
              low = mid+1;
          }
          else if(arr[i]>target){
              high = mid-1;
          }
          else{
              found = mid;
            break;
          }
    }
    if(found!=-1)cout<<"Element found at index: "<<found;
    else cout<<"Element not found ";
    
    return 0 ;   
}
