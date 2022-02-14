
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int fast_switch_possible; } ;


 int FUNC_0 (struct cpufreq_policy*) ;

__attribute__((used)) static int FUNC_1(struct cpufreq_policy *VAR_0)
{
 FUNC_0(VAR_0);

 VAR_0->fast_switch_possible = 0;

 return 0;
}
