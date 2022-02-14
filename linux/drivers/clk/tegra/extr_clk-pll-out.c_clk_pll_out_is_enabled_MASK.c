
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_clk_pll_out {int reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct tegra_clk_pll_out*) ;
 int FUNC_1 (struct tegra_clk_pll_out*) ;
 int FUNC_2 (int ) ;
 struct tegra_clk_pll_out* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0)
{
 struct tegra_clk_pll_out *VAR_1 = FUNC_3(VAR_0);
 u32 VAR_2 = FUNC_2(VAR_1->reg);
 int VAR_3;

 VAR_3 = (VAR_2 & FUNC_0(VAR_1)) ? 1 : 0;
 if (!(VAR_2 & (FUNC_1(VAR_1))))
  VAR_3 = 0;
 return VAR_3;
}
