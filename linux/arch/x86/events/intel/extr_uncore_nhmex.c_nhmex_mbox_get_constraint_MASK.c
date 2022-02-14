
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct hw_perf_event_extra {int config; int idx; int alloc; } ;
struct TYPE_2__ {struct hw_perf_event_extra branch_reg; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_1__ hw; } ;
struct intel_uncore_box {int dummy; } ;
struct event_constraint {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (struct perf_event*,int,int) ;
 int FUNC_3 (struct intel_uncore_box*,int,int) ;
 int FUNC_4 (struct intel_uncore_box*,int) ;
 scalar_t__ FUNC_5 (struct intel_uncore_box*) ;
 struct event_constraint VAR_2 ;

__attribute__((used)) static struct event_constraint *
FUNC_6(struct intel_uncore_box *VAR_3, struct perf_event *VAR_4)
{
 struct hw_perf_event_extra *VAR_5 = &VAR_4->hw.extra_reg;
 struct hw_perf_event_extra *VAR_6 = &VAR_4->hw.branch_reg;
 int VAR_7, VAR_8[2], VAR_9 = 0;
 u64 VAR_10 = VAR_5->config;

 VAR_8[0] = FUNC_1(VAR_5->idx, 0, 8);
 VAR_8[1] = FUNC_1(VAR_5->idx, 1, 8);
again:
 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  if (!FUNC_5(VAR_3) && (VAR_5->alloc & (0x1 << VAR_7)))
   VAR_8[VAR_7] = 0xff;

  if (VAR_8[VAR_7] == 0xff)
   continue;

  if (!FUNC_3(VAR_3, VAR_8[VAR_7],
    FUNC_1(VAR_10, VAR_7, 32)))
   goto fail;
  VAR_9 |= (0x1 << VAR_7);
 }


 if (VAR_6->idx != VAR_1 &&
     (FUNC_5(VAR_3) || !VAR_6->alloc) &&
     !FUNC_3(VAR_3, VAR_6->idx, VAR_6->config))
  goto fail;







 if (!FUNC_5(VAR_3)) {
  if (VAR_8[0] != 0xff && VAR_8[0] != FUNC_1(VAR_5->idx, 0, 8))
   FUNC_2(VAR_4, VAR_8[0], 1);
  VAR_5->alloc |= VAR_9;
  if (VAR_6->idx != VAR_1)
   VAR_6->alloc = 1;
 }
 return ((void*)0);
fail:
 if (VAR_8[0] != 0xff && !(VAR_9 & 0x1) &&
     VAR_8[0] >= VAR_0) {






  FUNC_0(FUNC_1(VAR_5->idx, 1, 8) != 0xff);
  VAR_8[0] -= VAR_0;
  VAR_8[0] = (VAR_8[0] + 1) % 4;
  VAR_8[0] += VAR_0;
  if (VAR_8[0] != FUNC_1(VAR_5->idx, 0, 8)) {
   VAR_10 = FUNC_2(VAR_4, VAR_8[0], 0);
   goto again;
  }
 }

 if (VAR_9 & 0x1)
  FUNC_4(VAR_3, VAR_8[0]);
 if (VAR_9 & 0x2)
  FUNC_4(VAR_3, VAR_8[1]);
 return &VAR_2;
}
