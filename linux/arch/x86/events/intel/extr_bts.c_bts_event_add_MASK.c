
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event {int state; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct cpu_hw_events {int active_mask; } ;
struct TYPE_2__ {scalar_t__ event; } ;
struct bts_ctx {TYPE_1__ handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct perf_event*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 void* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct perf_event *VAR_7, int VAR_8)
{
 struct bts_ctx *VAR_9 = FUNC_2(&VAR_5);
 struct cpu_hw_events *VAR_10 = FUNC_2(&VAR_6);
 struct hw_perf_event *VAR_11 = &VAR_7->hw;

 VAR_7->hw.state = VAR_4;

 if (FUNC_1(VAR_2, VAR_10->active_mask))
  return -VAR_0;

 if (VAR_9->handle.event)
  return -VAR_0;

 if (VAR_8 & VAR_3) {
  FUNC_0(VAR_7, 0);
  if (VAR_11->state & VAR_4)
   return -VAR_1;
 }

 return 0;
}
