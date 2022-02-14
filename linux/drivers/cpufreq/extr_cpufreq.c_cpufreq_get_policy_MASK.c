
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int dummy; } ;


 int VAR_0 ;
 struct cpufreq_policy* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct cpufreq_policy*) ;
 int FUNC_2 (struct cpufreq_policy*,struct cpufreq_policy*,int) ;

int FUNC_3(struct cpufreq_policy *VAR_1, unsigned int VAR_2)
{
 struct cpufreq_policy *VAR_3;
 if (!VAR_1)
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3)
  return -VAR_0;

 FUNC_2(VAR_1, VAR_3, sizeof(*VAR_1));

 FUNC_1(VAR_3);
 return 0;
}
