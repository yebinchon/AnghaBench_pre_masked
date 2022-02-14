
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct da8xx_usb1_clk48 {int regmap; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct da8xx_usb1_clk48* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1, u8 VAR_2)
{
 struct da8xx_usb1_clk48 *VAR_3 = FUNC_2(VAR_1);

 return FUNC_1(VAR_3->regmap, FUNC_0(2),
     VAR_0,
     VAR_2 ? VAR_0 : 0);
}
