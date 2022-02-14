
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_fractional_divider {int freg_bit; int freg_status; } ;
struct stm32_pll_obj {struct stm32_fractional_divider div; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 struct stm32_pll_obj* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0)
{
 struct stm32_pll_obj *VAR_1 = FUNC_1(VAR_0);
 struct stm32_fractional_divider *VAR_2 = &VAR_1->div;

 return (FUNC_0(VAR_2->freg_status) >> VAR_2->freg_bit) & 0x01;
}
