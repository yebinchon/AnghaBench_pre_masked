
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int min_width; int min_height; int max_width; int max_height; int allow_fb_modifiers; int normalize_zpos; int * helper_private; int * funcs; } ;
struct drm_device {int irq_enabled; int dev; TYPE_1__ mode_config; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct device*,struct drm_device*) ;
 int FUNC_3 (int ,struct drm_device*) ;
 int FUNC_4 (struct device*,struct drm_device*) ;
 int FUNC_5 (struct device*,char*) ;
 struct drm_device* FUNC_6 (int *,struct device*) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*,int ) ;
 int FUNC_9 (struct drm_device*,int) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_device*) ;
 int FUNC_12 (struct drm_device*) ;
 int FUNC_13 (struct drm_device*) ;
 int FUNC_14 (struct drm_device*) ;
 int FUNC_15 (struct drm_device*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_16(struct device *VAR_5)
{
 struct drm_device *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_6(&VAR_1, VAR_5);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);
 VAR_6->irq_enabled = 1;






 VAR_6->mode_config.min_width = 1;
 VAR_6->mode_config.min_height = 1;
 VAR_6->mode_config.max_width = 4096;
 VAR_6->mode_config.max_height = 4096;
 VAR_6->mode_config.funcs = &VAR_2;
 VAR_6->mode_config.helper_private = &VAR_3;
 VAR_6->mode_config.allow_fb_modifiers = 1;
 VAR_6->mode_config.normalize_zpos = 1;

 FUNC_13(VAR_6);

 VAR_7 = FUNC_15(VAR_6, VAR_0);
 if (VAR_7)
  goto err_kms;

 FUNC_4(VAR_5, VAR_6);


 VAR_7 = FUNC_2(VAR_5, VAR_6);
 if (VAR_7)
  goto err_kms;

 FUNC_14(VAR_6);






 if (VAR_4 != 16 && VAR_4 != 32) {
  FUNC_5(VAR_5, "Invalid legacyfb_depth.  Defaulting to 16bpp\n");
  VAR_4 = 16;
 }

 FUNC_11(VAR_6);

 VAR_7 = FUNC_8(VAR_6, 0);
 if (VAR_7)
  goto err_poll_fini;

 FUNC_9(VAR_6, VAR_4);

 return 0;

err_poll_fini:
 FUNC_10(VAR_6);
 FUNC_3(VAR_6->dev, VAR_6);
err_kms:
 FUNC_12(VAR_6);
 FUNC_7(VAR_6);

 return VAR_7;
}
