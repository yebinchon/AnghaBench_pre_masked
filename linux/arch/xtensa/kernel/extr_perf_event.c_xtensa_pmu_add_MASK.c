
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xtensa_pmu_events {struct perf_event** event; int used_mask; } ;
struct hw_perf_event {int idx; int state; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct perf_event*) ;
 struct xtensa_pmu_events* FUNC_4 (int *) ;
 int VAR_6 ;
 int FUNC_5 (struct perf_event*,int ) ;

__attribute__((used)) static int FUNC_6(struct perf_event *VAR_7, int VAR_8)
{
 struct xtensa_pmu_events *VAR_9 = FUNC_4(&VAR_6);
 struct hw_perf_event *VAR_10 = &VAR_7->hw;
 int VAR_11 = VAR_10->idx;

 if (FUNC_1(VAR_11, VAR_9->used_mask)) {
  VAR_11 = FUNC_2(VAR_9->used_mask,
       VAR_5);
  if (VAR_11 == VAR_5)
   return -VAR_0;

  FUNC_0(VAR_11, VAR_9->used_mask);
  VAR_10->idx = VAR_11;
 }
 VAR_9->event[VAR_11] = VAR_7;

 VAR_10->state = VAR_4 | VAR_3;

 if (VAR_8 & VAR_2)
  FUNC_5(VAR_7, VAR_1);

 FUNC_3(VAR_7);
 return 0;
}
