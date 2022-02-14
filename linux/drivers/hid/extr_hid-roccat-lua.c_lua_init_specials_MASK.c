
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct lua_device {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct hid_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hid_device*,char*) ;
 int FUNC_1 (struct hid_device*,struct lua_device*) ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct lua_device*) ;
 struct lua_device* FUNC_4 (int,int ) ;
 int FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usb_device*,struct lua_device*) ;
 struct usb_interface* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct hid_device *VAR_2)
{
 struct usb_interface *VAR_3 = FUNC_7(VAR_2->dev.parent);
 struct usb_device *VAR_4 = FUNC_2(VAR_3);
 struct lua_device *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  FUNC_0(VAR_2, "can't alloc device descriptor\n");
  return -VAR_0;
 }
 FUNC_1(VAR_2, VAR_5);

 VAR_6 = FUNC_6(VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_2, "couldn't init struct lua_device\n");
  goto exit;
 }

 VAR_6 = FUNC_5(VAR_3);
 if (VAR_6) {
  FUNC_0(VAR_2, "cannot create sysfs files\n");
  goto exit;
 }

 return 0;
exit:
 FUNC_3(VAR_5);
 return VAR_6;
}
