
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_pll {int dummy; } ;
struct dsi_pll_28nm {struct clk** provided_clks; } ;
struct clk {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct dsi_pll_28nm* FUNC_0 (struct msm_dsi_pll*) ;

__attribute__((used)) static int FUNC_1(struct msm_dsi_pll *VAR_2,
    struct clk **VAR_3,
    struct clk **VAR_4)
{
 struct dsi_pll_28nm *VAR_5 = FUNC_0(VAR_2);

 if (VAR_3)
  *VAR_3 = VAR_5->provided_clks[VAR_0];
 if (VAR_4)
  *VAR_4 =
    VAR_5->provided_clks[VAR_1];

 return 0;
}
