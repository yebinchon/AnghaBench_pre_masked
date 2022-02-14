
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_pll_obj {int lock; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 struct stm32_pll_obj* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0)
{
 struct stm32_pll_obj *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2 = 0;
 int VAR_3;

 FUNC_1(VAR_1->lock, VAR_2);
 VAR_3 = FUNC_0(VAR_0);
 FUNC_2(VAR_1->lock, VAR_2);

 return VAR_3;
}
