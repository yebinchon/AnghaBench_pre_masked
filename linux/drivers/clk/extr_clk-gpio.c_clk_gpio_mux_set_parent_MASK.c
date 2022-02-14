
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_hw {int dummy; } ;
struct clk_gpio {int gpiod; } ;


 int FUNC_0 (int ,int ) ;
 struct clk_gpio* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct clk_gpio *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2->gpiod, VAR_1);

 return 0;
}
