
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_stats {int state_num; int* freq_table; int * time_in_state; int lock; } ;
struct cpufreq_policy {scalar_t__ fast_switch_enabled; struct cpufreq_stats* stats; } ;
typedef int ssize_t ;


 int FUNC_0 (struct cpufreq_stats*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char*,int,unsigned long long) ;

__attribute__((used)) static ssize_t FUNC_5(struct cpufreq_policy *VAR_0, char *VAR_1)
{
 struct cpufreq_stats *VAR_2 = VAR_0->stats;
 ssize_t VAR_3 = 0;
 int VAR_4;

 if (VAR_0->fast_switch_enabled)
  return 0;

 FUNC_2(&VAR_2->lock);
 FUNC_0(VAR_2);
 FUNC_3(&VAR_2->lock);

 for (VAR_4 = 0; VAR_4 < VAR_2->state_num; VAR_4++) {
  VAR_3 += FUNC_4(VAR_1 + VAR_3, "%u %llu\n", VAR_2->freq_table[VAR_4],
   (unsigned long long)
   FUNC_1(VAR_2->time_in_state[VAR_4]));
 }
 return VAR_3;
}
