
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_fb_helper {scalar_t__ fb; } ;
struct rockchip_drm_private {struct drm_fb_helper fbdev_helper; } ;
struct drm_device {struct rockchip_drm_private* dev_private; } ;


 int FUNC_0 (struct drm_fb_helper*) ;
 int FUNC_1 (struct drm_fb_helper*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct drm_device *VAR_0)
{
 struct rockchip_drm_private *VAR_1 = VAR_0->dev_private;
 struct drm_fb_helper *VAR_2;

 VAR_2 = &VAR_1->fbdev_helper;

 FUNC_1(VAR_2);

 if (VAR_2->fb)
  FUNC_2(VAR_2->fb);

 FUNC_0(VAR_2);
}
