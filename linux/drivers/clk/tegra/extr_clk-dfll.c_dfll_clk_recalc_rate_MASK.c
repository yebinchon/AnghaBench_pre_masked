
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dfll {unsigned long last_unrounded_rate; } ;
struct clk_hw {int dummy; } ;


 struct tegra_dfll* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_0,
       unsigned long VAR_1)
{
 struct tegra_dfll *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->last_unrounded_rate;
}
