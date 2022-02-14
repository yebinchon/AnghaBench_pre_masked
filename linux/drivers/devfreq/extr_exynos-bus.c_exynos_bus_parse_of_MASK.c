
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_bus {struct dev_pm_opp* clk; int curr_freq; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct dev_pm_opp {int dummy; } ;


 scalar_t__ FUNC_0 (struct dev_pm_opp*) ;
 int FUNC_1 (struct dev_pm_opp*) ;
 int FUNC_2 (struct dev_pm_opp*) ;
 unsigned long FUNC_3 (struct dev_pm_opp*) ;
 int FUNC_4 (struct dev_pm_opp*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct dev_pm_opp*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct dev_pm_opp*) ;
 struct dev_pm_opp* FUNC_10 (struct device*,unsigned long*,int ) ;
 struct dev_pm_opp* FUNC_11 (struct device*,char*) ;

__attribute__((used)) static int FUNC_12(struct device_node *VAR_0,
         struct exynos_bus *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev;
 struct dev_pm_opp *VAR_3;
 unsigned long VAR_4;
 int VAR_5;


 VAR_1->clk = FUNC_11(VAR_2, "bus");
 if (FUNC_0(VAR_1->clk)) {
  FUNC_5(VAR_2, "failed to get bus clock\n");
  return FUNC_1(VAR_1->clk);
 }

 VAR_5 = FUNC_4(VAR_1->clk);
 if (VAR_5 < 0) {
  FUNC_5(VAR_2, "failed to get enable clock\n");
  return VAR_5;
 }


 VAR_5 = FUNC_7(VAR_2);
 if (VAR_5 < 0) {
  FUNC_5(VAR_2, "failed to get OPP table\n");
  goto err_clk;
 }

 VAR_4 = FUNC_3(VAR_1->clk);

 VAR_3 = FUNC_10(VAR_2, &VAR_4, 0);
 if (FUNC_0(VAR_3)) {
  FUNC_5(VAR_2, "failed to find dev_pm_opp\n");
  VAR_5 = FUNC_1(VAR_3);
  goto err_opp;
 }
 VAR_1->curr_freq = FUNC_6(VAR_3);
 FUNC_9(VAR_3);

 return 0;

err_opp:
 FUNC_8(VAR_2);
err_clk:
 FUNC_2(VAR_1->clk);

 return VAR_5;
}
