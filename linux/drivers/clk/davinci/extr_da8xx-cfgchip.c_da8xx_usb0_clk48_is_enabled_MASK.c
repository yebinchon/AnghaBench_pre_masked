
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct da8xx_usb0_clk48 {int regmap; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 struct da8xx_usb0_clk48* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1)
{
 struct da8xx_usb0_clk48 *VAR_2 = FUNC_2(VAR_1);
 unsigned int VAR_3;

 FUNC_1(VAR_2->regmap, FUNC_0(2), &VAR_3);

 return !!(VAR_3 & VAR_0);
}
