
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_4__ {struct clk_hw hw; } ;
struct TYPE_5__ {TYPE_1__ gate; } ;
struct stm32_pll_obj {TYPE_2__ rgate; } ;
struct TYPE_6__ {int (* is_enabled ) (struct clk_hw*) ;} ;


 int FUNC_0 (struct clk_hw*,struct clk_hw*) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (struct clk_hw*) ;
 struct stm32_pll_obj* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1)
{
 struct stm32_pll_obj *VAR_2 = FUNC_2(VAR_1);
 struct clk_hw *VAR_3 = &VAR_2->rgate.gate.hw;

 FUNC_0(VAR_3, VAR_1);

 return VAR_0.is_enabled(VAR_3);
}
