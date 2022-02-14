
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int cpus; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int,int ) ;
 struct cpufreq_policy* FUNC_1 (int ,unsigned int) ;

struct cpufreq_policy *FUNC_2(unsigned int VAR_1)
{
 struct cpufreq_policy *VAR_2 = FUNC_1(VAR_0, VAR_1);

 return VAR_2 && FUNC_0(VAR_1, VAR_2->cpus) ? VAR_2 : ((void*)0);
}
