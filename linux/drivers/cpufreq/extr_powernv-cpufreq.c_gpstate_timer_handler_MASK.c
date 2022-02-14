
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct powernv_smp_call_data {scalar_t__ gpstate_id; scalar_t__ pstate_id; } ;
struct TYPE_2__ {scalar_t__ expires; } ;
struct global_pstate_info {unsigned int last_sampled_time; scalar_t__ elapsed_time; int highest_lpstate_idx; int last_gpstate_idx; int last_lpstate_idx; int gpstate_lock; TYPE_1__ timer; struct cpufreq_policy* policy; } ;
struct cpufreq_policy {int cpus; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (scalar_t__,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 struct global_pstate_info* FUNC_6 (int ,struct timer_list*,int ) ;
 unsigned long FUNC_7 (int ) ;
 struct global_pstate_info* VAR_2 ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct global_pstate_info*) ;
 int FUNC_13 () ;
 int FUNC_14 (struct cpufreq_policy*) ;
 int FUNC_15 (struct powernv_smp_call_data*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int VAR_4 ;

void FUNC_18(struct timer_list *VAR_5)
{
 struct global_pstate_info *VAR_6 = FUNC_6(VAR_6, VAR_5, VAR_4);
 struct cpufreq_policy *VAR_7 = VAR_6->policy;
 int VAR_8, VAR_9;
 unsigned long VAR_10;
 unsigned int VAR_11 = FUNC_9(VAR_3)
     - VAR_6->last_sampled_time;
 struct powernv_smp_call_data VAR_12;

 if (!FUNC_16(&VAR_6->gpstate_lock))
  return;




 if (!FUNC_3(FUNC_13(), VAR_7->cpus)) {
  VAR_6->timer.expires = VAR_3 + FUNC_10(1);
  FUNC_0(&VAR_6->timer, FUNC_2(VAR_7->cpus));
  FUNC_17(&VAR_6->gpstate_lock);
  return;
 }






 VAR_10 = FUNC_7(VAR_1);
 VAR_12.gpstate_id = FUNC_4(VAR_10);
 VAR_12.pstate_id = FUNC_5(VAR_10);
 if (VAR_12.gpstate_id == VAR_12.pstate_id) {
  FUNC_14(VAR_7);
  FUNC_17(&VAR_6->gpstate_lock);
  return;
 }

 VAR_6->last_sampled_time += VAR_11;
 VAR_6->elapsed_time += VAR_11;

 if (VAR_6->elapsed_time > VAR_0) {
  VAR_8 = FUNC_11(VAR_12.pstate_id);
  VAR_9 = VAR_8;
  FUNC_14(VAR_7);
  VAR_6->highest_lpstate_idx = VAR_8;
 } else {
  VAR_9 = FUNC_11(VAR_12.pstate_id);
  VAR_8 = FUNC_1(VAR_6->elapsed_time,
       VAR_6->highest_lpstate_idx,
       VAR_9);
 }
 VAR_12.gpstate_id = FUNC_8(VAR_8);
 VAR_6->last_gpstate_idx = VAR_8;
 VAR_6->last_lpstate_idx = VAR_9;




 if (VAR_8 != VAR_6->last_lpstate_idx)
  FUNC_12(VAR_6);

 FUNC_15(&VAR_12);
 FUNC_17(&VAR_6->gpstate_lock);
}
