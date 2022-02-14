
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct x86_perf_task_context {int lbr_callstack_users; } ;
struct TYPE_6__ {scalar_t__ precise_ip; } ;
struct perf_event {TYPE_3__* ctx; TYPE_2__ attr; } ;
struct cpu_hw_events {scalar_t__ lbr_pebs_users; scalar_t__ lbr_users; int br_sel; } ;
struct TYPE_5__ {scalar_t__ pebs_baseline; } ;
struct TYPE_8__ {TYPE_1__ intel_cap; int lbr_nr; } ;
struct TYPE_7__ {int pmu; struct x86_perf_task_context* task_ctx_data; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 struct cpu_hw_events* FUNC_3 (int *) ;
 TYPE_4__ VAR_1 ;

void FUNC_4(struct perf_event *VAR_2)
{
 struct cpu_hw_events *VAR_3 = FUNC_3(&VAR_0);
 struct x86_perf_task_context *VAR_4;

 if (!VAR_1.lbr_nr)
  return;

 if (FUNC_1(VAR_3->br_sel) &&
     VAR_2->ctx->task_ctx_data) {
  VAR_4 = VAR_2->ctx->task_ctx_data;
  VAR_4->lbr_callstack_users--;
 }

 if (VAR_1.intel_cap.pebs_baseline && VAR_2->attr.precise_ip > 0)
  VAR_3->lbr_pebs_users--;
 VAR_3->lbr_users--;
 FUNC_0(VAR_3->lbr_users < 0);
 FUNC_0(VAR_3->lbr_pebs_users < 0);
 FUNC_2(VAR_2->ctx->pmu);
}
