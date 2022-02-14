
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct msm_drm_thread {int dummy; } ;
struct msm_drm_private {struct msm_drm_thread* event_thread; } ;
struct drm_encoder {TYPE_2__* crtc; TYPE_1__* dev; } ;
struct dpu_encoder_virt {int vsync_event_timer; struct drm_encoder base; } ;
struct TYPE_4__ {size_t index; } ;
struct TYPE_3__ {struct msm_drm_private* dev_private; } ;


 size_t FUNC_0 (struct msm_drm_thread*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *) ;
 struct dpu_encoder_virt* VAR_0 ;
 struct dpu_encoder_virt* FUNC_3 (int ,struct timer_list*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 struct dpu_encoder_virt *VAR_3 = FUNC_3(VAR_3, VAR_2,
   VAR_1);
 struct drm_encoder *VAR_4 = &VAR_3->base;
 struct msm_drm_private *VAR_5;
 struct msm_drm_thread *VAR_6;

 if (!VAR_4->dev || !VAR_4->dev->dev_private ||
   !VAR_4->crtc) {
  FUNC_1("invalid parameters\n");
  return;
 }

 VAR_5 = VAR_4->dev->dev_private;

 if (VAR_4->crtc->index >= FUNC_0(VAR_5->event_thread)) {
  FUNC_1("invalid crtc index\n");
  return;
 }
 VAR_6 = &VAR_5->event_thread[VAR_4->crtc->index];
 if (!VAR_6) {
  FUNC_1("event_thread not found for crtc:%d\n",
    VAR_4->crtc->index);
  return;
 }

 FUNC_2(&VAR_3->vsync_event_timer);
}
