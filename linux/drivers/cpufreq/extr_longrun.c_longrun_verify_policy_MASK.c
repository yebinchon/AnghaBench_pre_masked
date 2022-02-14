
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {scalar_t__ policy; scalar_t__ cpu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cpufreq_policy*) ;

__attribute__((used)) static int FUNC_1(struct cpufreq_policy *VAR_3)
{
 if (!VAR_3)
  return -VAR_2;

 VAR_3->cpu = 0;
 FUNC_0(VAR_3);

 if ((VAR_3->policy != VAR_1) &&
     (VAR_3->policy != VAR_0))
  return -VAR_2;

 return 0;
}
