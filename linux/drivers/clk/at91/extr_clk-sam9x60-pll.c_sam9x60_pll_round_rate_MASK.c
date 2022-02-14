
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sam9x60_pll {int dummy; } ;
struct clk_hw {int dummy; } ;


 long FUNC_0 (struct sam9x60_pll*,unsigned long,unsigned long,int) ;
 struct sam9x60_pll* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
       unsigned long *VAR_2)
{
 struct sam9x60_pll *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3, VAR_1, *VAR_2, 0);
}
