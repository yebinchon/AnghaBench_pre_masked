
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idx; } ;
struct perf_event {TYPE_1__ hw; struct perf_event* group_leader; } ;
struct intel_uncore_pmu {int type; } ;
struct intel_uncore_box {int n_events; struct intel_uncore_pmu* pmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct intel_uncore_box*) ;
 struct intel_uncore_box* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct intel_uncore_box*,int *,int) ;
 int FUNC_3 (struct intel_uncore_box*,struct perf_event*,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct intel_uncore_pmu *VAR_3,
    struct perf_event *VAR_4)
{
 struct perf_event *VAR_5 = VAR_4->group_leader;
 struct intel_uncore_box *VAR_6;
 int VAR_7 = -VAR_0, VAR_8;


 if (FUNC_4(VAR_4->hw.idx))
  return 0;

 VAR_6 = FUNC_1(VAR_3->type, VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->pmu = VAR_3;






 VAR_8 = FUNC_3(VAR_6, VAR_5, 1);
 if (VAR_8 < 0)
  goto out;

 VAR_6->n_events = VAR_8;
 VAR_8 = FUNC_3(VAR_6, VAR_4, 0);
 if (VAR_8 < 0)
  goto out;

 VAR_6->n_events = VAR_8;

 VAR_7 = FUNC_2(VAR_6, ((void*)0), VAR_8);
out:
 FUNC_0(VAR_6);
 return VAR_7;
}
