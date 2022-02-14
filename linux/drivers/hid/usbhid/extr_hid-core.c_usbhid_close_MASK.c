
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhid_device {TYPE_1__* intf; int urbin; int lock; int iofl; } ;
struct hid_device {int quirks; struct usbhid_device* driver_data; } ;
struct TYPE_2__ {scalar_t__ needs_remote_wakeup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct usbhid_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct hid_device *VAR_3)
{
 struct usbhid_device *VAR_4 = VAR_3->driver_data;






 FUNC_2(&VAR_4->lock);
 FUNC_0(VAR_1, &VAR_4->iofl);
 if (!(VAR_3->quirks & VAR_2))
  FUNC_0(VAR_0, &VAR_4->iofl);
 FUNC_3(&VAR_4->lock);

 if (VAR_3->quirks & VAR_2)
  return;

 FUNC_1(VAR_4);
 FUNC_4(VAR_4->urbin);
 VAR_4->intf->needs_remote_wakeup = 0;
}
