
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_fbdev {int work; int ywrap_enabled; } ;
struct omap_drm_private {int wq; } ;
struct fb_var_screeninfo {int dummy; } ;
struct fb_info {int dummy; } ;
struct drm_fb_helper {TYPE_1__* dev; } ;
struct TYPE_2__ {struct omap_drm_private* dev_private; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct fb_var_screeninfo*,struct fb_info*) ;
 struct drm_fb_helper* FUNC_2 (struct fb_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 struct omap_fbdev* FUNC_5 (struct drm_fb_helper*) ;

__attribute__((used)) static int FUNC_6(struct fb_var_screeninfo *VAR_0,
  struct fb_info *VAR_1)
{
 struct drm_fb_helper *VAR_2 = FUNC_2(VAR_1);
 struct omap_fbdev *VAR_3 = FUNC_5(VAR_2);

 if (!VAR_2)
  goto fallback;

 if (!VAR_3->ywrap_enabled)
  goto fallback;

 if (FUNC_0()) {
  FUNC_3(&VAR_3->work);
 } else {
  struct omap_drm_private *VAR_4 = VAR_2->dev->dev_private;
  FUNC_4(VAR_4->wq, &VAR_3->work);
 }

 return 0;

fallback:
 return FUNC_1(VAR_0, VAR_1);
}
