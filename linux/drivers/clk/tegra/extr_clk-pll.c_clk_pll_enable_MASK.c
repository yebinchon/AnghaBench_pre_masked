
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_clk_pll {scalar_t__ lock; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_hw*) ;
 scalar_t__ FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (struct tegra_clk_pll*) ;
 int FUNC_3 (struct tegra_clk_pll*) ;
 int FUNC_4 (scalar_t__,unsigned long) ;
 int FUNC_5 (scalar_t__,unsigned long) ;
 struct tegra_clk_pll* FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_0)
{
 struct tegra_clk_pll *VAR_1 = FUNC_6(VAR_0);
 unsigned long VAR_2 = 0;
 int VAR_3;

 if (FUNC_1(VAR_0))
  return 0;

 if (VAR_1->lock)
  FUNC_4(VAR_1->lock, VAR_2);

 FUNC_0(VAR_0);

 VAR_3 = FUNC_2(VAR_1);

 FUNC_3(VAR_1);

 if (VAR_1->lock)
  FUNC_5(VAR_1->lock, VAR_2);

 return VAR_3;
}
