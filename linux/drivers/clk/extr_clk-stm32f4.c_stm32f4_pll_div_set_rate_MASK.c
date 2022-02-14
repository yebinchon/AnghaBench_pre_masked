
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32f4_pll_div {int hw_pll; } ;
struct clk_hw {int dummy; } ;
struct clk_divider {int dummy; } ;
struct TYPE_2__ {int (* set_rate ) (struct clk_hw*,unsigned long,unsigned long) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct clk_hw*,unsigned long,unsigned long) ;
 struct clk_divider* FUNC_4 (struct clk_hw*) ;
 struct stm32f4_pll_div* FUNC_5 (struct clk_divider*) ;

__attribute__((used)) static int FUNC_6(struct clk_hw *VAR_1, unsigned long VAR_2,
    unsigned long VAR_3)
{
 int VAR_4, VAR_5;

 struct clk_divider *VAR_6 = FUNC_4(VAR_1);
 struct stm32f4_pll_div *VAR_7 = FUNC_5(VAR_6);

 VAR_4 = FUNC_2(VAR_7->hw_pll);

 if (VAR_4)
  FUNC_0(VAR_7->hw_pll);

 VAR_5 = VAR_0.set_rate(VAR_1, VAR_2, VAR_3);

 if (VAR_4)
  FUNC_1(VAR_7->hw_pll);

 return VAR_5;
}
