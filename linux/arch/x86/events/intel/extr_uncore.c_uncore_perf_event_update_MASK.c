
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int prev_count; int idx; } ;
struct perf_event {int count; TYPE_1__ hw; } ;
struct intel_uncore_box {int dummy; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct intel_uncore_box*) ;
 int FUNC_4 (struct intel_uncore_box*,struct perf_event*) ;
 int FUNC_5 (struct intel_uncore_box*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct intel_uncore_box*,struct perf_event*) ;

void FUNC_9(struct intel_uncore_box *VAR_0, struct perf_event *VAR_1)
{
 u64 VAR_2, VAR_3, VAR_4;
 int VAR_5;

 if (FUNC_7(VAR_1->hw.idx))
  VAR_5 = 64 - FUNC_4(VAR_0, VAR_1);
 else if (FUNC_6(VAR_1->hw.idx))
  VAR_5 = 64 - FUNC_3(VAR_0);
 else
  VAR_5 = 64 - FUNC_5(VAR_0);


again:
 VAR_2 = FUNC_1(&VAR_1->hw.prev_count);
 VAR_3 = FUNC_8(VAR_0, VAR_1);
 if (FUNC_2(&VAR_1->hw.prev_count, VAR_3) != VAR_2)
  goto again;

 VAR_4 = (VAR_3 << VAR_5) - (VAR_2 << VAR_5);
 VAR_4 >>= VAR_5;

 FUNC_0(VAR_4, &VAR_1->count);
}
