
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int clk; } ;
struct da8xx_usb1_clk48 {TYPE_1__ hw; } ;
struct da8xx_usb0_clk48 {TYPE_1__ hw; } ;
struct clk_hw {int clk; } ;


 scalar_t__ FUNC_0 (struct da8xx_usb1_clk48*) ;
 int FUNC_1 (struct da8xx_usb1_clk48*) ;
 struct clk_hw* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,char*,char*) ;
 int FUNC_4 (int ,int ) ;
 struct da8xx_usb1_clk48* FUNC_5 (struct device*,struct regmap*) ;
 struct da8xx_usb1_clk48* FUNC_6 (struct device*,struct regmap*) ;
 int FUNC_7 (struct device*,char*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_0,
           struct regmap *VAR_1)
{
 struct da8xx_usb0_clk48 *VAR_2;
 struct da8xx_usb1_clk48 *VAR_3;
 struct clk_hw *VAR_4;

 VAR_2 = FUNC_5(VAR_0, VAR_1);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);





 VAR_4 = FUNC_2(&VAR_2->hw, 1);
 if (VAR_4)
  FUNC_4(VAR_2->hw.clk, VAR_4->clk);
 else
  FUNC_7(VAR_0, "Failed to find usb0 parent clock\n");

 VAR_3 = FUNC_6(VAR_0, VAR_1);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);





 VAR_4 = FUNC_2(&VAR_3->hw, 0);
 if (VAR_4)
  FUNC_4(VAR_3->hw.clk, VAR_4->clk);
 else
  FUNC_7(VAR_0, "Failed to find usb1 parent clock\n");

 FUNC_3(&VAR_2->hw, "usb0_clk48", "da8xx-usb-phy");
 FUNC_3(&VAR_3->hw, "usb1_clk48", "da8xx-usb-phy");

 return 0;
}
