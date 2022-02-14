
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int idx; int state; scalar_t__ event_base_rdpmc; scalar_t__ event_base; scalar_t__ config_base; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct amd_uncore {int num_counters; scalar_t__ rdpmc_base; scalar_t__ msr_base; struct perf_event** events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct perf_event*,int ) ;
 int * FUNC_1 (struct perf_event**,int *,struct perf_event*) ;
 struct amd_uncore* FUNC_2 (struct perf_event*) ;

__attribute__((used)) static int FUNC_3(struct perf_event *VAR_5, int VAR_6)
{
 int VAR_7;
 struct amd_uncore *VAR_8 = FUNC_2(VAR_5);
 struct hw_perf_event *VAR_9 = &VAR_5->hw;


 if (VAR_9->idx != -1 && VAR_8->events[VAR_9->idx] == VAR_5)
  goto out;

 for (VAR_7 = 0; VAR_7 < VAR_8->num_counters; VAR_7++) {
  if (VAR_8->events[VAR_7] == VAR_5) {
   VAR_9->idx = VAR_7;
   goto out;
  }
 }


 VAR_9->idx = -1;
 for (VAR_7 = 0; VAR_7 < VAR_8->num_counters; VAR_7++) {
  if (FUNC_1(&VAR_8->events[VAR_7], ((void*)0), VAR_5) == ((void*)0)) {
   VAR_9->idx = VAR_7;
   break;
  }
 }

out:
 if (VAR_9->idx == -1)
  return -VAR_0;

 VAR_9->config_base = VAR_8->msr_base + (2 * VAR_9->idx);
 VAR_9->event_base = VAR_8->msr_base + 1 + (2 * VAR_9->idx);
 VAR_9->event_base_rdpmc = VAR_8->rdpmc_base + VAR_9->idx;
 VAR_9->state = VAR_4 | VAR_3;

 if (VAR_6 & VAR_2)
  FUNC_0(VAR_5, VAR_1);

 return 0;
}
