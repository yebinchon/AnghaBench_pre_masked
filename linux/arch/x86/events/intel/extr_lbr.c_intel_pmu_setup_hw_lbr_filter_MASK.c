
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct hw_perf_event_extra {unsigned long long config; int idx; } ;
struct TYPE_6__ {struct hw_perf_event_extra branch_reg; } ;
struct TYPE_5__ {unsigned long long branch_sample_type; } ;
struct perf_event {TYPE_2__ hw; TYPE_1__ attr; } ;
struct TYPE_7__ {scalar_t__ lbr_format; } ;
struct TYPE_8__ {unsigned long long* lbr_sel_map; unsigned long long lbr_sel_mask; TYPE_3__ intel_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 int VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 TYPE_4__ VAR_10 ;

__attribute__((used)) static int FUNC_0(struct perf_event *VAR_11)
{
 struct hw_perf_event_extra *VAR_12;
 u64 VAR_13 = VAR_11->attr.branch_sample_type;
 u64 VAR_14 = 0, VAR_15;
 int VAR_16;

 for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) {
  if (!(VAR_13 & (1ULL << VAR_16)))
   continue;

  VAR_15 = VAR_10.lbr_sel_map[VAR_16];
  if (VAR_15 == VAR_5)
   return -VAR_0;

  if (VAR_15 != VAR_4)
   VAR_14 |= VAR_15;
 }

 VAR_12 = &VAR_11->hw.branch_reg;
 VAR_12->idx = VAR_1;
 VAR_12->config = VAR_14 ^ (VAR_10.lbr_sel_mask & ~VAR_2);

 if ((VAR_13 & VAR_8) &&
     (VAR_13 & VAR_9) &&
     (VAR_10.intel_cap.lbr_format == VAR_3))
  VAR_12->config |= VAR_6;

 return 0;
}
