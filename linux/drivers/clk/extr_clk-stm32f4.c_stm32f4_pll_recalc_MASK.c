
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32f4_pll {scalar_t__ offset; } ;
struct clk_hw {int dummy; } ;
struct clk_gate {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct clk_gate* FUNC_1 (struct clk_hw*) ;
 struct stm32f4_pll* FUNC_2 (struct clk_gate*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_1,
  unsigned long VAR_2)
{
 struct clk_gate *VAR_3 = FUNC_1(VAR_1);
 struct stm32f4_pll *VAR_4 = FUNC_2(VAR_3);
 unsigned long VAR_5;

 VAR_5 = (FUNC_0(VAR_0 + VAR_4->offset) >> 6) & 0x1ff;

 return VAR_2 * VAR_5;
}
