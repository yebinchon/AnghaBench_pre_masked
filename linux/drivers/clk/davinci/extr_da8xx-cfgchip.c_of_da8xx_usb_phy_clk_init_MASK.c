
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct da8xx_usb1_clk48 {int hw; } ;
struct da8xx_usb0_clk48 {int hw; } ;
struct clk_hw_onecell_data {int num; int ** hws; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct da8xx_usb1_clk48*) ;
 int FUNC_2 (struct da8xx_usb1_clk48*) ;
 struct da8xx_usb1_clk48* FUNC_3 (struct device*,struct regmap*) ;
 struct da8xx_usb1_clk48* FUNC_4 (struct device*,struct regmap*) ;
 int FUNC_5 (struct device*,char*,int) ;
 struct clk_hw_onecell_data* FUNC_6 (struct device*,int ,int ) ;
 int FUNC_7 (struct device*,int ,struct clk_hw_onecell_data*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct clk_hw_onecell_data*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_6, struct regmap *VAR_7)
{
 struct clk_hw_onecell_data *VAR_8;
 struct da8xx_usb0_clk48 *VAR_9;
 struct da8xx_usb1_clk48 *VAR_10;

 VAR_8 = FUNC_6(VAR_6, FUNC_8(VAR_8, VAR_4, 2),
    VAR_3);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->num = 2;

 VAR_9 = FUNC_3(VAR_6, VAR_7);
 if (FUNC_1(VAR_9)) {
  if (FUNC_2(VAR_9) == -VAR_2)
   return -VAR_2;

  FUNC_5(VAR_6, "Failed to register usb0_clk48 (%ld)\n",
    FUNC_2(VAR_9));

  VAR_8->hws[0] = FUNC_0(-VAR_0);
 } else {
  VAR_8->hws[0] = &VAR_9->hw;
 }

 VAR_10 = FUNC_4(VAR_6, VAR_7);
 if (FUNC_1(VAR_10)) {
  if (FUNC_2(VAR_10) == -VAR_2)
   return -VAR_2;

  FUNC_5(VAR_6, "Failed to register usb1_clk48 (%ld)\n",
    FUNC_2(VAR_10));

  VAR_8->hws[1] = FUNC_0(-VAR_0);
 } else {
  VAR_8->hws[1] = &VAR_10->hw;
 }

 return FUNC_7(VAR_6, VAR_5, VAR_8);
}
