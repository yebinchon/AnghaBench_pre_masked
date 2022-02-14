
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct tegra_bpmp_clk {unsigned int id; struct clk_hw hw; } ;
struct tegra_bpmp {unsigned int num_clocks; struct tegra_bpmp_clk** clocks; } ;
struct of_phandle_args {unsigned int* args; } ;



__attribute__((used)) static struct clk_hw *FUNC_0(struct of_phandle_args *VAR_0,
           void *VAR_1)
{
 unsigned int VAR_2 = VAR_0->args[0], VAR_3;
 struct tegra_bpmp *VAR_4 = VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_4->num_clocks; VAR_3++) {
  struct tegra_bpmp_clk *VAR_5 = VAR_4->clocks[VAR_3];

  if (!VAR_5)
   continue;

  if (VAR_5->id == VAR_2)
   return &VAR_5->hw;
 }

 return ((void*)0);
}
