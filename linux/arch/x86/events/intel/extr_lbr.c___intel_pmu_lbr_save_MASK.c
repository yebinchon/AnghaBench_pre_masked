
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct x86_perf_task_context {scalar_t__ lbr_callstack_users; int* lbr_from; int valid_lbrs; int tos; scalar_t__ log_id; int lbr_stack_state; int * lbr_info; int * lbr_to; } ;
struct cpu_hw_events {scalar_t__ last_log_id; struct x86_perf_task_context* last_task_ctx; } ;
struct TYPE_3__ {scalar_t__ lbr_format; } ;
struct TYPE_4__ {int lbr_nr; TYPE_1__ intel_cap; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (scalar_t__,int ) ;
 struct cpu_hw_events* FUNC_4 (int *) ;
 TYPE_2__ VAR_5 ;

__attribute__((used)) static void FUNC_5(struct x86_perf_task_context *VAR_6)
{
 struct cpu_hw_events *VAR_7 = FUNC_4(&VAR_4);
 unsigned VAR_8, VAR_9;
 u64 VAR_10, VAR_11;
 int VAR_12;

 if (VAR_6->lbr_callstack_users == 0) {
  VAR_6->lbr_stack_state = VAR_1;
  return;
 }

 VAR_9 = VAR_5.lbr_nr - 1;
 VAR_10 = FUNC_0();
 for (VAR_12 = 0; VAR_12 < VAR_5.lbr_nr; VAR_12++) {
  VAR_8 = (VAR_10 - VAR_12) & VAR_9;
  VAR_11 = FUNC_1(VAR_8);
  if (!VAR_11)
   break;
  VAR_6->lbr_from[VAR_12] = VAR_11;
  VAR_6->lbr_to[VAR_12] = FUNC_2(VAR_8);
  if (VAR_5.intel_cap.lbr_format == VAR_0)
   FUNC_3(VAR_3 + VAR_8, VAR_6->lbr_info[VAR_12]);
 }
 VAR_6->valid_lbrs = VAR_12;
 VAR_6->tos = VAR_10;
 VAR_6->lbr_stack_state = VAR_2;

 VAR_7->last_task_ctx = VAR_6;
 VAR_7->last_log_id = ++VAR_6->log_id;
}
