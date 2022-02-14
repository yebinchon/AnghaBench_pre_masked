
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sprd_pll {int udelay; } ;
struct clk_hw {int dummy; } ;


 struct sprd_pll* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0)
{
 struct sprd_pll *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->udelay);

 return 0;
}
