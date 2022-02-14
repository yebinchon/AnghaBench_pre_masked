
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int cpu; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cpufreq_policy*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cpufreq_policy*) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void FUNC_5(struct cpufreq_policy *VAR_1)
{
 FUNC_4("CPU %d exiting\n", VAR_1->cpu);

 FUNC_1(VAR_1->cpu);
 if (VAR_0) {
  FUNC_3(VAR_1);
  FUNC_2(VAR_1->cpu);
 } else {
  FUNC_0(VAR_1);
 }
}
