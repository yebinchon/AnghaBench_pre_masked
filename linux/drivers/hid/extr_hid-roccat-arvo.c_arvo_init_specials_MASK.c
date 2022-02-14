
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct usb_device {int dummy; } ;
struct TYPE_6__ {int parent; } ;
struct hid_device {TYPE_3__ dev; } ;
struct arvo_roccat_report {int dummy; } ;
struct arvo_device {int chrdev_minor; int roccat_claimed; } ;
struct TYPE_4__ {scalar_t__ bInterfaceProtocol; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_device*,struct arvo_device*) ;
 int FUNC_1 (struct hid_device*,char*) ;
 int FUNC_2 (struct hid_device*,struct arvo_device*) ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct arvo_device*) ;
 struct arvo_device* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,struct hid_device*,int) ;
 struct usb_interface* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct hid_device *VAR_4)
{
 struct usb_interface *VAR_5 = FUNC_7(VAR_4->dev.parent);
 struct usb_device *VAR_6 = FUNC_3(VAR_5);
 struct arvo_device *VAR_7;
 int VAR_8;

 if (VAR_5->cur_altsetting->desc.bInterfaceProtocol
   == VAR_2) {
  FUNC_2(VAR_4, ((void*)0));
  return 0;
 }

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_1);
 if (!VAR_7) {
  FUNC_1(VAR_4, "can't alloc device descriptor\n");
  return -VAR_0;
 }
 FUNC_2(VAR_4, VAR_7);

 VAR_8 = FUNC_0(VAR_6, VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_4, "couldn't init struct arvo_device\n");
  goto exit_free;
 }

 VAR_8 = FUNC_6(VAR_3, VAR_4,
   sizeof(struct arvo_roccat_report));
 if (VAR_8 < 0) {
  FUNC_1(VAR_4, "couldn't init char dev\n");
 } else {
  VAR_7->chrdev_minor = VAR_8;
  VAR_7->roccat_claimed = 1;
 }

 return 0;
exit_free:
 FUNC_4(VAR_7);
 return VAR_8;
}
