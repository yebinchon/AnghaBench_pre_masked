
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_pll {unsigned long div; int mul; } ;
struct clk_hw {int dummy; } ;


 struct clk_pll* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_0,
      unsigned long VAR_1)
{
 struct clk_pll *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2->div || !VAR_2->mul)
  return 0;

 return (VAR_1 / VAR_2->div) * (VAR_2->mul + 1);
}
