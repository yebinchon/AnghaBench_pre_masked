
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {scalar_t__ cpu; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpufreq_policy*) ;

__attribute__((used)) static int FUNC_1(struct cpufreq_policy *VAR_1)
{
 if (VAR_1->cpu)
  return -VAR_0;

 FUNC_0(VAR_1);
 return 0;
}
