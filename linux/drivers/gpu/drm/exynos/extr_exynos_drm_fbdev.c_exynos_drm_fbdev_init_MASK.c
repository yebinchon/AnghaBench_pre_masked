
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_drm_private {struct drm_fb_helper* fb_helper; } ;
struct drm_fb_helper {int dummy; } ;
struct exynos_drm_fbdev {struct drm_fb_helper drm_fb_helper; } ;
struct TYPE_2__ {int num_crtc; } ;
struct drm_device {int dev; TYPE_1__ mode_config; struct exynos_drm_private* dev_private; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct drm_fb_helper*) ;
 int FUNC_2 (struct drm_device*,struct drm_fb_helper*,int ) ;
 int FUNC_3 (struct drm_fb_helper*,int ) ;
 int FUNC_4 (struct drm_device*,struct drm_fb_helper*,int *) ;
 int FUNC_5 (struct drm_fb_helper*) ;
 int VAR_4 ;
 int FUNC_6 (struct exynos_drm_fbdev*) ;
 struct exynos_drm_fbdev* FUNC_7 (int,int ) ;

int FUNC_8(struct drm_device *VAR_5)
{
 struct exynos_drm_fbdev *VAR_6;
 struct exynos_drm_private *VAR_7 = VAR_5->dev_private;
 struct drm_fb_helper *VAR_8;
 int VAR_9;

 if (!VAR_5->mode_config.num_crtc)
  return 0;

 VAR_6 = FUNC_7(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7->fb_helper = VAR_8 = &VAR_6->drm_fb_helper;

 FUNC_4(VAR_5, VAR_8, &VAR_4);

 VAR_9 = FUNC_2(VAR_5, VAR_8, VAR_2);
 if (VAR_9 < 0) {
  FUNC_0(VAR_5->dev,
         "failed to initialize drm fb helper.\n");
  goto err_init;
 }

 VAR_9 = FUNC_5(VAR_8);
 if (VAR_9 < 0) {
  FUNC_0(VAR_5->dev,
         "failed to register drm_fb_helper_connector.\n");
  goto err_setup;

 }

 VAR_9 = FUNC_3(VAR_8, VAR_3);
 if (VAR_9 < 0) {
  FUNC_0(VAR_5->dev,
         "failed to set up hw configuration.\n");
  goto err_setup;
 }

 return 0;

err_setup:
 FUNC_1(VAR_8);

err_init:
 VAR_7->fb_helper = ((void*)0);
 FUNC_6(VAR_6);

 return VAR_9;
}
