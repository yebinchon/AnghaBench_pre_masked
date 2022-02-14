
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_bus {int * opp_table; int clk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct exynos_bus* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct exynos_bus*) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_0)
{
 struct exynos_bus *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2 < 0)
  FUNC_4(VAR_0, "failed to disable the devfreq-event devices\n");

 FUNC_2(VAR_0);
 FUNC_0(VAR_1->clk);
 if (VAR_1->opp_table) {
  FUNC_3(VAR_1->opp_table);
  VAR_1->opp_table = ((void*)0);
 }
}
