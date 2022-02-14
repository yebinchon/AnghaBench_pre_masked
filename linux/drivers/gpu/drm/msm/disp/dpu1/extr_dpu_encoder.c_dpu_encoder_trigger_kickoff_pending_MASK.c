
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_display_info {int capabilities; } ;
struct drm_encoder {int dummy; } ;
struct TYPE_2__ {int (* trigger_pending ) (struct dpu_hw_ctl*) ;int (* clear_pending_flush ) (struct dpu_hw_ctl*) ;} ;
struct dpu_hw_ctl {TYPE_1__ ops; } ;
struct dpu_encoder_virt {unsigned int num_phys_encs; struct dpu_encoder_phys* cur_master; struct dpu_encoder_phys** phys_encs; struct msm_display_info disp_info; } ;
struct dpu_encoder_phys {struct dpu_hw_ctl* hw_ctl; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct dpu_hw_ctl*) ;
 int FUNC_2 (struct dpu_hw_ctl*) ;
 struct dpu_encoder_virt* FUNC_3 (struct drm_encoder*) ;

void FUNC_4(struct drm_encoder *VAR_1)
{
 struct dpu_encoder_virt *VAR_2;
 struct dpu_encoder_phys *VAR_3;
 unsigned int VAR_4;
 struct dpu_hw_ctl *VAR_5;
 struct msm_display_info *VAR_6;

 if (!VAR_1) {
  FUNC_0("invalid encoder\n");
  return;
 }
 VAR_2 = FUNC_3(VAR_1);
 VAR_6 = &VAR_2->disp_info;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_phys_encs; VAR_4++) {
  VAR_3 = VAR_2->phys_encs[VAR_4];

  if (VAR_3 && VAR_3->hw_ctl) {
   VAR_5 = VAR_3->hw_ctl;
   if (VAR_5->ops.clear_pending_flush)
    VAR_5->ops.clear_pending_flush(VAR_5);


   if ((VAR_3 == VAR_2->cur_master) &&
      (VAR_6->capabilities & VAR_0)
       && VAR_5->ops.trigger_pending)
    VAR_5->ops.trigger_pending(VAR_5);
  }
 }
}
