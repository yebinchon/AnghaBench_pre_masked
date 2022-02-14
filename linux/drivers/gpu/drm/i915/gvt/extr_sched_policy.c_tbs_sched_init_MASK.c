
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_gvt_workload_scheduler {struct gvt_sched_data* sched_data; } ;
struct intel_gvt {struct intel_gvt_workload_scheduler scheduler; } ;
struct TYPE_2__ {int function; } ;
struct gvt_sched_data {struct intel_gvt* gvt; int period; TYPE_1__ timer; int lru_runq_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 struct gvt_sched_data* FUNC_2 (int,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct intel_gvt *VAR_6)
{
 struct intel_gvt_workload_scheduler *VAR_7 =
  &VAR_6->scheduler;

 struct gvt_sched_data *VAR_8;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_0(&VAR_8->lru_runq_head);
 FUNC_1(&VAR_8->timer, VAR_0, VAR_4);
 VAR_8->timer.function = VAR_5;
 VAR_8->period = VAR_3;
 VAR_8->gvt = VAR_6;

 VAR_7->sched_data = VAR_8;

 return 0;
}
