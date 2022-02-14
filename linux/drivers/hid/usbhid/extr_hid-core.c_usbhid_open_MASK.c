
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct usbhid_device {int iofl; TYPE_1__* intf; } ;
struct hid_device {int quirks; struct usbhid_device* driver_data; } ;
struct TYPE_3__ {int needs_remote_wakeup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct hid_device *VAR_7)
{
 struct usbhid_device *VAR_8 = VAR_7->driver_data;
 int VAR_9;

 FUNC_4(VAR_4, &VAR_8->iofl);

 if (VAR_7->quirks & VAR_5)
  return 0;

 VAR_9 = FUNC_5(VAR_8->intf);

 if (VAR_9 < 0) {
  FUNC_0(VAR_4, &VAR_8->iofl);
  return -VAR_1;
 }

 VAR_8->intf->needs_remote_wakeup = 1;

 FUNC_4(VAR_6, &VAR_8->iofl);
 FUNC_4(VAR_3, &VAR_8->iofl);

 VAR_9 = FUNC_2(VAR_7);
 if (VAR_9) {
  if (VAR_9 != -VAR_2) {
   FUNC_1(VAR_7);
   VAR_9 = 0;
  } else {

   VAR_9 = -VAR_0;
   FUNC_0(VAR_4, &VAR_8->iofl);
   FUNC_0(VAR_3, &VAR_8->iofl);
   VAR_8->intf->needs_remote_wakeup = 0;
  }
 }

 FUNC_6(VAR_8->intf);







 if (VAR_9 == 0)
  FUNC_3(50);

 FUNC_0(VAR_6, &VAR_8->iofl);
 return VAR_9;
}
