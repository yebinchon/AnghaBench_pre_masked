
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pic32_ref_osc {int ctrl_reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct pic32_ref_osc* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_2)
{
 struct pic32_ref_osc *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_1 | VAR_0, FUNC_0(VAR_3->ctrl_reg));
}
