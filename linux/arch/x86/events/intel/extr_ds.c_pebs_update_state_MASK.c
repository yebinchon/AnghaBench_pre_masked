
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct pmu {int dummy; } ;
struct perf_event {TYPE_2__* ctx; } ;
struct pebs_basic {int dummy; } ;
struct cpu_hw_events {int n_pebs; int pebs_data_cfg; int pebs_record_size; } ;
struct TYPE_4__ {scalar_t__ pebs_baseline; } ;
struct TYPE_6__ {TYPE_1__ intel_cap; } ;
struct TYPE_5__ {struct pmu* pmu; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct cpu_hw_events*) ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (struct cpu_hw_events*) ;
 int FUNC_4 (struct pmu*) ;
 int FUNC_5 (struct pmu*) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static void
FUNC_6(bool VAR_1, struct cpu_hw_events *VAR_2,
    struct perf_event *VAR_3, bool VAR_4)
{
 struct pmu *VAR_5 = VAR_3->ctx->pmu;





 bool VAR_6 = VAR_2->n_pebs == 1;

 if (VAR_1 != FUNC_1(VAR_2)) {
  if (!VAR_1)
   FUNC_5(VAR_5);
  else
   FUNC_4(VAR_5);

  VAR_6 = 1;
 }





 if (VAR_0.intel_cap.pebs_baseline && VAR_4) {
  u64 VAR_7;


  if (VAR_2->n_pebs == 1) {
   VAR_2->pebs_data_cfg = 0;
   VAR_2->pebs_record_size = sizeof(struct pebs_basic);
  }

  VAR_7 = FUNC_2(VAR_3);


  if (VAR_7 & ~VAR_2->pebs_data_cfg) {
   VAR_2->pebs_data_cfg |= VAR_7;
   FUNC_0();
   VAR_6 = 1;
  }
 }

 if (VAR_6)
  FUNC_3(VAR_2);
}
