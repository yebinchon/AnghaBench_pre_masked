
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int idx; int state; } ;
struct perf_event {int pmu; struct hw_perf_event hw; } ;
struct cpu_hw_events {struct perf_event** events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct perf_event*,int ) ;
 int FUNC_1 (struct cpu_hw_events*,struct hw_perf_event*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct cpu_hw_events* FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct perf_event *VAR_5, int VAR_6)
{
 struct cpu_hw_events *VAR_7 = FUNC_6(&VAR_4);
 struct hw_perf_event *VAR_8 = &VAR_5->hw;
 int VAR_9;
 int VAR_10 = 0;

 FUNC_4(VAR_5->pmu);


 VAR_9 = FUNC_1(VAR_7, VAR_8);
 if (VAR_9 < 0) {
  VAR_10 = VAR_9;
  goto out;
 }





 VAR_5->hw.idx = VAR_9;
 FUNC_2(VAR_9);
 VAR_7->events[VAR_9] = VAR_5;

 VAR_8->state = VAR_2 | VAR_3;
 if (VAR_6 & VAR_1)
  FUNC_0(VAR_5, VAR_0);


 FUNC_3(VAR_5);

out:
 FUNC_5(VAR_5->pmu);
 return VAR_10;
}
