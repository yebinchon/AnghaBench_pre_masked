
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_dfll {scalar_t__ pmu_if; int dev; TYPE_1__* soc; } ;
struct dev_pm_opp {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dev_pm_opp*) ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (int ,char*) ;
 struct dev_pm_opp* FUNC_2 (int ,unsigned long*) ;
 unsigned long FUNC_3 (struct dev_pm_opp*) ;
 int FUNC_4 (struct dev_pm_opp*) ;
 int FUNC_5 (struct tegra_dfll*,unsigned long) ;
 int FUNC_6 (struct tegra_dfll*,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct tegra_dfll *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 struct dev_pm_opp *VAR_6;

 VAR_4 = VAR_2;
 VAR_6 = FUNC_2(VAR_3->soc->dev, &VAR_4);
 if (FUNC_0(VAR_6)) {
  FUNC_1(VAR_3->dev, "couldn't get vmax opp, empty opp table?\n");
  return -VAR_0;
 }
 VAR_5 = FUNC_3(VAR_6);
 FUNC_4(VAR_6);

 if (VAR_3->pmu_if == VAR_1)
  return FUNC_6(VAR_3, VAR_5);
 else
  return FUNC_5(VAR_3, VAR_5);
}
