
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct dev_pm_domain* pm_domain; } ;
struct dev_pm_domain {int dummy; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;

void FUNC_3(struct device *VAR_0, struct dev_pm_domain *VAR_1)
{
 if (VAR_0->pm_domain == VAR_1)
  return;

 FUNC_0(VAR_1 && FUNC_1(VAR_0),
      "PM domains can only be changed for unbound devices\n");
 VAR_0->pm_domain = VAR_1;
 FUNC_2(VAR_0);
}
