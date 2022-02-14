
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {scalar_t__ idx; scalar_t__ last_cpu; scalar_t__ last_tag; } ;
struct cpu_hw_events {scalar_t__* assign; scalar_t__* tags; } ;


 scalar_t__ FUNC_0 () ;

__attribute__((used)) static inline int FUNC_1(struct hw_perf_event *VAR_0,
     struct cpu_hw_events *VAR_1,
     int VAR_2)
{
 return VAR_0->idx == VAR_1->assign[VAR_2] &&
  VAR_0->last_cpu == FUNC_0() &&
  VAR_0->last_tag == VAR_1->tags[VAR_2];
}
