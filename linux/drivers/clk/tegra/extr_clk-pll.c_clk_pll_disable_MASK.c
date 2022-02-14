
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_clk_pll {scalar_t__ lock; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct tegra_clk_pll*) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 int FUNC_3 (scalar_t__,unsigned long) ;
 struct tegra_clk_pll* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_5(struct clk_hw *VAR_0)
{
 struct tegra_clk_pll *VAR_1 = FUNC_4(VAR_0);
 unsigned long VAR_2 = 0;

 if (VAR_1->lock)
  FUNC_2(VAR_1->lock, VAR_2);

 FUNC_1(VAR_1);

 FUNC_0(VAR_0);

 if (VAR_1->lock)
  FUNC_3(VAR_1->lock, VAR_2);
}
