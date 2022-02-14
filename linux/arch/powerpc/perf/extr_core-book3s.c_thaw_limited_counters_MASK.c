
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct TYPE_2__ {int idx; int prev_count; } ;
struct perf_event {TYPE_1__ hw; } ;
struct cpu_hw_events {int n_limited; int* limited_hwidx; struct perf_event** limited_counter; } ;


 scalar_t__ FUNC_0 (unsigned long,unsigned long) ;
 unsigned long FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct perf_event*) ;

__attribute__((used)) static void FUNC_4(struct cpu_hw_events *VAR_0,
      unsigned long VAR_1, unsigned long VAR_2)
{
 struct perf_event *VAR_3;
 u64 VAR_4, VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0->n_limited; ++VAR_6) {
  VAR_3 = VAR_0->limited_counter[VAR_6];
  VAR_3->hw.idx = VAR_0->limited_hwidx[VAR_6];
  VAR_4 = (VAR_3->hw.idx == 5) ? VAR_1 : VAR_2;
  VAR_5 = FUNC_1(&VAR_3->hw.prev_count);
  if (FUNC_0(VAR_5, VAR_4))
   FUNC_2(&VAR_3->hw.prev_count, VAR_4);
  FUNC_3(VAR_3);
 }
}
