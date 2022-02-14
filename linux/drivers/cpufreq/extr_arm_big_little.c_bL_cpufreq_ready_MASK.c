
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int cpu; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cpufreq_policy*) ;

__attribute__((used)) static void FUNC_2(struct cpufreq_policy *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2->cpu);


 if (VAR_3 >= VAR_0)
  return;

 VAR_1[VAR_3] = FUNC_1(VAR_2);
}
