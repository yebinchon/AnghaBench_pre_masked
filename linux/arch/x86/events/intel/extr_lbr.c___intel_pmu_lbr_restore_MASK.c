
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct x86_perf_task_context {scalar_t__ lbr_callstack_users; scalar_t__ lbr_stack_state; int tos; scalar_t__ log_id; int valid_lbrs; int* lbr_info; int * lbr_to; int * lbr_from; } ;
struct cpu_hw_events {scalar_t__ last_log_id; struct x86_perf_task_context* last_task_ctx; } ;
struct TYPE_3__ {scalar_t__ lbr_format; } ;
struct TYPE_4__ {int lbr_nr; scalar_t__ lbr_tos; TYPE_1__ intel_cap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 struct cpu_hw_events* FUNC_2 (int *) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (scalar_t__,int) ;
 TYPE_2__ VAR_4 ;

__attribute__((used)) static void FUNC_6(struct x86_perf_task_context *VAR_5)
{
 struct cpu_hw_events *VAR_6 = FUNC_2(&VAR_3);
 int VAR_7;
 unsigned VAR_8, VAR_9;
 u64 VAR_10;

 if (VAR_5->lbr_callstack_users == 0 ||
     VAR_5->lbr_stack_state == VAR_1) {
  FUNC_0();
  return;
 }

 VAR_10 = VAR_5->tos;





 if ((VAR_5 == VAR_6->last_task_ctx) &&
     (VAR_5->log_id == VAR_6->last_log_id) &&
     FUNC_1(VAR_10)) {
  VAR_5->lbr_stack_state = VAR_1;
  return;
 }

 VAR_9 = VAR_4.lbr_nr - 1;
 for (VAR_7 = 0; VAR_7 < VAR_5->valid_lbrs; VAR_7++) {
  VAR_8 = (VAR_10 - VAR_7) & VAR_9;
  FUNC_3(VAR_8, VAR_5->lbr_from[VAR_7]);
  FUNC_4 (VAR_8, VAR_5->lbr_to[VAR_7]);

  if (VAR_4.intel_cap.lbr_format == VAR_0)
   FUNC_5(VAR_2 + VAR_8, VAR_5->lbr_info[VAR_7]);
 }

 for (; VAR_7 < VAR_4.lbr_nr; VAR_7++) {
  VAR_8 = (VAR_10 - VAR_7) & VAR_9;
  FUNC_3(VAR_8, 0);
  FUNC_4(VAR_8, 0);
  if (VAR_4.intel_cap.lbr_format == VAR_0)
   FUNC_5(VAR_2 + VAR_8, 0);
 }

 FUNC_5(VAR_4.lbr_tos, VAR_10);
 VAR_5->lbr_stack_state = VAR_1;
}
