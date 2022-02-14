
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_pll {int dummy; } ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (struct sprd_pll*,unsigned long) ;
 struct sprd_pll* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
       unsigned long VAR_1)
{
 struct sprd_pll *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, VAR_1);
}
