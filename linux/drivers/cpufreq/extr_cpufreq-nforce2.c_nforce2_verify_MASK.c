
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int max; unsigned int min; } ;


 int FUNC_0 (struct cpufreq_policy*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct cpufreq_policy *VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = VAR_1->max / (VAR_0 * 100);

 if (VAR_1->min < (VAR_2 * VAR_0 * 100))
  VAR_1->max = (VAR_2 + 1) * VAR_0 * 100;

 FUNC_0(VAR_1);
 return 0;
}
