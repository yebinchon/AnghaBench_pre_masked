
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_pll {int power; scalar_t__ base; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct clk_pll* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1)
{
 struct clk_pll *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(1 << VAR_2->power, VAR_2->base + VAR_0);

 FUNC_1(10);

 return 0;
}
