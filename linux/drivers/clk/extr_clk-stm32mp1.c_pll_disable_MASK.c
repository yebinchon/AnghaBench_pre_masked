
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_pll_obj {int lock; int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 struct stm32_pll_obj* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct clk_hw *VAR_1)
{
 struct stm32_pll_obj *VAR_2 = FUNC_3(VAR_1);
 u32 VAR_3;
 unsigned long VAR_4 = 0;

 FUNC_1(VAR_2->lock, VAR_4);

 VAR_3 = FUNC_0(VAR_2->reg);
 VAR_3 &= ~VAR_0;
 FUNC_4(VAR_3, VAR_2->reg);

 FUNC_2(VAR_2->lock, VAR_4);
}
