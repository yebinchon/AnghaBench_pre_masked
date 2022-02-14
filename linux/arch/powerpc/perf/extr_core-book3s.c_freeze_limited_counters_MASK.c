
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct TYPE_2__ {int idx; int prev_count; } ;
struct perf_event {int count; TYPE_1__ hw; } ;
struct cpu_hw_events {int n_limited; struct perf_event** limited_counter; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (unsigned long,int *) ;
 unsigned long FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct cpu_hw_events *VAR_0,
        unsigned long VAR_1, unsigned long VAR_2)
{
 struct perf_event *VAR_3;
 u64 VAR_4, VAR_5, VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0->n_limited; ++VAR_7) {
  VAR_3 = VAR_0->limited_counter[VAR_7];
  if (!VAR_3->hw.idx)
   continue;
  VAR_4 = (VAR_3->hw.idx == 5) ? VAR_1 : VAR_2;
  VAR_5 = FUNC_2(&VAR_3->hw.prev_count);
  VAR_3->hw.idx = 0;
  VAR_6 = FUNC_0(VAR_5, VAR_4);
  if (VAR_6)
   FUNC_1(VAR_6, &VAR_3->count);
 }
}
