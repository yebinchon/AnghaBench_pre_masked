
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event_extra {int idx; int config; } ;
struct hw_perf_event {int config; int config_base; struct hw_perf_event_extra branch_reg; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct intel_uncore_box {TYPE_1__* pmu; } ;
struct TYPE_2__ {int pmu_idx; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_1 ;
 int FUNC_9 (struct intel_uncore_box*,int) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static void FUNC_11(struct intel_uncore_box *VAR_2, struct perf_event *VAR_3)
{
 struct hw_perf_event *VAR_4 = &VAR_3->hw;
 struct hw_perf_event_extra *VAR_5 = &VAR_4->extra_reg;
 struct hw_perf_event_extra *VAR_6 = &VAR_4->branch_reg;
 int VAR_7, VAR_8;

 VAR_7 = VAR_5->idx;
 VAR_8 = VAR_7 / 6 + VAR_2->pmu->pmu_idx * 4;

 switch (VAR_7 % 6) {
 case 0:
  FUNC_10(FUNC_0(VAR_8), VAR_5->config);
  break;
 case 1:
  FUNC_10(FUNC_1(VAR_8), VAR_5->config);
  break;
 case 2:
 case 3:
  FUNC_10(FUNC_2(VAR_8),
   FUNC_9(VAR_2, 2 + (VAR_7 / 6) * 5));
  break;
 case 4:
  FUNC_10(FUNC_5(VAR_8),
   VAR_4->config >> 32);
  FUNC_10(FUNC_4(VAR_8), VAR_5->config);
  FUNC_10(FUNC_3(VAR_8), VAR_6->config);
  break;
 case 5:
  FUNC_10(FUNC_8(VAR_8),
   VAR_4->config >> 32);
  FUNC_10(FUNC_7(VAR_8), VAR_5->config);
  FUNC_10(FUNC_6(VAR_8), VAR_6->config);
  break;
 }

 FUNC_10(VAR_4->config_base, VAR_0 |
  (VAR_4->config & VAR_1));
}
