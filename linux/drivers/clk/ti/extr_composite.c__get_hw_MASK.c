
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_hw_omap_comp {TYPE_1__** comp_clks; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {struct clk_hw* hw; } ;



__attribute__((used)) static inline struct clk_hw *FUNC_0(struct clk_hw_omap_comp *VAR_0, int VAR_1)
{
 if (!VAR_0)
  return ((void*)0);

 if (!VAR_0->comp_clks[VAR_1])
  return ((void*)0);

 return VAR_0->comp_clks[VAR_1]->hw;
}
