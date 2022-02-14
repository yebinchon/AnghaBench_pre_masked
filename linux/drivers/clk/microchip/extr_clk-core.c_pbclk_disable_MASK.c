
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pic32_periph_clk {int ctrl_reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct pic32_periph_clk* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_1)
{
 struct pic32_periph_clk *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(VAR_0, FUNC_0(VAR_2->ctrl_reg));
}
