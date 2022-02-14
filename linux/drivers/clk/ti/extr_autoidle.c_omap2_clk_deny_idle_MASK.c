
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw_omap {int dummy; } ;
struct clk_hw {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 struct clk_hw* FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk_hw_omap*) ;
 scalar_t__ FUNC_2 (struct clk_hw*) ;
 struct clk_hw_omap* FUNC_3 (struct clk_hw*) ;

int FUNC_4(struct clk *VAR_1)
{
 struct clk_hw *VAR_2 = FUNC_0(VAR_1);

 if (FUNC_2(VAR_2)) {
  struct clk_hw_omap *VAR_3 = FUNC_3(VAR_2);

  return FUNC_1(VAR_3);
 }

 return -VAR_0;
}
