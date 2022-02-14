
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_syscon {scalar_t__ clk_val; int reset; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct clk_syscon*) ;
 struct clk_syscon* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_2(struct clk_hw *VAR_1)
{
 struct clk_syscon *VAR_2 = FUNC_1(VAR_1);


 if (VAR_2->clk_val == VAR_0)
  return;

 if (!VAR_2->reset)
  FUNC_0(VAR_2);
}
