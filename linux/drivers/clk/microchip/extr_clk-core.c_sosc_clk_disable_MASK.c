
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pic32_sec_osc {int enable_reg; int enable_mask; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 struct pic32_sec_osc* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct clk_hw *VAR_0)
{
 struct pic32_sec_osc *VAR_1 = FUNC_1(VAR_0);

 FUNC_2();
 FUNC_3(VAR_1->enable_mask, FUNC_0(VAR_1->enable_reg));
}
