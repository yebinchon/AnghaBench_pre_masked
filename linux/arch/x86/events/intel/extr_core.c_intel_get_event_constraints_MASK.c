
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;
struct event_constraint {int flags; int weight; int idxmsk; } ;
struct cpu_hw_events {scalar_t__ excl_cntrs; struct event_constraint** event_constraint; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 struct event_constraint* FUNC_1 (struct cpu_hw_events*,int,struct perf_event*) ;
 int FUNC_2 (int ,int ,int ) ;
 struct event_constraint* FUNC_3 (struct cpu_hw_events*,struct perf_event*,int,struct event_constraint*) ;

__attribute__((used)) static struct event_constraint *
FUNC_4(struct cpu_hw_events *VAR_2, int VAR_3,
       struct perf_event *VAR_4)
{
 struct event_constraint *VAR_5, *VAR_6;

 VAR_5 = VAR_2->event_constraint[VAR_3];






 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_5) {
         FUNC_0(!(VAR_5->flags & VAR_0));
  FUNC_2(VAR_5->idxmsk, VAR_6->idxmsk, VAR_1);
  VAR_5->weight = VAR_6->weight;
  VAR_6 = VAR_5;
 }

 if (VAR_2->excl_cntrs)
  return FUNC_3(VAR_2, VAR_4, VAR_3, VAR_6);

 return VAR_6;
}
