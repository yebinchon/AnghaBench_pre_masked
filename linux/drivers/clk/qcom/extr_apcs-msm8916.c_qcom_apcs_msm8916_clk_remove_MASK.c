
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct clk_regmap_mux_div {int clk_nb; int pclk; } ;


 int FUNC_0 (int ,int *) ;
 struct clk_regmap_mux_div* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct clk_regmap_mux_div *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->pclk, &VAR_1->clk_nb);

 return 0;
}
