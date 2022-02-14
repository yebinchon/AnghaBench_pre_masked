
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_2__ desc; } ;
struct usb_device {int dummy; } ;
struct TYPE_3__ {int parent; } ;
struct hid_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_device*,int,int,int) ;
 struct usb_device* FUNC_1 (struct hid_device*) ;
 struct usb_interface* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_2, int VAR_3, int VAR_4,
  int VAR_5)
{
 struct usb_device *VAR_6 = FUNC_1(VAR_2);
 struct usb_interface *VAR_7 = FUNC_2(VAR_2->dev.parent);
 struct usb_host_interface *VAR_8 = VAR_7->cur_altsetting;
 int VAR_9 = VAR_8->desc.bInterfaceNumber;

 if (VAR_5 != VAR_1)
  return -VAR_0;

 return FUNC_0(VAR_6, VAR_9, VAR_3, VAR_4);
}
