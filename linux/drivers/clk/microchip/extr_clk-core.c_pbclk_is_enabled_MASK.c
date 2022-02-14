
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pic32_periph_clk {int ctrl_reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 struct pic32_periph_clk* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1)
{
 struct pic32_periph_clk *VAR_2 = FUNC_0(VAR_1);

 return FUNC_1(VAR_2->ctrl_reg) & VAR_0;
}
