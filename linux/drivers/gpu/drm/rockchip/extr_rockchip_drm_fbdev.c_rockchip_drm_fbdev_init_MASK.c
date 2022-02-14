
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_fb_helper {int dummy; } ;
struct rockchip_drm_private {struct drm_fb_helper fbdev_helper; } ;
struct TYPE_2__ {int num_connector; int num_crtc; } ;
struct drm_device {int dev; TYPE_1__ mode_config; struct rockchip_drm_private* dev_private; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drm_fb_helper*) ;
 int FUNC_2 (struct drm_device*,struct drm_fb_helper*,int ) ;
 int FUNC_3 (struct drm_fb_helper*,int ) ;
 int FUNC_4 (struct drm_device*,struct drm_fb_helper*,int *) ;
 int FUNC_5 (struct drm_fb_helper*) ;
 int VAR_3 ;

int FUNC_6(struct drm_device *VAR_4)
{
 struct rockchip_drm_private *VAR_5 = VAR_4->dev_private;
 struct drm_fb_helper *VAR_6;
 int VAR_7;

 if (!VAR_4->mode_config.num_crtc || !VAR_4->mode_config.num_connector)
  return -VAR_0;

 VAR_6 = &VAR_5->fbdev_helper;

 FUNC_4(VAR_4, VAR_6, &VAR_3);

 VAR_7 = FUNC_2(VAR_4, VAR_6, VAR_2);
 if (VAR_7 < 0) {
  FUNC_0(VAR_4->dev,
         "Failed to initialize drm fb helper - %d.\n",
         VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7 < 0) {
  FUNC_0(VAR_4->dev,
         "Failed to add connectors - %d.\n", VAR_7);
  goto err_drm_fb_helper_fini;
 }

 VAR_7 = FUNC_3(VAR_6, VAR_1);
 if (VAR_7 < 0) {
  FUNC_0(VAR_4->dev,
         "Failed to set initial hw config - %d.\n",
         VAR_7);
  goto err_drm_fb_helper_fini;
 }

 return 0;

err_drm_fb_helper_fini:
 FUNC_1(VAR_6);
 return VAR_7;
}
