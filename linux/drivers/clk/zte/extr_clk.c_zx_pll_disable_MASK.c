
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_zx_pll {int pd_bit; int reg_base; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct clk_zx_pll* FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct clk_hw *VAR_0)
{
 struct clk_zx_pll *VAR_1 = FUNC_2(VAR_0);
 u32 VAR_2;

 if (VAR_1->pd_bit > 31)
  return;

 VAR_2 = FUNC_1(VAR_1->reg_base);
 FUNC_3(VAR_2 | FUNC_0(VAR_1->pd_bit), VAR_1->reg_base);
}
