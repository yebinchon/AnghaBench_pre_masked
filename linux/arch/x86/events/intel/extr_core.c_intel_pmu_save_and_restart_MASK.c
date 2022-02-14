
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prev_count; int event_base; } ;
struct perf_event {TYPE_1__ hw; } ;


 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct perf_event*) ;
 int FUNC_5 (struct perf_event*) ;

int FUNC_6(struct perf_event *VAR_0)
{
 FUNC_5(VAR_0);






 if (FUNC_2(FUNC_0(VAR_0))) {

  FUNC_3(VAR_0->hw.event_base, 0);
  FUNC_1(&VAR_0->hw.prev_count, 0);
 }
 return FUNC_4(VAR_0);
}
