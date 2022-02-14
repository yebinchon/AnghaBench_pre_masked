
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct dev_pm_opp {int dummy; } ;


 scalar_t__ FUNC_0 (struct dev_pm_opp*) ;
 struct dev_pm_opp* FUNC_1 (struct device*,unsigned long,int) ;
 unsigned int FUNC_2 (struct dev_pm_opp*) ;
 int FUNC_3 (struct dev_pm_opp*) ;

__attribute__((used)) static unsigned int FUNC_4(struct device *VAR_0,
        unsigned long VAR_1)
{
 struct dev_pm_opp *VAR_2;
 unsigned int VAR_3;

 if (!VAR_1)
  return 0;

 VAR_2 = FUNC_1(VAR_0, VAR_1, 1);
 if (FUNC_0(VAR_2))
  return 0;

 VAR_3 = FUNC_2(VAR_2);

 FUNC_3(VAR_2);

 return VAR_3;
}
