
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_devfreq {int emc_clock; struct devfreq* devfreq; } ;
struct device {int dummy; } ;
struct devfreq {unsigned long previous_freq; } ;
struct dev_pm_opp {int dummy; } ;


 scalar_t__ FUNC_0 (struct dev_pm_opp*) ;
 int FUNC_1 (struct dev_pm_opp*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct device*,char*,unsigned long) ;
 struct tegra_devfreq* FUNC_5 (struct device*) ;
 unsigned long FUNC_6 (struct dev_pm_opp*) ;
 int FUNC_7 (struct dev_pm_opp*) ;
 struct dev_pm_opp* FUNC_8 (struct device*,unsigned long*,int ) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_0, unsigned long *VAR_1,
    u32 VAR_2)
{
 struct tegra_devfreq *VAR_3 = FUNC_5(VAR_0);
 struct devfreq *VAR_4 = VAR_3->devfreq;
 struct dev_pm_opp *VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 VAR_5 = FUNC_8(VAR_0, VAR_1, VAR_2);
 if (FUNC_0(VAR_5)) {
  FUNC_4(VAR_0, "Failed to find opp for %lu Hz\n", *VAR_1);
  return FUNC_1(VAR_5);
 }
 VAR_6 = FUNC_6(VAR_5);
 FUNC_7(VAR_5);

 VAR_7 = FUNC_2(VAR_3->emc_clock, VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_3(VAR_3->emc_clock, 0);
 if (VAR_7)
  goto restore_min_rate;

 return 0;

restore_min_rate:
 FUNC_2(VAR_3->emc_clock, VAR_4->previous_freq);

 return VAR_7;
}
