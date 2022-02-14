
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_fb_helper_funcs {int dummy; } ;
struct drm_fb_helper {int dummy; } ;
struct TYPE_2__ {unsigned int preferred_depth; } ;
struct drm_device {int dev; TYPE_1__ mode_config; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*,struct drm_fb_helper*,int ) ;
 int FUNC_4 (struct drm_fb_helper*,unsigned int) ;
 int FUNC_5 (struct drm_device*,struct drm_fb_helper*,struct drm_fb_helper_funcs const*) ;
 int FUNC_6 (struct drm_device*) ;

int FUNC_7(struct drm_device *VAR_0,
         struct drm_fb_helper *VAR_1,
         const struct drm_fb_helper_funcs *VAR_2,
         unsigned int VAR_3,
         unsigned int VAR_4)
{
 int VAR_5;

 if (!VAR_3)
  VAR_3 = VAR_0->mode_config.preferred_depth;
 if (!VAR_3)
  VAR_3 = 32;

 FUNC_5(VAR_0, VAR_1, VAR_2);

 VAR_5 = FUNC_3(VAR_0, VAR_1, 0);
 if (VAR_5 < 0) {
  FUNC_0(VAR_0->dev, "fbdev: Failed to initialize (ret=%d)\n", VAR_5);
  return VAR_5;
 }

 if (!FUNC_1(VAR_0))
  FUNC_6(VAR_0);

 VAR_5 = FUNC_4(VAR_1, VAR_3);
 if (VAR_5 < 0) {
  FUNC_0(VAR_0->dev, "fbdev: Failed to set configuration (ret=%d)\n", VAR_5);
  goto err_drm_fb_helper_fini;
 }

 return 0;

err_drm_fb_helper_fini:
 FUNC_2(VAR_0);

 return VAR_5;
}
