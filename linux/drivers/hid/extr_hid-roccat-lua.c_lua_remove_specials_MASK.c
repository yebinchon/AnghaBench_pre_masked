
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct lua_device {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct hid_device {TYPE_1__ dev; } ;


 struct lua_device* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct lua_device*) ;
 int FUNC_2 (struct usb_interface*) ;
 struct usb_interface* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct hid_device *VAR_0)
{
 struct usb_interface *VAR_1 = FUNC_3(VAR_0->dev.parent);
 struct lua_device *VAR_2;

 FUNC_2(VAR_1);

 VAR_2 = FUNC_0(VAR_0);
 FUNC_1(VAR_2);
}
