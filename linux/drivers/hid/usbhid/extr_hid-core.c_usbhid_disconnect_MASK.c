
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhid_device {int lock; int iofl; } ;
struct usb_interface {int dummy; } ;
struct hid_device {struct usbhid_device* driver_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct usbhid_device*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct hid_device* FUNC_6 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_1)
{
 struct hid_device *VAR_2 = FUNC_6(VAR_1);
 struct usbhid_device *VAR_3;

 if (FUNC_0(!VAR_2))
  return;

 VAR_3 = VAR_2->driver_data;
 FUNC_4(&VAR_3->lock);
 FUNC_3(VAR_0, &VAR_3->iofl);
 FUNC_5(&VAR_3->lock);
 FUNC_1(VAR_2);
 FUNC_2(VAR_3);
}
