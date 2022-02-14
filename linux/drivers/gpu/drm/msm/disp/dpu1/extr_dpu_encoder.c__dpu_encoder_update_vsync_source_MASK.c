
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct msm_drm_private {int kms; } ;
struct msm_display_info {int capabilities; scalar_t__ is_te_using_watchdog_timer; } ;
struct drm_encoder {TYPE_1__* dev; } ;
struct dpu_vsync_source_cfg {int pp_count; int vsync_source; int * ppnumber; int member_0; } ;
struct dpu_kms {struct dpu_hw_mdp* hw_mdp; } ;
struct TYPE_5__ {int (* setup_vsync_source ) (struct dpu_hw_mdp*,struct dpu_vsync_source_cfg*) ;} ;
struct dpu_hw_mdp {TYPE_2__ ops; } ;
struct dpu_encoder_virt {int num_phys_encs; TYPE_3__** hw_pp; struct drm_encoder base; } ;
struct TYPE_6__ {int idx; } ;
struct TYPE_4__ {struct msm_drm_private* dev_private; } ;


 int FUNC_0 (TYPE_3__**) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct dpu_hw_mdp*,struct dpu_vsync_source_cfg*) ;
 struct dpu_kms* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct dpu_encoder_virt *VAR_3,
   struct msm_display_info *VAR_4)
{
 struct dpu_vsync_source_cfg VAR_5 = { 0 };
 struct msm_drm_private *VAR_6;
 struct dpu_kms *VAR_7;
 struct dpu_hw_mdp *VAR_8;
 struct drm_encoder *VAR_9;
 int VAR_10;

 if (!VAR_3 || !VAR_4) {
  FUNC_1("invalid param dpu_enc:%d or disp_info:%d\n",
     VAR_3 != ((void*)0), VAR_4 != ((void*)0));
  return;
 } else if (VAR_3->num_phys_encs > FUNC_0(VAR_3->hw_pp)) {
  FUNC_1("invalid num phys enc %d/%d\n",
    VAR_3->num_phys_encs,
    (int) FUNC_0(VAR_3->hw_pp));
  return;
 }

 VAR_9 = &VAR_3->base;

 VAR_6 = VAR_9->dev->dev_private;

 VAR_7 = FUNC_3(VAR_6->kms);
 if (!VAR_7) {
  FUNC_1("invalid dpu_kms\n");
  return;
 }

 VAR_8 = VAR_7->hw_mdp;
 if (!VAR_8) {
  FUNC_1("invalid mdptop\n");
  return;
 }

 if (VAR_8->ops.setup_vsync_source &&
   VAR_4->capabilities & VAR_2) {
  for (VAR_10 = 0; VAR_10 < VAR_3->num_phys_encs; VAR_10++)
   VAR_5.ppnumber[VAR_10] = VAR_3->hw_pp[VAR_10]->idx;

  VAR_5.pp_count = VAR_3->num_phys_encs;
  if (VAR_4->is_te_using_watchdog_timer)
   VAR_5.vsync_source = VAR_1;
  else
   VAR_5.vsync_source = VAR_0;

  VAR_8->ops.setup_vsync_source(VAR_8, &VAR_5);
 }
}
