
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct owl_factor_hw {int dummy; } ;
struct owl_clk_common {int dummy; } ;
struct owl_factor {struct owl_clk_common common; struct owl_factor_hw factor_hw; } ;
struct clk_hw {int dummy; } ;


 struct owl_factor* FUNC_0 (struct clk_hw*) ;
 unsigned long FUNC_1 (struct owl_clk_common*,struct owl_factor_hw*,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
   unsigned long VAR_1)
{
 struct owl_factor *VAR_2 = FUNC_0(VAR_0);
 struct owl_factor_hw *VAR_3 = &VAR_2->factor_hw;
 struct owl_clk_common *VAR_4 = &VAR_2->common;

 return FUNC_1(VAR_4, VAR_3, VAR_1);
}
