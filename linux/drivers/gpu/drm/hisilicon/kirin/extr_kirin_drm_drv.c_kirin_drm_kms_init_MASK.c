
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kirin_drm_data {int mode_config_funcs; int config_max_width; } ;
struct TYPE_2__ {int num_crtc; int funcs; int max_height; int max_width; scalar_t__ min_height; scalar_t__ min_width; } ;
struct drm_device {int irq_enabled; int dev; TYPE_1__ mode_config; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct drm_device*) ;
 int FUNC_2 (int ,struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*,int ) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*,struct kirin_drm_data const*) ;

__attribute__((used)) static int FUNC_10(struct drm_device *VAR_0,
         const struct kirin_drm_data *VAR_1)
{
 int VAR_2;


 FUNC_5(VAR_0);
 VAR_0->mode_config.min_width = 0;
 VAR_0->mode_config.min_height = 0;
 VAR_0->mode_config.max_width = VAR_1->config_max_width;
 VAR_0->mode_config.max_height = VAR_1->config_max_width;
 VAR_0->mode_config.funcs = VAR_1->mode_config_funcs;


 VAR_2 = FUNC_9(VAR_0, VAR_1);
 if (VAR_2)
  goto err_mode_config_cleanup;


 VAR_2 = FUNC_1(VAR_0->dev, VAR_0);
 if (VAR_2) {
  FUNC_0("failed to bind all component.\n");
  goto err_private_cleanup;
 }


 VAR_2 = FUNC_7(VAR_0, VAR_0->mode_config.num_crtc);
 if (VAR_2) {
  FUNC_0("failed to initialize vblank.\n");
  goto err_unbind_all;
 }

 VAR_0->irq_enabled = 1;


 FUNC_6(VAR_0);


 FUNC_3(VAR_0);

 return 0;

err_unbind_all:
 FUNC_2(VAR_0->dev, VAR_0);
err_private_cleanup:
 FUNC_8(VAR_0);
err_mode_config_cleanup:
 FUNC_4(VAR_0);
 return VAR_2;
}
