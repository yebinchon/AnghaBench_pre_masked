
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gvt_workload_scheduler {struct gvt_sched_data* sched_data; } ;
struct intel_gvt {struct intel_gvt_workload_scheduler scheduler; } ;
struct gvt_sched_data {int timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct gvt_sched_data*) ;

__attribute__((used)) static void FUNC_2(struct intel_gvt *VAR_0)
{
 struct intel_gvt_workload_scheduler *VAR_1 =
  &VAR_0->scheduler;
 struct gvt_sched_data *VAR_2 = VAR_1->sched_data;

 FUNC_0(&VAR_2->timer);

 FUNC_1(VAR_2);
 VAR_1->sched_data = ((void*)0);
}
