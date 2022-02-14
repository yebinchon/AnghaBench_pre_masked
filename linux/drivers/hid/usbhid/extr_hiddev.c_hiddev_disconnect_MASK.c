
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhid_device {int intf; } ;
struct hiddev {int existancelock; int wait; int hid; scalar_t__ open; scalar_t__ exist; } ;
struct hid_device {struct usbhid_device* driver_data; struct hiddev* hiddev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct hiddev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct hid_device *VAR_1)
{
 struct hiddev *VAR_2 = VAR_1->hiddev;
 struct usbhid_device *VAR_3 = VAR_1->driver_data;

 FUNC_4(VAR_3->intf, &VAR_0);

 FUNC_2(&VAR_2->existancelock);
 VAR_2->exist = 0;

 if (VAR_2->open) {
  FUNC_3(&VAR_2->existancelock);
  FUNC_0(VAR_2->hid);
  FUNC_5(&VAR_2->wait);
 } else {
  FUNC_3(&VAR_2->existancelock);
  FUNC_1(VAR_2);
 }
}
