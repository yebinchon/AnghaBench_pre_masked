
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct owl_clk_common {int dummy; } ;
struct owl_pll {int pll_hw; struct owl_clk_common common; } ;
struct clk_hw {int dummy; } ;


 struct owl_pll* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct owl_clk_common const*,int *,int) ;

__attribute__((used)) static void FUNC_2(struct clk_hw *VAR_0)
{
 struct owl_pll *VAR_1 = FUNC_0(VAR_0);
 const struct owl_clk_common *VAR_2 = &VAR_1->common;

 FUNC_1(VAR_2, &VAR_1->pll_hw, 0);
}
