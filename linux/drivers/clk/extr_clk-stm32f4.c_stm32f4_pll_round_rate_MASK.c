
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32f4_pll {unsigned long n_start; } ;
struct clk_hw {int dummy; } ;
struct clk_gate {int dummy; } ;


 struct clk_gate* FUNC_0 (struct clk_hw*) ;
 struct stm32f4_pll* FUNC_1 (struct clk_gate*) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
  unsigned long *VAR_2)
{
 struct clk_gate *VAR_3 = FUNC_0(VAR_0);
 struct stm32f4_pll *VAR_4 = FUNC_1(VAR_3);
 unsigned long VAR_5;

 VAR_5 = VAR_1 / *VAR_2;

 if (VAR_5 < VAR_4->n_start)
  VAR_5 = VAR_4->n_start;
 else if (VAR_5 > 432)
  VAR_5 = 432;

 return *VAR_2 * VAR_5;
}
