
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_gpio {int gpiod; } ;


 int FUNC_0 (int ) ;
 struct clk_gpio* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0)
{
 struct clk_gpio *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1->gpiod);
}
