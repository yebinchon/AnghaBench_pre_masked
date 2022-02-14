
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_fractional_divider {unsigned long fshift; scalar_t__ fwidth; int freg_value; } ;
struct stm32_pll_obj {struct stm32_fractional_divider div; } ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (scalar_t__,int ) ;
 unsigned long FUNC_1 (int ) ;
 struct stm32_pll_obj* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_0)
{
 struct stm32_pll_obj *VAR_1 = FUNC_2(VAR_0);
 struct stm32_fractional_divider *VAR_2 = &VAR_1->div;

 return (FUNC_1(VAR_2->freg_value) >> VAR_2->fshift) &
  FUNC_0(VAR_2->fwidth - 1, 0);
}
