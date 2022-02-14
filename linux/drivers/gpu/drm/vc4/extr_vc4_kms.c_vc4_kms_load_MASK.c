
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc4_load_tracker_state {int base; } ;
struct vc4_dev {int load_tracker_enabled; int load_tracker; int ctm_manager; int ctm_state_lock; int async_modeset; } ;
struct vc4_ctm_state {int base; } ;
struct TYPE_2__ {int max_width; int max_height; int preferred_depth; int async_page_flip; int allow_fb_modifiers; int * funcs; int num_crtc; } ;
struct drm_device {int vblank_disable_immediate; int irq_enabled; TYPE_1__ mode_config; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_device*,int *,int *,int *) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct drm_device*,int ) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int) ;
 struct vc4_dev* FUNC_9 (struct drm_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_10(struct drm_device *VAR_5)
{
 struct vc4_dev *VAR_6 = FUNC_9(VAR_5);
 struct vc4_ctm_state *VAR_7;
 struct vc4_load_tracker_state *VAR_8;
 int VAR_9;




 VAR_6->load_tracker_enabled = 1;

 FUNC_8(&VAR_6->async_modeset, 1);


 VAR_5->vblank_disable_immediate = 1;

 VAR_5->irq_enabled = 1;
 VAR_9 = FUNC_6(VAR_5, VAR_5->mode_config.num_crtc);
 if (VAR_9 < 0) {
  FUNC_0(VAR_5->dev, "failed to initialize vblank\n");
  return VAR_9;
 }

 VAR_5->mode_config.max_width = 2048;
 VAR_5->mode_config.max_height = 2048;
 VAR_5->mode_config.funcs = &VAR_4;
 VAR_5->mode_config.preferred_depth = 24;
 VAR_5->mode_config.async_page_flip = 1;
 VAR_5->mode_config.allow_fb_modifiers = 1;

 FUNC_5(&VAR_6->ctm_state_lock);

 VAR_7 = FUNC_7(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_2(VAR_5, &VAR_6->ctm_manager, &VAR_7->base,
        &VAR_2);

 VAR_8 = FUNC_7(sizeof(*VAR_8), VAR_1);
 if (!VAR_8) {
  FUNC_1(&VAR_6->ctm_manager);
  return -VAR_0;
 }

 FUNC_2(VAR_5, &VAR_6->load_tracker, &VAR_8->base,
        &VAR_3);

 FUNC_4(VAR_5);

 FUNC_3(VAR_5);

 return 0;
}
