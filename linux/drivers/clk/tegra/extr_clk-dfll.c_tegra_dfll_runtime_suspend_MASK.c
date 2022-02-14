
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dfll {int i2c_clk; int soc_clk; int ref_clk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct tegra_dfll* FUNC_1 (struct device*) ;

int FUNC_2(struct device *VAR_0)
{
 struct tegra_dfll *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->ref_clk);
 FUNC_0(VAR_1->soc_clk);
 FUNC_0(VAR_1->i2c_clk);

 return 0;
}
