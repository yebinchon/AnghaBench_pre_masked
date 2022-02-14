
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86_perf_task_context {int dummy; } ;
struct perf_event_context {struct x86_perf_task_context* task_ctx_data; } ;
struct cpu_hw_events {int lbr_users; } ;


 int FUNC_0 (struct x86_perf_task_context*) ;
 int FUNC_1 (struct x86_perf_task_context*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 struct cpu_hw_events* FUNC_3 (int *) ;

void FUNC_4(struct perf_event_context *VAR_1, bool VAR_2)
{
 struct cpu_hw_events *VAR_3 = FUNC_3(&VAR_0);
 struct x86_perf_task_context *VAR_4;

 if (!VAR_3->lbr_users)
  return;






 VAR_4 = VAR_1 ? VAR_1->task_ctx_data : ((void*)0);
 if (VAR_4) {
  if (VAR_2)
   FUNC_0(VAR_4);
  else
   FUNC_1(VAR_4);
  return;
 }







 if (VAR_2)
  FUNC_2();
}
