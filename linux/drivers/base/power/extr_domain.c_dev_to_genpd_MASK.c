
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct generic_pm_domain {int dummy; } ;
struct device {int pm_domain; } ;


 int VAR_0 ;
 struct generic_pm_domain* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct generic_pm_domain* FUNC_2 (int ) ;

__attribute__((used)) static struct generic_pm_domain *FUNC_3(struct device *VAR_1)
{
 if (FUNC_1(VAR_1->pm_domain))
  return FUNC_0(-VAR_0);

 return FUNC_2(VAR_1->pm_domain);
}
