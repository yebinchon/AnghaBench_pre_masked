
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct gm12u320_device {int dummy; } ;
struct drm_device {struct gm12u320_device* dev_private; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct gm12u320_device*) ;
 struct drm_device* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_4(struct usb_interface *VAR_0)
{
 struct drm_device *VAR_1 = FUNC_3(VAR_0);
 struct gm12u320_device *VAR_2 = VAR_1->dev_private;

 FUNC_2(VAR_2);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
}
