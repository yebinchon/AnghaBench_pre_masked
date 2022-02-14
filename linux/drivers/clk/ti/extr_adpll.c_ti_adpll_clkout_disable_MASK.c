
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_3__ {struct clk_hw hw; } ;
struct ti_adpll_clkout_data {TYPE_1__ gate; } ;
struct TYPE_4__ {int (* disable ) (struct clk_hw*) ;} ;


 int FUNC_0 (struct clk_hw*,struct clk_hw*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (struct clk_hw*) ;
 struct ti_adpll_clkout_data* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_1)
{
 struct ti_adpll_clkout_data *VAR_2 = FUNC_2(VAR_1);
 struct clk_hw *VAR_3 = &VAR_2->gate.hw;

 FUNC_0(VAR_3, VAR_1);
 VAR_0.disable(VAR_3);
}
