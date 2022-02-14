
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dpu_vbif_set_qos_params {scalar_t__ vbif_idx; int clk_ctrl; int xin_id; scalar_t__ is_rt; } ;
struct dpu_vbif_qos_tbl {int npriority_lvl; int * priority_lvl; } ;
struct dpu_kms {struct dpu_hw_vbif** hw_vbif; struct dpu_hw_mdp* hw_mdp; } ;
struct TYPE_5__ {int (* set_qos_remap ) (struct dpu_hw_vbif*,int ,int,int ) ;} ;
struct dpu_hw_vbif {scalar_t__ idx; TYPE_2__ ops; TYPE_1__* cap; } ;
struct TYPE_6__ {int (* setup_clk_force_ctrl ) (struct dpu_hw_mdp*,int ,int) ;} ;
struct dpu_hw_mdp {TYPE_3__ ops; } ;
struct TYPE_4__ {struct dpu_vbif_qos_tbl qos_nrt_tbl; struct dpu_vbif_qos_tbl qos_rt_tbl; } ;


 int FUNC_0 (struct dpu_hw_vbif**) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct dpu_hw_mdp*,int ,int) ;
 int FUNC_4 (struct dpu_hw_vbif*,int ,int,int ) ;
 int FUNC_5 (struct dpu_hw_mdp*,int ,int) ;

void FUNC_6(struct dpu_kms *VAR_0,
  struct dpu_vbif_set_qos_params *VAR_1)
{
 struct dpu_hw_vbif *VAR_2 = ((void*)0);
 struct dpu_hw_mdp *VAR_3;
 bool VAR_4 = 0;
 const struct dpu_vbif_qos_tbl *VAR_5;
 int VAR_6;

 if (!VAR_0 || !VAR_1 || !VAR_0->hw_mdp) {
  FUNC_2("invalid arguments\n");
  return;
 }
 VAR_3 = VAR_0->hw_mdp;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0->hw_vbif); VAR_6++) {
  if (VAR_0->hw_vbif[VAR_6] &&
    VAR_0->hw_vbif[VAR_6]->idx == VAR_1->vbif_idx) {
   VAR_2 = VAR_0->hw_vbif[VAR_6];
   break;
  }
 }

 if (!VAR_2 || !VAR_2->cap) {
  FUNC_2("invalid vbif %d\n", VAR_1->vbif_idx);
  return;
 }

 if (!VAR_2->ops.set_qos_remap || !VAR_3->ops.setup_clk_force_ctrl) {
  FUNC_1("qos remap not supported\n");
  return;
 }

 VAR_5 = VAR_1->is_rt ? &VAR_2->cap->qos_rt_tbl :
   &VAR_2->cap->qos_nrt_tbl;

 if (!VAR_5->npriority_lvl || !VAR_5->priority_lvl) {
  FUNC_1("qos tbl not defined\n");
  return;
 }

 VAR_4 = VAR_3->ops.setup_clk_force_ctrl(VAR_3, VAR_1->clk_ctrl, 1);

 for (VAR_6 = 0; VAR_6 < VAR_5->npriority_lvl; VAR_6++) {
  FUNC_1("vbif:%d xin:%d lvl:%d/%d\n",
    VAR_1->vbif_idx, VAR_1->xin_id, VAR_6,
    VAR_5->priority_lvl[VAR_6]);
  VAR_2->ops.set_qos_remap(VAR_2, VAR_1->xin_id, VAR_6,
    VAR_5->priority_lvl[VAR_6]);
 }

 if (VAR_4)
  VAR_3->ops.setup_clk_force_ctrl(VAR_3, VAR_1->clk_ctrl, 0);
}
