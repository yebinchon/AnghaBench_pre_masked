
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dpu_mdss_cfg {TYPE_2__* mdp; TYPE_1__* caps; } ;
struct dpu_hw_blk_reg_map {int blk_off; } ;
struct dpu_hw_mdp {struct dpu_hw_blk_reg_map hw; } ;
struct TYPE_4__ {int ubwc_static; } ;
struct TYPE_3__ {int ubwc_version; } ;


 int FUNC_0 (struct dpu_hw_blk_reg_map*,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct dpu_hw_mdp *VAR_1, struct dpu_mdss_cfg *VAR_2)
{
 struct dpu_hw_blk_reg_map VAR_3;

 if (!VAR_1 || !VAR_2)
  return;

 if (!FUNC_1(VAR_2->caps->ubwc_version))
  return;


 VAR_3 = VAR_1->hw;
 VAR_3.blk_off = 0x0;
 FUNC_0(&VAR_3, VAR_0, VAR_2->mdp[0].ubwc_static);
}
