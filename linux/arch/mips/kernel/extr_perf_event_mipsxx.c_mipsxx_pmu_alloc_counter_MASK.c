
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event {int event_base; } ;
struct cpu_hw_events {int used_mask; } ;
struct TYPE_2__ {int num_counters; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int,unsigned long*) ;

__attribute__((used)) static int FUNC_2(struct cpu_hw_events *VAR_2,
        struct hw_perf_event *VAR_3)
{
 int VAR_4;





 unsigned long VAR_5 = (VAR_3->event_base >> 8) & 0xffff;

 for (VAR_4 = VAR_1.num_counters - 1; VAR_4 >= 0; VAR_4--) {
  if (FUNC_1(VAR_4, &VAR_5) &&
   !FUNC_0(VAR_4, VAR_2->used_mask))
   return VAR_4;
 }

 return -VAR_0;
}
