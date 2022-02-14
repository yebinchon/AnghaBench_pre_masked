
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_clk_pll_out {scalar_t__ lock; int reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct tegra_clk_pll_out*) ;
 int FUNC_1 (struct tegra_clk_pll_out*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,unsigned long) ;
 int FUNC_4 (scalar_t__,unsigned long) ;
 struct tegra_clk_pll_out* FUNC_5 (struct clk_hw*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_0)
{
 struct tegra_clk_pll_out *VAR_1 = FUNC_5(VAR_0);
 unsigned long VAR_2 = 0;
 u32 VAR_3;

 if (VAR_1->lock)
  FUNC_3(VAR_1->lock, VAR_2);

 VAR_3 = FUNC_2(VAR_1->reg);

 VAR_3 |= (FUNC_0(VAR_1) | FUNC_1(VAR_1));

 FUNC_7(VAR_3, VAR_1->reg);
 FUNC_6(2);

 if (VAR_1->lock)
  FUNC_4(VAR_1->lock, VAR_2);

 return 0;
}
