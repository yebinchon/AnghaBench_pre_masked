
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct msm_drm_private {int kms; } ;
struct drm_encoder {TYPE_1__* dev; } ;
struct dpu_kms {int catalog; } ;
struct dpu_encoder_virt {int disp_info; TYPE_3__* cur_master; } ;
struct TYPE_6__ {int (* reset_ubwc ) (TYPE_4__*,int ) ;} ;
struct TYPE_8__ {TYPE_2__ ops; } ;
struct TYPE_7__ {TYPE_4__* hw_mdptop; } ;
struct TYPE_5__ {struct msm_drm_private* dev_private; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dpu_encoder_virt*,int *) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 struct dpu_encoder_virt* FUNC_3 (struct drm_encoder*) ;
 struct dpu_kms* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct drm_encoder *VAR_0)
{
 struct dpu_encoder_virt *VAR_1 = ((void*)0);
 struct msm_drm_private *VAR_2;
 struct dpu_kms *VAR_3;

 if (!VAR_0 || !VAR_0->dev || !VAR_0->dev->dev_private) {
  FUNC_0("invalid parameters\n");
  return;
 }

 VAR_2 = VAR_0->dev->dev_private;
 VAR_3 = FUNC_4(VAR_2->kms);
 if (!VAR_3) {
  FUNC_0("invalid dpu_kms\n");
  return;
 }

 VAR_1 = FUNC_3(VAR_0);
 if (!VAR_1 || !VAR_1->cur_master) {
  FUNC_0("invalid dpu encoder/master\n");
  return;
 }

 if (VAR_1->cur_master->hw_mdptop &&
   VAR_1->cur_master->hw_mdptop->ops.reset_ubwc)
  VAR_1->cur_master->hw_mdptop->ops.reset_ubwc(
    VAR_1->cur_master->hw_mdptop,
    VAR_3->catalog);

 FUNC_1(VAR_1, &VAR_1->disp_info);
}
