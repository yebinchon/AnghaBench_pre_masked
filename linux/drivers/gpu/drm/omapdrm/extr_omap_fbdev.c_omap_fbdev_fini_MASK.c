
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_fbdev {scalar_t__ fb; scalar_t__ bo; } ;
struct omap_drm_private {struct drm_fb_helper* fbdev; } ;
struct drm_fb_helper {int dummy; } ;
struct drm_device {struct omap_drm_private* dev_private; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct drm_fb_helper*) ;
 int FUNC_2 (struct drm_fb_helper*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct omap_fbdev*) ;
 int FUNC_5 (scalar_t__) ;
 struct omap_fbdev* FUNC_6 (struct drm_fb_helper*) ;

void FUNC_7(struct drm_device *VAR_0)
{
 struct omap_drm_private *VAR_1 = VAR_0->dev_private;
 struct drm_fb_helper *VAR_2 = VAR_1->fbdev;
 struct omap_fbdev *VAR_3;

 FUNC_0();

 if (!VAR_2)
  return;

 FUNC_2(VAR_2);

 FUNC_1(VAR_2);

 VAR_3 = FUNC_6(VAR_2);


 if (VAR_3->bo)
  FUNC_5(VAR_3->bo);


 if (VAR_3->fb)
  FUNC_3(VAR_3->fb);

 FUNC_4(VAR_3);

 VAR_1->fbdev = ((void*)0);
}
