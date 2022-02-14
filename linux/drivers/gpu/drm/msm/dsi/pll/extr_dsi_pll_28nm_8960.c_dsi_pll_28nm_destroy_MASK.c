
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_pll {int dummy; } ;
struct dsi_pll_28nm {int num_clks; int clks; int pdev; } ;


 int FUNC_0 (int ,int ,int ) ;
 struct dsi_pll_28nm* FUNC_1 (struct msm_dsi_pll*) ;

__attribute__((used)) static void FUNC_2(struct msm_dsi_pll *VAR_0)
{
 struct dsi_pll_28nm *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->pdev,
     VAR_1->clks, VAR_1->num_clks);
}
