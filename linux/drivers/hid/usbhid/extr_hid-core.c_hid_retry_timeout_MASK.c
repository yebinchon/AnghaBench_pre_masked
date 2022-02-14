
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhid_device {TYPE_1__* intf; struct hid_device* hid; } ;
struct timer_list {int dummy; } ;
struct hid_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 struct usbhid_device* FUNC_1 (int ,struct timer_list*,int ) ;
 int FUNC_2 (struct hid_device*) ;
 scalar_t__ FUNC_3 (struct hid_device*) ;
 int VAR_0 ;
 struct usbhid_device* VAR_1 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 struct usbhid_device *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_0);
 struct hid_device *VAR_4 = VAR_3->hid;

 FUNC_0(&VAR_3->intf->dev, "retrying intr urb\n");
 if (FUNC_3(VAR_4))
  FUNC_2(VAR_4);
}
