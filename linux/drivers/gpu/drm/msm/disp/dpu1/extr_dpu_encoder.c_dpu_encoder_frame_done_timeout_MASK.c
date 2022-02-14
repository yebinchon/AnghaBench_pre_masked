
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct timer_list {int dummy; } ;
struct msm_drm_private {int dummy; } ;
struct drm_encoder {TYPE_1__* dev; } ;
struct dpu_encoder_virt {int crtc_frame_event_cb_data; int (* crtc_frame_event_cb ) (int ,int ) ;int frame_done_timeout_ms; int * frame_busy_mask; struct drm_encoder base; } ;
struct TYPE_2__ {struct msm_drm_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct dpu_encoder_virt*,char*) ;
 int FUNC_2 (struct drm_encoder*) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (int *,int ) ;
 struct dpu_encoder_virt* VAR_1 ;
 int VAR_2 ;
 struct dpu_encoder_virt* FUNC_5 (int ,struct timer_list*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_3)
{
 struct dpu_encoder_virt *VAR_4 = FUNC_5(VAR_4, VAR_3,
   VAR_2);
 struct drm_encoder *VAR_5 = &VAR_4->base;
 struct msm_drm_private *VAR_6;
 u32 VAR_7;

 if (!VAR_5->dev || !VAR_5->dev->dev_private) {
  FUNC_0("invalid parameters\n");
  return;
 }
 VAR_6 = VAR_5->dev->dev_private;

 if (!VAR_4->frame_busy_mask[0] || !VAR_4->crtc_frame_event_cb) {
  FUNC_3("id:%u invalid timeout frame_busy_mask=%lu\n",
         FUNC_2(VAR_5), VAR_4->frame_busy_mask[0]);
  return;
 } else if (!FUNC_4(&VAR_4->frame_done_timeout_ms, 0)) {
  FUNC_3("id:%u invalid timeout\n", FUNC_2(VAR_5));
  return;
 }

 FUNC_1(VAR_4, "frame done timeout\n");

 VAR_7 = VAR_0;
 FUNC_7(FUNC_2(VAR_5), VAR_7);
 VAR_4->crtc_frame_event_cb(VAR_4->crtc_frame_event_cb_data, VAR_7);
}
