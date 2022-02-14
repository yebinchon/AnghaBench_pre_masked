
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event_extra {scalar_t__ idx; } ;
struct TYPE_2__ {struct hw_perf_event_extra branch_reg; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_1__ hw; } ;
struct event_constraint {int dummy; } ;
struct cpu_hw_events {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct event_constraint* FUNC_0 (struct cpu_hw_events*,struct perf_event*,struct hw_perf_event_extra*) ;
 int FUNC_1 (struct cpu_hw_events*,struct hw_perf_event_extra*) ;
 struct event_constraint VAR_1 ;

__attribute__((used)) static struct event_constraint *
FUNC_2(struct cpu_hw_events *VAR_2,
         struct perf_event *VAR_3)
{
 struct event_constraint *VAR_4 = ((void*)0), *VAR_5;
 struct hw_perf_event_extra *VAR_6, *VAR_7;

 VAR_6 = &VAR_3->hw.extra_reg;
 if (VAR_6->idx != VAR_0) {
  VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_6);
  if (VAR_4 == &VAR_1)
   return VAR_4;
 }
 VAR_7 = &VAR_3->hw.branch_reg;
 if (VAR_7->idx != VAR_0) {
  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_7);
  if (VAR_5 == &VAR_1) {
   FUNC_1(VAR_2, VAR_6);
   VAR_4 = VAR_5;
  }
 }
 return VAR_4;
}
