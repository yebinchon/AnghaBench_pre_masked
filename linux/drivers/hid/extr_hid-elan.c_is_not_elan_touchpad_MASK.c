
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {TYPE_3__* altsetting; } ;
struct TYPE_4__ {int parent; } ;
struct hid_device {scalar_t__ bus; TYPE_1__ dev; } ;
struct TYPE_5__ {scalar_t__ bInterfaceNumber; } ;
struct TYPE_6__ {TYPE_2__ desc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct usb_interface* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct hid_device *VAR_2)
{
 if (VAR_2->bus == VAR_0) {
  struct usb_interface *VAR_3 = FUNC_0(VAR_2->dev.parent);

  return (VAR_3->altsetting->desc.bInterfaceNumber !=
   VAR_1);
 }

 return 0;
}
