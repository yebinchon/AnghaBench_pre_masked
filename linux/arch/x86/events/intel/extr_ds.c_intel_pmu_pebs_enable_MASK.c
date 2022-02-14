
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct hw_perf_event {unsigned long long idx; int flags; scalar_t__ sample_period; int config; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct debug_store {int* pebs_event_reset; } ;
struct cpu_hw_events {unsigned long long pebs_enabled; scalar_t__ pebs_data_cfg; scalar_t__ active_pebs_data_cfg; struct debug_store* ds; } ;
struct TYPE_3__ {scalar_t__ pebs_baseline; } ;
struct TYPE_4__ {int version; int cntval_mask; TYPE_1__ intel_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct perf_event*) ;
 struct cpu_hw_events* FUNC_1 (int *) ;
 int FUNC_2 (int ,scalar_t__) ;
 TYPE_2__ VAR_9 ;

void FUNC_3(struct perf_event *VAR_10)
{
 struct cpu_hw_events *VAR_11 = FUNC_1(&VAR_8);
 struct hw_perf_event *VAR_12 = &VAR_10->hw;
 struct debug_store *VAR_13 = VAR_11->ds;

 VAR_12->config &= ~VAR_0;

 VAR_11->pebs_enabled |= 1ULL << VAR_12->idx;

 if ((VAR_10->hw.flags & VAR_6) && (VAR_9.version < 5))
  VAR_11->pebs_enabled |= 1ULL << (VAR_12->idx + 32);
 else if (VAR_10->hw.flags & VAR_7)
  VAR_11->pebs_enabled |= 1ULL << 63;

 if (VAR_9.intel_cap.pebs_baseline) {
  VAR_12->config |= VAR_1;
  if (VAR_11->pebs_data_cfg != VAR_11->active_pebs_data_cfg) {
   FUNC_2(VAR_4, VAR_11->pebs_data_cfg);
   VAR_11->active_pebs_data_cfg = VAR_11->pebs_data_cfg;
  }
 }





 if (VAR_12->flags & VAR_5) {
  unsigned int VAR_14 = VAR_12->idx;

  if (VAR_14 >= VAR_2)
   VAR_14 = VAR_3 + (VAR_14 - VAR_2);
  VAR_13->pebs_event_reset[VAR_14] =
   (u64)(-VAR_12->sample_period) & VAR_9.cntval_mask;
 } else {
  VAR_13->pebs_event_reset[VAR_12->idx] = 0;
 }

 FUNC_0(VAR_10);
}
