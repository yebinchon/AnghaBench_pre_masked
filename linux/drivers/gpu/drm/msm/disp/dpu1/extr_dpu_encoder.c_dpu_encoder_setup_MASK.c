
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_drm_private {int kms; } ;
struct msm_display_info {scalar_t__ intf_type; } ;
struct drm_encoder {int dummy; } ;
struct drm_device {struct msm_drm_private* dev_private; } ;
struct dpu_kms {int dummy; } ;
struct dpu_encoder_virt {int disp_info; int vsync_event_work; int idle_timeout; int delayed_off_work; int rc_lock; int vsync_event_timer; int frame_done_timer; int frame_done_timeout_ms; int enc_lock; } ;


 int FUNC_0 (struct dpu_encoder_virt*,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct drm_encoder*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct dpu_encoder_virt*,struct dpu_kms*,struct msm_display_info*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,struct msm_display_info*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ) ;
 struct dpu_encoder_virt* FUNC_10 (struct drm_encoder*) ;
 struct dpu_kms* FUNC_11 (int ) ;

int FUNC_12(struct drm_device *VAR_6, struct drm_encoder *VAR_7,
  struct msm_display_info *VAR_8)
{
 struct msm_drm_private *VAR_9 = VAR_6->dev_private;
 struct dpu_kms *VAR_10 = FUNC_11(VAR_9->kms);
 struct drm_encoder *VAR_11 = ((void*)0);
 struct dpu_encoder_virt *VAR_12 = ((void*)0);
 int VAR_13 = 0;

 VAR_12 = FUNC_10(VAR_7);

 FUNC_8(&VAR_12->enc_lock);
 VAR_13 = FUNC_5(VAR_12, VAR_10, VAR_8);
 if (VAR_13)
  goto fail;

 FUNC_3(&VAR_12->frame_done_timeout_ms, 0);
 FUNC_9(&VAR_12->frame_done_timer,
   VAR_2, 0);

 if (VAR_8->intf_type == VAR_0)
  FUNC_9(&VAR_12->vsync_event_timer,
    VAR_4,
    0);


 FUNC_8(&VAR_12->rc_lock);
 FUNC_2(&VAR_12->delayed_off_work,
   VAR_3);
 VAR_12->idle_timeout = VAR_1;

 FUNC_6(&VAR_12->vsync_event_work,
   VAR_5);

 FUNC_7(&VAR_12->disp_info, VAR_8, sizeof(*VAR_8));

 FUNC_0(VAR_12, "created\n");

 return VAR_13;

fail:
 FUNC_1("failed to create encoder\n");
 if (VAR_11)
  FUNC_4(VAR_11);

 return VAR_13;


}
