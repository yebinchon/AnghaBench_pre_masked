
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ti_adpll_data {int dummy; } ;
struct ti_adpll_clkout_data {struct ti_adpll_data* adpll; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct ti_adpll_data*) ;
 struct ti_adpll_clkout_data* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct clk_hw *VAR_0)
{
 struct ti_adpll_clkout_data *VAR_1 = FUNC_1(VAR_0);
 struct ti_adpll_data *VAR_2 = VAR_1->adpll;

 return FUNC_0(VAR_2);
}
