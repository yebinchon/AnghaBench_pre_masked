
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_encoder {TYPE_2__* crtc; } ;
struct TYPE_8__ {scalar_t__ intf_type; } ;
struct dpu_encoder_virt {unsigned int num_phys_encs; int vsync_event_timer; TYPE_4__ disp_info; struct dpu_encoder_phys** phys_encs; int frame_done_timer; int frame_done_timeout_ms; } ;
struct TYPE_7__ {int (* handle_post_kickoff ) (struct dpu_encoder_phys*) ;} ;
struct dpu_encoder_phys {TYPE_3__ ops; } ;
typedef int ktime_t ;
struct TYPE_6__ {TYPE_1__* state; } ;
struct TYPE_5__ {int adjusted_mode; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_encoder*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct dpu_encoder_virt*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct drm_encoder*,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,scalar_t__) ;
 scalar_t__ FUNC_10 (unsigned long) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct dpu_encoder_phys*) ;
 struct dpu_encoder_virt* FUNC_13 (struct drm_encoder*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;

void FUNC_16(struct drm_encoder *VAR_3)
{
 struct dpu_encoder_virt *VAR_4;
 struct dpu_encoder_phys *VAR_5;
 ktime_t VAR_6;
 unsigned long VAR_7;
 unsigned int VAR_8;

 FUNC_0("encoder_kickoff");
 VAR_4 = FUNC_13(VAR_3);

 FUNC_15(FUNC_2(VAR_3));

 VAR_7 = VAR_0 * 1000 /
   FUNC_6(&VAR_3->crtc->state->adjusted_mode);

 FUNC_4(&VAR_4->frame_done_timeout_ms, VAR_7);
 FUNC_9(&VAR_4->frame_done_timer,
   VAR_2 + FUNC_10(VAR_7));


 FUNC_3(VAR_4);


 for (VAR_8 = 0; VAR_8 < VAR_4->num_phys_encs; VAR_8++) {
  VAR_5 = VAR_4->phys_encs[VAR_8];
  if (VAR_5 && VAR_5->ops.handle_post_kickoff)
   VAR_5->ops.handle_post_kickoff(VAR_5);
 }

 if (VAR_4->disp_info.intf_type == VAR_1 &&
   !FUNC_5(VAR_3, &VAR_6)) {
  FUNC_14(FUNC_2(VAR_3),
         FUNC_7(VAR_6));
  FUNC_9(&VAR_4->vsync_event_timer,
    FUNC_11(FUNC_8(VAR_6)));
 }

 FUNC_1("encoder_kickoff");
}
