
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {scalar_t__ idx; scalar_t__ event_base_rdpmc; scalar_t__ event_base; scalar_t__ config_base; scalar_t__ last_tag; int last_cpu; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct cpu_hw_events {scalar_t__* assign; scalar_t__* tags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(struct perf_event *VAR_4,
    struct cpu_hw_events *VAR_5, int VAR_6)
{
 struct hw_perf_event *VAR_7 = &VAR_4->hw;

 VAR_7->idx = VAR_5->assign[VAR_6];
 VAR_7->last_cpu = FUNC_0();
 VAR_7->last_tag = ++VAR_5->tags[VAR_6];

 if (VAR_7->idx == VAR_1) {
  VAR_7->config_base = 0;
  VAR_7->event_base = 0;
 } else if (VAR_7->idx >= VAR_0) {
  VAR_7->config_base = VAR_3;
  VAR_7->event_base = VAR_2 + (VAR_7->idx - VAR_0);
  VAR_7->event_base_rdpmc = (VAR_7->idx - VAR_0) | 1<<30;
 } else {
  VAR_7->config_base = FUNC_1(VAR_7->idx);
  VAR_7->event_base = FUNC_2(VAR_7->idx);
  VAR_7->event_base_rdpmc = FUNC_3(VAR_7->idx);
 }
}
