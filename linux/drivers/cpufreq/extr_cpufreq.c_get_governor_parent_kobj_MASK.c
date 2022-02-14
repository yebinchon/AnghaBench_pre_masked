
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct cpufreq_policy {struct kobject kobj; } ;


 struct kobject* VAR_0 ;
 scalar_t__ FUNC_0 () ;

struct kobject *FUNC_1(struct cpufreq_policy *VAR_1)
{
 if (FUNC_0())
  return &VAR_1->kobj;
 else
  return VAR_0;
}
