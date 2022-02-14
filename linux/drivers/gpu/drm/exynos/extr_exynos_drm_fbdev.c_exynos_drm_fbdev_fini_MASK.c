
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_private {int * fb_helper; } ;
struct exynos_drm_fbdev {int dummy; } ;
struct drm_device {struct exynos_drm_private* dev_private; } ;


 int FUNC_0 (struct drm_device*,int *) ;
 int FUNC_1 (struct exynos_drm_fbdev*) ;
 struct exynos_drm_fbdev* FUNC_2 (int *) ;

void FUNC_3(struct drm_device *VAR_0)
{
 struct exynos_drm_private *VAR_1 = VAR_0->dev_private;
 struct exynos_drm_fbdev *VAR_2;

 if (!VAR_1 || !VAR_1->fb_helper)
  return;

 VAR_2 = FUNC_2(VAR_1->fb_helper);

 FUNC_0(VAR_0, VAR_1->fb_helper);
 FUNC_1(VAR_2);
 VAR_1->fb_helper = ((void*)0);
}
