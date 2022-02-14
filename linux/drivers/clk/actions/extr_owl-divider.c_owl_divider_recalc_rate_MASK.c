
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct owl_divider {int div_hw; int common; } ;
struct clk_hw {int dummy; } ;


 struct owl_divider* FUNC_0 (struct clk_hw*) ;
 unsigned long FUNC_1 (int *,int *,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
       unsigned long VAR_1)
{
 struct owl_divider *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(&VAR_2->common,
           &VAR_2->div_hw, VAR_1);
}
