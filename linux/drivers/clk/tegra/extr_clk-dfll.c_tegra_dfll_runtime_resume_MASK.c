
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_dfll {int ref_clk; int soc_clk; int i2c_clk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct tegra_dfll* FUNC_3 (struct device*) ;

int FUNC_4(struct device *VAR_0)
{
 struct tegra_dfll *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->ref_clk);
 if (VAR_2) {
  FUNC_2(VAR_0, "could not enable ref clock: %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_1->soc_clk);
 if (VAR_2) {
  FUNC_2(VAR_0, "could not enable register clock: %d\n", VAR_2);
  FUNC_0(VAR_1->ref_clk);
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_1->i2c_clk);
 if (VAR_2) {
  FUNC_2(VAR_0, "could not enable i2c clock: %d\n", VAR_2);
  FUNC_0(VAR_1->soc_clk);
  FUNC_0(VAR_1->ref_clk);
  return VAR_2;
 }

 return 0;
}
