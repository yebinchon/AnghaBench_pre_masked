
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhid_device {int * urbout; int * urbctrl; int * urbin; int lock; int iofl; TYPE_1__* intf; } ;
struct hid_device {int quirks; scalar_t__ claimed; struct usbhid_device* driver_data; } ;
struct TYPE_2__ {scalar_t__ needs_remote_wakeup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct usbhid_device*) ;
 int FUNC_3 (int ,struct hid_device*) ;
 int FUNC_4 (struct hid_device*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct hid_device *VAR_4)
{
 struct usbhid_device *VAR_5 = VAR_4->driver_data;

 if (FUNC_0(!VAR_5))
  return;

 if (VAR_4->quirks & VAR_2) {
  FUNC_1(VAR_1, &VAR_5->iofl);
  VAR_5->intf->needs_remote_wakeup = 0;
 }

 FUNC_1(VAR_3, &VAR_5->iofl);
 FUNC_6(&VAR_5->lock);
 FUNC_5(VAR_0, &VAR_5->iofl);
 FUNC_7(&VAR_5->lock);
 FUNC_9(VAR_5->urbin);
 FUNC_9(VAR_5->urbout);
 FUNC_9(VAR_5->urbctrl);

 FUNC_2(VAR_5);

 VAR_4->claimed = 0;

 FUNC_8(VAR_5->urbin);
 FUNC_8(VAR_5->urbctrl);
 FUNC_8(VAR_5->urbout);
 VAR_5->urbin = ((void*)0);
 VAR_5->urbctrl = ((void*)0);
 VAR_5->urbout = ((void*)0);

 FUNC_3(FUNC_4(VAR_4), VAR_4);
}
