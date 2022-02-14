
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msm_dsi_pll {int dummy; } ;
struct dsi_pll_14nm {struct clk_hw_onecell_data* hw_data; } ;
struct clk_hw_onecell_data {TYPE_1__** hws; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {struct clk* clk; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct dsi_pll_14nm* FUNC_0 (struct msm_dsi_pll*) ;

__attribute__((used)) static int FUNC_1(struct msm_dsi_pll *VAR_2,
         struct clk **VAR_3,
         struct clk **VAR_4)
{
 struct dsi_pll_14nm *VAR_5 = FUNC_0(VAR_2);
 struct clk_hw_onecell_data *VAR_6 = VAR_5->hw_data;

 if (VAR_3)
  *VAR_3 = VAR_6->hws[VAR_0]->clk;
 if (VAR_4)
  *VAR_4 = VAR_6->hws[VAR_1]->clk;

 return 0;
}
