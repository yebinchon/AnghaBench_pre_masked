
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct x86_perf_task_context {int lbr_callstack_users; } ;
struct TYPE_10__ {scalar_t__ precise_ip; } ;
struct TYPE_7__ {int reg; } ;
struct TYPE_8__ {TYPE_1__ branch_reg; } ;
struct perf_event {int total_time_running; TYPE_5__* ctx; TYPE_4__ attr; TYPE_2__ hw; } ;
struct cpu_hw_events {int lbr_users; int lbr_pebs_users; int br_sel; } ;
struct TYPE_9__ {scalar_t__ pebs_baseline; } ;
struct TYPE_12__ {TYPE_3__ intel_cap; int lbr_nr; } ;
struct TYPE_11__ {int pmu; struct x86_perf_task_context* task_ctx_data; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 struct cpu_hw_events* FUNC_3 (int *) ;
 TYPE_6__ VAR_1 ;

void FUNC_4(struct perf_event *VAR_2)
{
 struct cpu_hw_events *VAR_3 = FUNC_3(&VAR_0);
 struct x86_perf_task_context *VAR_4;

 if (!VAR_1.lbr_nr)
  return;

 VAR_3->br_sel = VAR_2->hw.branch_reg.reg;

 if (FUNC_0(VAR_3->br_sel) && VAR_2->ctx->task_ctx_data) {
  VAR_4 = VAR_2->ctx->task_ctx_data;
  VAR_4->lbr_callstack_users++;
 }
 if (VAR_1.intel_cap.pebs_baseline && VAR_2->attr.precise_ip > 0)
  VAR_3->lbr_pebs_users++;
 FUNC_2(VAR_2->ctx->pmu);
 if (!VAR_3->lbr_users++ && !VAR_2->total_time_running)
  FUNC_1();
}
