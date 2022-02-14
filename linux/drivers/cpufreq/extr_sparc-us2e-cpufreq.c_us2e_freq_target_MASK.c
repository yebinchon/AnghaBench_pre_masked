
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {unsigned int cpu; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ,unsigned int*,int) ;

__attribute__((used)) static int FUNC_1(struct cpufreq_policy *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3 = VAR_1->cpu;

 return FUNC_0(VAR_3, VAR_0, &VAR_2, 1);
}
