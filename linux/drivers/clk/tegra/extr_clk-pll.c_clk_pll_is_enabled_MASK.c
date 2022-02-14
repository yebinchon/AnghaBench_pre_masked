
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_clk_pll {scalar_t__ pmc; TYPE_1__* params; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tegra_clk_pll*) ;
 int FUNC_1 (scalar_t__) ;
 struct tegra_clk_pll* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_5)
{
 struct tegra_clk_pll *VAR_6 = FUNC_2(VAR_5);
 u32 VAR_7;

 if (VAR_6->params->flags & VAR_4) {
  VAR_7 = FUNC_1(VAR_6->pmc + VAR_1);
  if (VAR_7 & VAR_3)
   return VAR_7 & VAR_2 ? 1 : 0;
 }

 VAR_7 = FUNC_0(VAR_6);

 return VAR_7 & VAR_0 ? 1 : 0;
}
