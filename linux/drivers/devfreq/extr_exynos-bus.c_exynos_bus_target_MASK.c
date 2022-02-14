
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct exynos_bus {unsigned long curr_freq; int lock; } ;
struct device {int dummy; } ;
struct dev_pm_opp {int dummy; } ;


 scalar_t__ FUNC_0 (struct dev_pm_opp*) ;
 int FUNC_1 (struct dev_pm_opp*) ;
 int FUNC_2 (struct device*,char*) ;
 struct exynos_bus* FUNC_3 (struct device*) ;
 int FUNC_4 (struct dev_pm_opp*) ;
 int FUNC_5 (struct device*,unsigned long) ;
 struct dev_pm_opp* FUNC_6 (struct device*,unsigned long*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_0, unsigned long *VAR_1, u32 VAR_2)
{
 struct exynos_bus *VAR_3 = FUNC_3(VAR_0);
 struct dev_pm_opp *VAR_4;
 int VAR_5 = 0;


 VAR_4 = FUNC_6(VAR_0, VAR_1, VAR_2);
 if (FUNC_0(VAR_4)) {
  FUNC_2(VAR_0, "failed to get recommended opp instance\n");
  return FUNC_1(VAR_4);
 }

 FUNC_4(VAR_4);


 FUNC_7(&VAR_3->lock);
 VAR_5 = FUNC_5(VAR_0, *VAR_1);
 if (!VAR_5)
  VAR_3->curr_freq = *VAR_1;

 FUNC_8(&VAR_3->lock);

 return VAR_5;
}
