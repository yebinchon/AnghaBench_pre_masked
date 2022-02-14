
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhid_device {int intf; } ;
struct hid_device {struct usbhid_device* driver_data; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_0, int VAR_1)
{
 struct usbhid_device *VAR_2 = VAR_0->driver_data;
 int VAR_3 = 0;

 switch (VAR_1) {
 case 129:
  VAR_3 = FUNC_0(VAR_2->intf);
  break;

 case 128:
  FUNC_1(VAR_2->intf);
  break;
 }

 return VAR_3;
}
