
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int min_width; int min_height; int max_width; int max_height; int num_crtc; int * funcs; } ;
struct drm_device {int irq_enabled; TYPE_1__ mode_config; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct device*,struct drm_device*) ;
 int FUNC_4 (struct device*,struct drm_device*) ;
 int FUNC_5 (struct device*,struct drm_device*) ;
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
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_16(struct device *VAR_2)
{
 struct drm_device *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_6(&VAR_0, VAR_2);
 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_3);

 FUNC_5(VAR_2, VAR_3);

 FUNC_13(VAR_3);
 VAR_3->mode_config.min_width = 16;
 VAR_3->mode_config.min_height = 16;
 VAR_3->mode_config.max_width = 4096;
 VAR_3->mode_config.max_height = 4096;
 VAR_3->mode_config.funcs = &VAR_1;

 VAR_4 = FUNC_3(VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_2, "failed to bind all components: %d\n", VAR_4);
  goto out_unregister;
 }

 VAR_4 = FUNC_15(VAR_3, VAR_3->mode_config.num_crtc);
 if (VAR_4 < 0) {
  FUNC_0(VAR_2, "failed to init vblank: %d\n", VAR_4);
  goto out_unbind;
 }





 VAR_3->irq_enabled = 1;

 FUNC_14(VAR_3);
 FUNC_11(VAR_3);

 VAR_4 = FUNC_8(VAR_3, 0);
 if (VAR_4)
  goto out_poll_fini;

 FUNC_9(VAR_3, 32);

 return 0;

out_poll_fini:
 FUNC_10(VAR_3);
 FUNC_12(VAR_3);
out_unbind:
 FUNC_4(VAR_2, VAR_3);
out_unregister:
 FUNC_5(VAR_2, ((void*)0));
 FUNC_7(VAR_3);
 return VAR_4;
}
