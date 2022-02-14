
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_target {unsigned int freq; struct cpufreq_policy* policy; } ;
struct cpufreq_policy {int cpu; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct cpufreq_target*) ;

__attribute__((used)) static int FUNC_1(struct cpufreq_policy *VAR_1,
        unsigned int VAR_2,
        unsigned int VAR_3)
{
 struct cpufreq_target VAR_4 = { .policy = VAR_1, .freq = VAR_2 };

 return FUNC_0(VAR_1->cpu, VAR_0, &VAR_4);
}
