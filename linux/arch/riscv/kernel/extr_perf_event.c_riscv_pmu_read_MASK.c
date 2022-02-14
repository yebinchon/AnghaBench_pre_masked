
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct hw_perf_event {int idx; int prev_count; } ;
struct perf_event {int count; struct hw_perf_event hw; } ;
struct TYPE_2__ {unsigned long long counter_width; } ;


 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_1)
{
 struct hw_perf_event *VAR_2 = &VAR_1->hw;
 u64 VAR_3, VAR_4;
 u64 VAR_5;
 int VAR_6 = VAR_2->idx;
 u64 VAR_7;

 do {
  VAR_3 = FUNC_2(&VAR_2->prev_count);
  VAR_4 = FUNC_3(VAR_6);

  VAR_5 = FUNC_1(&VAR_2->prev_count, VAR_3,
      VAR_4);
 } while (VAR_5 != VAR_3);




 VAR_7 = (VAR_4 - VAR_3) &
  ((1ULL << VAR_0->counter_width) - 1);
 FUNC_0(VAR_7, &VAR_1->count);




}
