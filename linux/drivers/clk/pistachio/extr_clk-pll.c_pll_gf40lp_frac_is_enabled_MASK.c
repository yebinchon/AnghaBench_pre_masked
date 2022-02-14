
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pistachio_clk_pll {int dummy; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pistachio_clk_pll*,int ) ;
 struct pistachio_clk_pll* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_2)
{
 struct pistachio_clk_pll *VAR_3 = FUNC_1(VAR_2);

 return !(FUNC_0(VAR_3, VAR_0) & VAR_1);
}
