
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct msm_drm_private {int kms; } ;
struct TYPE_10__ {int id; } ;
struct drm_encoder {TYPE_5__ base; TYPE_3__* dev; TYPE_2__* crtc; } ;
struct drm_display_mode {int dummy; } ;
struct dpu_kms {int rm; } ;
struct dpu_encoder_virt {int enabled; int num_phys_encs; int enc_lock; struct dpu_encoder_phys** phys_encs; int frame_done_timer; int frame_done_timeout_ms; } ;
struct TYPE_9__ {int (* disable ) (struct dpu_encoder_phys*) ;} ;
struct dpu_encoder_phys {int * connector; TYPE_4__ ops; } ;
struct TYPE_8__ {struct msm_drm_private* dev_private; } ;
struct TYPE_7__ {TYPE_1__* state; } ;
struct TYPE_6__ {struct drm_display_mode adjusted_mode; } ;


 int FUNC_0 (struct dpu_encoder_virt*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct drm_encoder*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_encoder*,int ) ;
 int FUNC_6 (struct drm_encoder*,int ) ;
 int FUNC_7 (int *,struct drm_encoder*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct dpu_encoder_phys*) ;
 struct dpu_encoder_virt* FUNC_11 (struct drm_encoder*) ;
 struct dpu_kms* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct drm_encoder *VAR_3)
{
 struct dpu_encoder_virt *VAR_4 = ((void*)0);
 struct msm_drm_private *VAR_5;
 struct dpu_kms *VAR_6;
 struct drm_display_mode *VAR_7;
 int VAR_8 = 0;

 if (!VAR_3) {
  FUNC_1("invalid encoder\n");
  return;
 } else if (!VAR_3->dev) {
  FUNC_1("invalid dev\n");
  return;
 } else if (!VAR_3->dev->dev_private) {
  FUNC_1("invalid dev_private\n");
  return;
 }

 VAR_4 = FUNC_11(VAR_3);
 FUNC_0(VAR_4, "\n");

 FUNC_8(&VAR_4->enc_lock);
 VAR_4->enabled = 0;

 VAR_7 = &VAR_3->crtc->state->adjusted_mode;

 VAR_5 = VAR_3->dev->dev_private;
 VAR_6 = FUNC_12(VAR_5->kms);

 FUNC_13(FUNC_2(VAR_3));


 FUNC_6(VAR_3, VAR_2);

 FUNC_5(VAR_3, VAR_0);

 for (VAR_8 = 0; VAR_8 < VAR_4->num_phys_encs; VAR_8++) {
  struct dpu_encoder_phys *VAR_9 = VAR_4->phys_encs[VAR_8];

  if (VAR_9 && VAR_9->ops.disable)
   VAR_9->ops.disable(VAR_9);
 }


 if (FUNC_3(&VAR_4->frame_done_timeout_ms, 0)) {
  FUNC_1("enc%d timeout pending\n", VAR_3->base.id);
  FUNC_4(&VAR_4->frame_done_timer);
 }

 FUNC_5(VAR_3, VAR_1);

 for (VAR_8 = 0; VAR_8 < VAR_4->num_phys_encs; VAR_8++) {
  if (VAR_4->phys_encs[VAR_8])
   VAR_4->phys_encs[VAR_8]->connector = ((void*)0);
 }

 FUNC_0(VAR_4, "encoder disabled\n");

 FUNC_7(&VAR_6->rm, VAR_3);

 FUNC_9(&VAR_4->enc_lock);
}
