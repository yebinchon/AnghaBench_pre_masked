
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk {int dummy; } ;


 struct clk_hw* FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct clk_hw*) ;

void FUNC_4(struct clk *VAR_0)
{
 struct clk_hw *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return;

 FUNC_1(VAR_0);
 FUNC_2(FUNC_3(VAR_1));
}
