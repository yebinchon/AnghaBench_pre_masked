
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_syscon {scalar_t__ reset; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_syscon*) ;
 struct clk_syscon* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0)
{
 struct clk_syscon *VAR_1 = FUNC_1(VAR_0);


 if (VAR_1->reset)
  FUNC_0(VAR_1);
 return 0;
}
