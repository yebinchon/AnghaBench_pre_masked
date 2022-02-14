
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct dpu_vbif_set_ot_params {scalar_t__ vbif_idx; int clk_ctrl; int xin_id; int rd; int num; } ;
struct dpu_kms {struct dpu_hw_vbif** hw_vbif; struct dpu_hw_mdp* hw_mdp; } ;
struct TYPE_3__ {int (* set_halt_ctrl ) (struct dpu_hw_vbif*,int ,int) ;int (* set_limit_conf ) (struct dpu_hw_vbif*,int ,int ,int) ;int (* set_write_gather_en ) (struct dpu_hw_vbif*,int ) ;} ;
struct dpu_hw_vbif {scalar_t__ idx; TYPE_1__ ops; } ;
struct TYPE_4__ {int (* setup_clk_force_ctrl ) (struct dpu_hw_mdp*,int ,int) ;} ;
struct dpu_hw_mdp {TYPE_2__ ops; } ;


 int FUNC_0 (struct dpu_hw_vbif**) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct dpu_hw_vbif*,struct dpu_vbif_set_ot_params*) ;
 int FUNC_4 (struct dpu_hw_vbif*,int ) ;
 int FUNC_5 (struct dpu_hw_vbif*,int ) ;
 int FUNC_6 (struct dpu_hw_mdp*,int ,int) ;
 int FUNC_7 (struct dpu_hw_vbif*,int ,int ,int) ;
 int FUNC_8 (struct dpu_hw_vbif*,int ,int) ;
 int FUNC_9 (struct dpu_hw_vbif*,int ,int) ;
 int FUNC_10 (struct dpu_hw_mdp*,int ,int) ;
 int FUNC_11 (int ,int ,int,scalar_t__) ;
 int FUNC_12 (scalar_t__,int ) ;

void FUNC_13(struct dpu_kms *VAR_0,
  struct dpu_vbif_set_ot_params *VAR_1)
{
 struct dpu_hw_vbif *VAR_2 = ((void*)0);
 struct dpu_hw_mdp *VAR_3;
 bool VAR_4 = 0;
 u32 VAR_5;
 int VAR_6, VAR_7;

 if (!VAR_0) {
  FUNC_2("invalid arguments\n");
  return;
 }
 VAR_3 = VAR_0->hw_mdp;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0->hw_vbif); VAR_7++) {
  if (VAR_0->hw_vbif[VAR_7] &&
    VAR_0->hw_vbif[VAR_7]->idx == VAR_1->vbif_idx)
   VAR_2 = VAR_0->hw_vbif[VAR_7];
 }

 if (!VAR_2 || !VAR_3) {
  FUNC_1("invalid arguments vbif %d mdp %d\n",
    VAR_2 != 0, VAR_3 != 0);
  return;
 }

 if (!VAR_3->ops.setup_clk_force_ctrl ||
   !VAR_2->ops.set_limit_conf ||
   !VAR_2->ops.set_halt_ctrl)
  return;


 if (VAR_2->ops.set_write_gather_en && !VAR_1->rd)
  VAR_2->ops.set_write_gather_en(VAR_2, VAR_1->xin_id);

 VAR_5 = FUNC_3(VAR_2, VAR_1) & 0xFF;

 if (VAR_5 == 0)
  return;

 FUNC_11(VAR_1->num, VAR_1->xin_id, VAR_5,
  VAR_1->vbif_idx);

 VAR_4 = VAR_3->ops.setup_clk_force_ctrl(VAR_3, VAR_1->clk_ctrl, 1);

 VAR_2->ops.set_limit_conf(VAR_2, VAR_1->xin_id, VAR_1->rd, VAR_5);

 VAR_2->ops.set_halt_ctrl(VAR_2, VAR_1->xin_id, 1);

 VAR_6 = FUNC_4(VAR_2, VAR_1->xin_id);
 if (VAR_6)
  FUNC_12(VAR_2->idx, VAR_1->xin_id);

 VAR_2->ops.set_halt_ctrl(VAR_2, VAR_1->xin_id, 0);

 if (VAR_4)
  VAR_3->ops.setup_clk_force_ctrl(VAR_3, VAR_1->clk_ctrl, 0);
}
