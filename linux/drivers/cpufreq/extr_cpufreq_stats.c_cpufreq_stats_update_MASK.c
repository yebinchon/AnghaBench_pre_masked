
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_stats {size_t last_index; unsigned long long last_time; int * time_in_state; } ;


 unsigned long long FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct cpufreq_stats *VAR_0)
{
 unsigned long long VAR_1 = FUNC_0();

 VAR_0->time_in_state[VAR_0->last_index] += VAR_1 - VAR_0->last_time;
 VAR_0->last_time = VAR_1;
}
