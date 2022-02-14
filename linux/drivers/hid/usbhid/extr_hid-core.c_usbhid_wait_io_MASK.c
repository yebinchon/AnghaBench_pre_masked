
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhid_device {int iofl; int wait; } ;
struct hid_device {struct usbhid_device* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_3)
{
 struct usbhid_device *VAR_4 = VAR_3->driver_data;

 if (!FUNC_2(VAR_4->wait,
    (!FUNC_1(VAR_0, &VAR_4->iofl) &&
    !FUNC_1(VAR_1, &VAR_4->iofl)),
     10*VAR_2)) {
  FUNC_0("timeout waiting for ctrl or out queue to clear\n");
  return -1;
 }

 return 0;
}
