
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_pll {int dummy; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*) ;
 struct clk_pll* FUNC_2 (int ) ;
 int FUNC_3 (struct clk_pll*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0)
{
 int VAR_1;
 struct clk_pll *VAR_2 = FUNC_2(FUNC_1(VAR_0));

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return VAR_1;

 return FUNC_3(VAR_2);
}
