
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_adpll_dco_data {int dummy; } ;
struct ti_adpll_data {int dummy; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct ti_adpll_data*) ;
 struct ti_adpll_data* FUNC_1 (struct ti_adpll_dco_data*) ;
 struct ti_adpll_dco_data* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_0)
{
 struct ti_adpll_dco_data *VAR_1 = FUNC_2(VAR_0);
 struct ti_adpll_data *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2);
}
