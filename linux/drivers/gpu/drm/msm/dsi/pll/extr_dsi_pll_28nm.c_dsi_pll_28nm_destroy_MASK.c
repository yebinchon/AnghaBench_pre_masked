
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_dsi_pll {int dummy; } ;
struct TYPE_2__ {scalar_t__ clk_num; int * clks; } ;
struct dsi_pll_28nm {TYPE_1__ clk_data; scalar_t__ num_clks; int ** provided_clks; int clks; int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 struct dsi_pll_28nm* FUNC_1 (struct msm_dsi_pll*) ;

__attribute__((used)) static void FUNC_2(struct msm_dsi_pll *VAR_1)
{
 struct dsi_pll_28nm *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 FUNC_0(VAR_2->pdev,
     VAR_2->clks, VAR_2->num_clks);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_2->provided_clks[VAR_3] = ((void*)0);

 VAR_2->num_clks = 0;
 VAR_2->clk_data.clks = ((void*)0);
 VAR_2->clk_data.clk_num = 0;
}
