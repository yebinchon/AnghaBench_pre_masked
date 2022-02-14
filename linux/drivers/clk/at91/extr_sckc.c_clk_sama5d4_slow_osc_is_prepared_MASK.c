
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_sama5d4_slow_osc {int prepared; } ;
struct clk_hw {int dummy; } ;


 struct clk_sama5d4_slow_osc* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_1(struct clk_hw *VAR_0)
{
 struct clk_sama5d4_slow_osc *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->prepared;
}
