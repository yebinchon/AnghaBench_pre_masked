
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hw_perf_event {int config; int config_base; scalar_t__ state; int prev_count; int event_base; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_2, int VAR_3)
{
 struct hw_perf_event *VAR_4 = &VAR_2->hw;

 if (VAR_3 & VAR_1)
  FUNC_2(VAR_4->event_base, (u64)FUNC_0(&VAR_4->prev_count));

 VAR_4->state = 0;
 FUNC_2(VAR_4->config_base, (VAR_4->config | VAR_0));
 FUNC_1(VAR_2);
}
