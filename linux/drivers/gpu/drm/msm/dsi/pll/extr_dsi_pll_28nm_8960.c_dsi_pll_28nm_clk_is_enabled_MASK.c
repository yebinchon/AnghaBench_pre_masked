
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_pll {int dummy; } ;
struct dsi_pll_28nm {int dummy; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct msm_dsi_pll* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct dsi_pll_28nm*,int ,int ) ;
 struct dsi_pll_28nm* FUNC_2 (struct msm_dsi_pll*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_2)
{
 struct msm_dsi_pll *VAR_3 = FUNC_0(VAR_2);
 struct dsi_pll_28nm *VAR_4 = FUNC_2(VAR_3);

 return FUNC_1(VAR_4, VAR_0,
     VAR_1);
}
