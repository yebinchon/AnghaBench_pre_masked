
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ event_base; int prev_count; } ;
struct perf_event {int count; TYPE_1__ hw; } ;
typedef scalar_t__ s64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (struct perf_event*) ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct perf_event *VAR_2)
{
 u64 VAR_3, VAR_4;
 s64 VAR_5;


again:
 VAR_3 = FUNC_2(&VAR_2->hw.prev_count);
 VAR_4 = FUNC_4(VAR_2);

 if (FUNC_1(&VAR_2->hw.prev_count, VAR_3, VAR_4) != VAR_3)
  goto again;

 VAR_5 = VAR_4 - VAR_3;
 if (FUNC_6(VAR_2->hw.event_base == VAR_1)) {
  VAR_5 = FUNC_5(VAR_5, 31);
  FUNC_0(VAR_5, &VAR_2->count);
 } else if (FUNC_6(VAR_2->hw.event_base == VAR_0)) {

  VAR_4 = VAR_4 & (1ULL << 31) ? (VAR_4 >> 16) & 0x3f : -1;
  FUNC_3(&VAR_2->count, VAR_4);
 } else {
  FUNC_0(VAR_5, &VAR_2->count);
 }
}
