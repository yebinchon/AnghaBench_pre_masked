
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int rwsem; } ;


 struct cpufreq_policy* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct cpufreq_policy*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct cpufreq_policy*) ;

struct cpufreq_policy *FUNC_4(unsigned int VAR_0)
{
 struct cpufreq_policy *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  return ((void*)0);

 FUNC_2(&VAR_1->rwsem);

 if (FUNC_3(VAR_1)) {
  FUNC_1(VAR_1);
  return ((void*)0);
 }

 return VAR_1;
}
