
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_context {int dummy; } ;
struct TYPE_2__ {int (* sched_task ) (struct perf_event_context*,int) ;} ;


 int FUNC_0 (struct perf_event_context*,int) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_1(struct perf_event_context *VAR_1, bool VAR_2)
{
 if (VAR_0.sched_task)
  VAR_0.sched_task(VAR_1, VAR_2);
}
