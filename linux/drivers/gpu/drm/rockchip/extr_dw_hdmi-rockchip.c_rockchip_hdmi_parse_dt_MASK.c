
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rockchip_hdmi {int * grf_clk; TYPE_1__* dev; int * vpll_clk; int * regmap; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {struct device_node* of_node; } ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (TYPE_1__*,char*) ;
 int * FUNC_4 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_5(struct rockchip_hdmi *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->dev->of_node;

 VAR_2->regmap = FUNC_4(VAR_3, "rockchip,grf");
 if (FUNC_1(VAR_2->regmap)) {
  FUNC_0(VAR_2->dev, "Unable to get rockchip,grf\n");
  return FUNC_2(VAR_2->regmap);
 }

 VAR_2->vpll_clk = FUNC_3(VAR_2->dev, "vpll");
 if (FUNC_2(VAR_2->vpll_clk) == -VAR_0) {
  VAR_2->vpll_clk = ((void*)0);
 } else if (FUNC_2(VAR_2->vpll_clk) == -VAR_1) {
  return -VAR_1;
 } else if (FUNC_1(VAR_2->vpll_clk)) {
  FUNC_0(VAR_2->dev, "failed to get grf clock\n");
  return FUNC_2(VAR_2->vpll_clk);
 }

 VAR_2->grf_clk = FUNC_3(VAR_2->dev, "grf");
 if (FUNC_2(VAR_2->grf_clk) == -VAR_0) {
  VAR_2->grf_clk = ((void*)0);
 } else if (FUNC_2(VAR_2->grf_clk) == -VAR_1) {
  return -VAR_1;
 } else if (FUNC_1(VAR_2->grf_clk)) {
  FUNC_0(VAR_2->dev, "failed to get grf clock\n");
  return FUNC_2(VAR_2->grf_clk);
 }

 return 0;
}
