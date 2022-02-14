
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct cpufreq_stats {unsigned int max_state; int lock; scalar_t__ total_trans; int last_time; int trans_table; int time_in_state; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct cpufreq_stats *VAR_0)
{
 unsigned int VAR_1 = VAR_0->max_state;

 FUNC_2(&VAR_0->lock);
 FUNC_1(VAR_0->time_in_state, 0, VAR_1 * sizeof(u64));
 FUNC_1(VAR_0->trans_table, 0, VAR_1 * VAR_1 * sizeof(int));
 VAR_0->last_time = FUNC_0();
 VAR_0->total_trans = 0;
 FUNC_3(&VAR_0->lock);
}
