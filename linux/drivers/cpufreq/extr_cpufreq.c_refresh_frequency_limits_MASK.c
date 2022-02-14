
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int cpu; } ;


 int FUNC_0 (struct cpufreq_policy*,struct cpufreq_policy*) ;
 int FUNC_1 (struct cpufreq_policy*) ;
 int FUNC_2 (char*,int ) ;

void FUNC_3(struct cpufreq_policy *VAR_0)
{
 struct cpufreq_policy VAR_1;

 if (!FUNC_1(VAR_0)) {
  VAR_1 = *VAR_0;
  FUNC_2("updating policy for CPU %u\n", VAR_0->cpu);

  FUNC_0(VAR_0, &VAR_1);
 }
}
