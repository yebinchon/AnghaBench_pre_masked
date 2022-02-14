
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powernowk8_target_arg {unsigned int newstate; struct cpufreq_policy* pol; } ;
struct cpufreq_policy {int cpu; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct powernowk8_target_arg*) ;

__attribute__((used)) static int FUNC_1(struct cpufreq_policy *VAR_1, unsigned VAR_2)
{
 struct powernowk8_target_arg VAR_3 = { .pol = VAR_1, .newstate = VAR_2 };

 return FUNC_0(VAR_1->cpu, VAR_0, &VAR_3);
}
