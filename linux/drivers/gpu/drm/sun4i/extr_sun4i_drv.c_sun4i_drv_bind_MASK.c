
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_drv {int tcon_list; int engine_list; int frontend_list; } ;
struct TYPE_2__ {int allow_fb_modifiers; int num_crtc; } ;
struct drm_device {int irq_enabled; TYPE_1__ mode_config; int dev; struct sun4i_drv* dev_private; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int ,struct drm_device*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct device*,struct drm_device*) ;
 struct sun4i_drv* FUNC_6 (struct device*,int,int ) ;
 struct drm_device* FUNC_7 (int *,struct device*) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*,int ) ;
 int FUNC_10 (int *,char*,int) ;
 int FUNC_11 (struct drm_device*,int) ;
 int FUNC_12 (struct drm_device*) ;
 int FUNC_13 (struct drm_device*) ;
 int FUNC_14 (struct drm_device*) ;
 int FUNC_15 (struct drm_device*) ;
 int FUNC_16 (struct drm_device*,int ) ;
 int FUNC_17 (struct device*) ;
 int FUNC_18 (struct device*) ;
 int VAR_3 ;
 int FUNC_19 (struct drm_device*) ;

__attribute__((used)) static int FUNC_20(struct device *VAR_4)
{
 struct drm_device *VAR_5;
 struct sun4i_drv *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_7(&VAR_3, VAR_4);
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);

 VAR_6 = FUNC_6(VAR_4, sizeof(*VAR_6), VAR_2);
 if (!VAR_6) {
  VAR_7 = -VAR_1;
  goto free_drm;
 }

 FUNC_5(VAR_4, VAR_5);
 VAR_5->dev_private = VAR_6;
 FUNC_0(&VAR_6->frontend_list);
 FUNC_0(&VAR_6->engine_list);
 FUNC_0(&VAR_6->tcon_list);

 VAR_7 = FUNC_17(VAR_4);
 if (VAR_7 && VAR_7 != -VAR_0) {
  FUNC_4(VAR_5->dev, "Couldn't claim our memory region\n");
  goto free_drm;
 }

 FUNC_15(VAR_5);
 VAR_5->mode_config.allow_fb_modifiers = 1;

 VAR_7 = FUNC_3(VAR_5->dev, VAR_5);
 if (VAR_7) {
  FUNC_4(VAR_5->dev, "Couldn't bind all pipelines components\n");
  goto cleanup_mode_config;
 }


 VAR_7 = FUNC_16(VAR_5, VAR_5->mode_config.num_crtc);
 if (VAR_7)
  goto cleanup_mode_config;

 VAR_5->irq_enabled = 1;


 FUNC_10(((void*)0), "sun4i-drm-fb", 0);

 FUNC_19(VAR_5);


 FUNC_13(VAR_5);

 VAR_7 = FUNC_9(VAR_5, 0);
 if (VAR_7)
  goto finish_poll;

 FUNC_11(VAR_5, 32);

 return 0;

finish_poll:
 FUNC_12(VAR_5);
cleanup_mode_config:
 FUNC_14(VAR_5);
 FUNC_18(VAR_4);
free_drm:
 FUNC_8(VAR_5);
 return VAR_7;
}
