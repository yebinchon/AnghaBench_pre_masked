
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_rpm {unsigned long rate; } ;
struct clk_hw {int dummy; } ;


 struct clk_rpm* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_0,
      unsigned long VAR_1)
{
 struct clk_rpm *VAR_2 = FUNC_0(VAR_0);






 return VAR_2->rate;
}
