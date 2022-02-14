
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libusb_device_descriptor {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int libusb_device ;
typedef int libusb_context ;


 int FUNC_0 (char*,long long) ;
 scalar_t__ FUNC_1 (struct libusb_device_descriptor*) ;
 int FUNC_2 (int **,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct libusb_device_descriptor*) ;
 scalar_t__ FUNC_6 (int *,int ***) ;
 int * FUNC_7 (int *) ;
 long long FUNC_8 (int) ;

__attribute__((used)) static libusb_device *
FUNC_9(libusb_context *VAR_0, int VAR_1, int VAR_2)
{
 libusb_device **VAR_3, *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 struct libusb_device_descriptor VAR_6;
 ssize_t VAR_7, VAR_8;
 int VAR_9;

 VAR_7 = FUNC_6(VAR_0, &VAR_3);
 if (VAR_7 < 0) {
  FUNC_0("libusb_get_device_list() failed: code %lld",
      (long long int) VAR_7);
  return (((void*)0));
 }




 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_4 = VAR_3[VAR_8];
  if (VAR_1 == FUNC_3(VAR_4) &&
      VAR_2 == FUNC_4(VAR_4)) {

   VAR_9 = FUNC_5(VAR_4, &VAR_6);
   if (VAR_9 != 0) {
    FUNC_0("libusb_get_device_descriptor: %s",
        FUNC_8(VAR_9));
    break;
   }


   if (FUNC_1(&VAR_6)) {



    VAR_5 = FUNC_7(VAR_4);
    break;
   }
  }
 }

 FUNC_2(VAR_3, 1);
 return (VAR_5);
}
