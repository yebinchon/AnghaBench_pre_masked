
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pistachio_clk_pll {int dummy; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pistachio_clk_pll*) ;
 int FUNC_1 (struct pistachio_clk_pll*,int ) ;
 int FUNC_2 (struct pistachio_clk_pll*,int,int ) ;
 struct pistachio_clk_pll* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_7)
{
 struct pistachio_clk_pll *VAR_8 = FUNC_3(VAR_7);
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_8, VAR_0);
 VAR_9 &= ~(VAR_5 | VAR_3 |
   VAR_2 | VAR_4);
 FUNC_2(VAR_8, VAR_9, VAR_0);

 VAR_9 = FUNC_1(VAR_8, VAR_1);
 VAR_9 &= ~VAR_6;
 FUNC_2(VAR_8, VAR_9, VAR_1);

 FUNC_0(VAR_8);

 return 0;
}
