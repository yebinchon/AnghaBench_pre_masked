
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_8__ {void* idx; } ;
struct TYPE_7__ {void* idx; } ;
struct hw_perf_event {int idx; unsigned long long last_tag; int event_base; int config; TYPE_4__ branch_reg; TYPE_3__ extra_reg; scalar_t__ sample_period; } ;
struct TYPE_6__ {int config; scalar_t__ type; scalar_t__ sample_period; } ;
struct perf_event {scalar_t__ cpu; struct hw_perf_event hw; int event_caps; struct intel_uncore_box* pmu_private; TYPE_2__ attr; TYPE_1__* pmu; } ;
struct intel_uncore_pmu {scalar_t__ func_id; } ;
struct intel_uncore_box {scalar_t__ cpu; } ;
struct TYPE_5__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct intel_uncore_pmu* FUNC_0 (struct perf_event*) ;
 struct intel_uncore_box* FUNC_1 (struct intel_uncore_pmu*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct perf_event *VAR_8)
{
 struct intel_uncore_pmu *VAR_9;
 struct intel_uncore_box *VAR_10;
 struct hw_perf_event *VAR_11 = &VAR_8->hw;
 u64 VAR_12 = VAR_8->attr.config & VAR_6;
 int VAR_13, VAR_14;

 if (VAR_8->attr.type != VAR_8->pmu->type)
  return -VAR_1;

 VAR_9 = FUNC_0(VAR_8);

 if (VAR_9->func_id < 0)
  return -VAR_1;


 if (VAR_11->sample_period)
  return -VAR_0;


 if (VAR_8->attr.sample_period)
  return -VAR_0;





 if (VAR_8->cpu < 0)
  return -VAR_0;


 if (VAR_8->attr.config & ~VAR_6)
  return -VAR_0;

 VAR_10 = FUNC_1(VAR_9, VAR_8->cpu);
 if (!VAR_10 || VAR_10->cpu < 0)
  return -VAR_0;

 VAR_8->cpu = VAR_10->cpu;
 VAR_8->pmu_private = VAR_10;

 VAR_8->event_caps |= VAR_3;

 VAR_8->hw.idx = -1;
 VAR_8->hw.last_tag = ~0ULL;
 VAR_8->hw.extra_reg.idx = VAR_2;
 VAR_8->hw.branch_reg.idx = VAR_2;



 switch (VAR_12) {
 case 129:
  VAR_14 = VAR_4;
  VAR_13 = VAR_7;
  break;
 case 128:
  VAR_14 = VAR_5;
  VAR_13 = VAR_7;
  break;
 default:
  return -VAR_0;
 }


 VAR_8->hw.event_base = VAR_14;
 VAR_8->hw.idx = VAR_13;


 VAR_8->hw.config = ((VAR_12 - 1) << 8) | 0x10ff;



 return 0;
}
