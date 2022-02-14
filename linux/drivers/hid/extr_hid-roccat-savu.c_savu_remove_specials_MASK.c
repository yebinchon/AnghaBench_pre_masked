
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {TYPE_3__* cur_altsetting; } ;
struct roccat_common2_device {int chrdev_minor; scalar_t__ roccat_claimed; } ;
struct TYPE_4__ {int parent; } ;
struct hid_device {TYPE_1__ dev; } ;
struct TYPE_5__ {scalar_t__ bInterfaceProtocol; } ;
struct TYPE_6__ {TYPE_2__ desc; } ;


 scalar_t__ VAR_0 ;
 struct roccat_common2_device* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct roccat_common2_device*) ;
 int FUNC_2 (int ) ;
 struct usb_interface* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct hid_device *VAR_1)
{
 struct usb_interface *VAR_2 = FUNC_3(VAR_1->dev.parent);
 struct roccat_common2_device *VAR_3;

 if (VAR_2->cur_altsetting->desc.bInterfaceProtocol
   != VAR_0)
  return;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3->roccat_claimed)
  FUNC_2(VAR_3->chrdev_minor);
 FUNC_1(VAR_3);
}
