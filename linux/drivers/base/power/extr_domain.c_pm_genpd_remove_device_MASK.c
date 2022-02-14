
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct generic_pm_domain {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct generic_pm_domain* FUNC_0 (struct device*) ;
 int FUNC_1 (struct generic_pm_domain*,struct device*) ;

int FUNC_2(struct device *VAR_1)
{
 struct generic_pm_domain *VAR_2 = FUNC_0(VAR_1);

 if (!VAR_2)
  return -VAR_0;

 return FUNC_1(VAR_2, VAR_1);
}
