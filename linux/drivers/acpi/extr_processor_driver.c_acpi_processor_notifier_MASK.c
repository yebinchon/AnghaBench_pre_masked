
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct cpufreq_policy {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct cpufreq_policy*) ;
 int FUNC_1 (struct cpufreq_policy*) ;
 int FUNC_2 (struct cpufreq_policy*) ;
 int FUNC_3 (struct cpufreq_policy*) ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_2,
       unsigned long VAR_3, void *VAR_4)
{
 struct cpufreq_policy *VAR_5 = VAR_4;

 if (VAR_3 == VAR_0) {
  FUNC_3(VAR_5);
  FUNC_1(VAR_5);
 } else if (VAR_3 == VAR_1) {
  FUNC_0(VAR_5);
  FUNC_2(VAR_5);
 }

 return 0;
}
