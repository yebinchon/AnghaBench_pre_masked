
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct global_pstate_info {scalar_t__ last_gpstate_idx; scalar_t__ last_lpstate_idx; scalar_t__ last_sampled_time; scalar_t__ elapsed_time; scalar_t__ highest_lpstate_idx; } ;
struct cpufreq_policy {struct global_pstate_info* driver_data; } ;



__attribute__((used)) static inline void FUNC_0(struct cpufreq_policy *VAR_0)
{
 struct global_pstate_info *VAR_1 = VAR_0->driver_data;

 VAR_1->highest_lpstate_idx = 0;
 VAR_1->elapsed_time = 0;
 VAR_1->last_sampled_time = 0;
 VAR_1->last_lpstate_idx = 0;
 VAR_1->last_gpstate_idx = 0;
}
