
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct div6_clock {unsigned long div; } ;
struct clk_hw {int dummy; } ;


 struct div6_clock* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_0,
      unsigned long VAR_1)
{
 struct div6_clock *VAR_2 = FUNC_0(VAR_0);

 return VAR_1 / VAR_2->div;
}
