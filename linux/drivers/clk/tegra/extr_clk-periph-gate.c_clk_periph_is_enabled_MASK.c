
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_clk_periph_gate {int flags; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tegra_clk_periph_gate*) ;
 int FUNC_1 (struct tegra_clk_periph_gate*) ;
 int FUNC_2 (struct tegra_clk_periph_gate*) ;
 struct tegra_clk_periph_gate* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1)
{
 struct tegra_clk_periph_gate *VAR_2 = FUNC_3(VAR_1);
 int VAR_3 = 1;

 if (!(FUNC_1(VAR_2) & FUNC_0(VAR_2)))
  VAR_3 = 0;

 if (!(VAR_2->flags & VAR_0))
  if (FUNC_2(VAR_2) & FUNC_0(VAR_2))
   VAR_3 = 0;

 return VAR_3;
}
