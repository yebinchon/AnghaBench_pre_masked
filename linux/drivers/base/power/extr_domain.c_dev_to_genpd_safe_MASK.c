
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct generic_pm_domain {int dummy; } ;
struct TYPE_2__ {scalar_t__ runtime_suspend; } ;
struct device {struct device* pm_domain; TYPE_1__ ops; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ VAR_0 ;
 struct generic_pm_domain* FUNC_1 (struct device*) ;

__attribute__((used)) static struct generic_pm_domain *FUNC_2(struct device *VAR_1)
{
 if (FUNC_0(VAR_1) || FUNC_0(VAR_1->pm_domain))
  return ((void*)0);


 if (VAR_1->pm_domain->ops.runtime_suspend == VAR_0)
  return FUNC_1(VAR_1->pm_domain);

 return ((void*)0);
}
