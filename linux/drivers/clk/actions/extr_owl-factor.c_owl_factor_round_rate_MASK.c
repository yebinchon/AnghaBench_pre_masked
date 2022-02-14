
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct owl_factor_hw {int dummy; } ;
struct owl_factor {int common; struct owl_factor_hw factor_hw; } ;
struct clk_hw {int dummy; } ;


 struct owl_factor* FUNC_0 (struct clk_hw*) ;
 long FUNC_1 (int *,struct owl_factor_hw*,unsigned long,unsigned long*) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
   unsigned long *VAR_2)
{
 struct owl_factor *VAR_3 = FUNC_0(VAR_0);
 struct owl_factor_hw *VAR_4 = &VAR_3->factor_hw;

 return FUNC_1(&VAR_3->common, VAR_4,
     VAR_1, VAR_2);
}
