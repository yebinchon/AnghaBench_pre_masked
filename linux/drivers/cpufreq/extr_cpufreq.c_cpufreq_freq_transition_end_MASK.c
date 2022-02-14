
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int transition_ongoing; int transition_wait; int * transition_task; } ;
struct cpufreq_freqs {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct cpufreq_policy*,struct cpufreq_freqs*,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct cpufreq_policy *VAR_0,
  struct cpufreq_freqs *VAR_1, int VAR_2)
{
 if (FUNC_0(!VAR_0->transition_ongoing))
  return;

 FUNC_1(VAR_0, VAR_1, VAR_2);

 VAR_0->transition_ongoing = 0;
 VAR_0->transition_task = ((void*)0);

 FUNC_2(&VAR_0->transition_wait);
}
