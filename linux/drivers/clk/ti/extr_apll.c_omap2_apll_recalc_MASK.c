
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw_omap {unsigned long fixed_rate; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk_hw*) ;
 struct clk_hw_omap* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk_hw *VAR_0,
           unsigned long VAR_1)
{
 struct clk_hw_omap *VAR_2 = FUNC_1(VAR_0);

 if (FUNC_0(VAR_0))
  return VAR_2->fixed_rate;

 return 0;
}
