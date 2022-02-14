
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_syscon {scalar_t__ clk_val; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct clk_syscon* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static long
FUNC_1(struct clk_hw *VAR_1, unsigned long VAR_2,
        unsigned long *VAR_3)
{
 struct clk_syscon *VAR_4 = FUNC_0(VAR_1);

 if (VAR_4->clk_val != VAR_0)
  return *VAR_3;

 if (VAR_2 <= 13000000)
  return 13000000;
 if (VAR_2 <= 52000000)
  return 52000000;
 if (VAR_2 <= 104000000)
  return 104000000;
 return 208000000;
}
