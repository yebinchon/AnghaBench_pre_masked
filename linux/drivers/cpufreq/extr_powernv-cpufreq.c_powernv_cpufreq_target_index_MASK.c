
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powernv_smp_call_data {void* gpstate_id; void* pstate_id; } ;
struct global_pstate_info {unsigned int last_sampled_time; unsigned int highest_lpstate_idx; unsigned int last_gpstate_idx; unsigned int elapsed_time; unsigned int last_lpstate_idx; int gpstate_lock; int timer; } ;
struct cpufreq_policy {int cpus; struct global_pstate_info* driver_data; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (scalar_t__,unsigned int,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 unsigned int FUNC_3 () ;
 void* FUNC_4 (unsigned int) ;
 unsigned int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct global_pstate_info*) ;
 int VAR_1 ;
 int FUNC_10 (struct cpufreq_policy*) ;
 int VAR_2 ;
 int FUNC_11 (int ,int ,struct powernv_smp_call_data*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct cpufreq_policy *VAR_4,
     unsigned int VAR_5)
{
 struct powernv_smp_call_data VAR_6;
 unsigned int VAR_7, VAR_8;
 struct global_pstate_info *VAR_9 = VAR_4->driver_data;

 if (FUNC_14(VAR_1) && VAR_5 != FUNC_3())
  return 0;

 if (!VAR_3) {



  FUNC_7();
  FUNC_6(((void*)0));
  FUNC_8();
 }

 VAR_7 = FUNC_5(FUNC_2());

 VAR_6.pstate_id = FUNC_4(VAR_5);
 if (!VAR_9) {
  VAR_6.gpstate_id = VAR_6.pstate_id;
  goto no_gpstate;
 }

 FUNC_12(&VAR_9->gpstate_lock);

 if (!VAR_9->last_sampled_time) {
  VAR_8 = VAR_5;
  VAR_9->highest_lpstate_idx = VAR_5;
  goto gpstates_done;
 }

 if (VAR_9->last_gpstate_idx < VAR_5) {
  VAR_9->elapsed_time += VAR_7 -
       VAR_9->last_sampled_time;






  if (VAR_9->elapsed_time > VAR_0) {
   FUNC_10(VAR_4);
   VAR_9->highest_lpstate_idx = VAR_5;
   VAR_8 = VAR_5;
  } else {

   VAR_8 = FUNC_0(VAR_9->elapsed_time,
        VAR_9->highest_lpstate_idx,
        VAR_5);
  }
 } else {
  FUNC_10(VAR_4);
  VAR_9->highest_lpstate_idx = VAR_5;
  VAR_8 = VAR_5;
 }





 if (VAR_8 != VAR_5)
  FUNC_9(VAR_9);
 else
  FUNC_1(&VAR_9->timer);

gpstates_done:
 VAR_6.gpstate_id = FUNC_4(VAR_8);
 VAR_9->last_sampled_time = VAR_7;
 VAR_9->last_gpstate_idx = VAR_8;
 VAR_9->last_lpstate_idx = VAR_5;

 FUNC_13(&VAR_9->gpstate_lock);

no_gpstate:





 FUNC_11(VAR_4->cpus, VAR_2, &VAR_6, 1);
 return 0;
}
