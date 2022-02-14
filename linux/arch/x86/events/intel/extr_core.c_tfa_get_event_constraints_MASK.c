
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;
struct event_constraint {unsigned long long idxmsk64; int weight; int idxmsk; } ;
struct cpu_hw_events {int dummy; } ;


 int VAR_0 ;
 struct event_constraint* FUNC_0 (struct cpu_hw_events*,struct event_constraint*,int) ;
 struct event_constraint* FUNC_1 (struct cpu_hw_events*,int,struct perf_event*) ;
 scalar_t__ FUNC_2 (int,int ) ;

__attribute__((used)) static struct event_constraint *
FUNC_3(struct cpu_hw_events *VAR_1, int VAR_2,
     struct perf_event *VAR_3)
{
 struct event_constraint *VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);




 if (!VAR_0 && FUNC_2(3, VAR_4->idxmsk)) {
  VAR_4 = FUNC_0(VAR_1, VAR_4, VAR_2);
  VAR_4->idxmsk64 &= ~(1ULL << 3);
  VAR_4->weight--;
 }

 return VAR_4;
}
