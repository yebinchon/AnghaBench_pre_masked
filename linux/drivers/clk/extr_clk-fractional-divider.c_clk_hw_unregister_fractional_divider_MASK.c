
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_fractional_divider {int dummy; } ;


 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct clk_fractional_divider*) ;
 struct clk_fractional_divider* FUNC_2 (struct clk_hw*) ;

void FUNC_3(struct clk_hw *VAR_0)
{
 struct clk_fractional_divider *VAR_1;

 VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_0);
 FUNC_1(VAR_1);
}
