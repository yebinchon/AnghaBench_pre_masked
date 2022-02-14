
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_5__ {TYPE_1__* primary; } ;
struct udl_device {TYPE_2__ drm; } ;
struct TYPE_4__ {int index; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct udl_device*) ;
 int FUNC_2 (struct udl_device*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 struct udl_device* FUNC_5 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_6(struct usb_interface *VAR_0,
    const struct usb_device_id *VAR_1)
{
 int VAR_2;
 struct udl_device *VAR_3;

 VAR_3 = FUNC_5(VAR_0);
 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_3);

 VAR_2 = FUNC_4(&VAR_3->drm, 0);
 if (VAR_2)
  goto err_free;

 FUNC_0("Initialized udl on minor %d\n", VAR_3->drm.primary->index);

 return 0;

err_free:
 FUNC_3(&VAR_3->drm);
 return VAR_2;
}
