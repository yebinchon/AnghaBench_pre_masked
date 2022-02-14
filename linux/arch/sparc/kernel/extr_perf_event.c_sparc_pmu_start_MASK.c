
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; } ;
struct perf_event {TYPE_1__ hw; } ;
struct cpu_hw_events {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct cpu_hw_events*,struct perf_event*) ;
 int VAR_2 ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (struct perf_event*,TYPE_1__*,int) ;
 int FUNC_4 (struct cpu_hw_events*,TYPE_1__*,int) ;
 struct cpu_hw_events* FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_3, int VAR_4)
{
 struct cpu_hw_events *VAR_5 = FUNC_5(&VAR_2);
 int VAR_6 = FUNC_1(VAR_5, VAR_3);

 if (VAR_4 & VAR_0) {
  FUNC_0(!(VAR_3->hw.state & VAR_1));
  FUNC_3(VAR_3, &VAR_3->hw, VAR_6);
 }

 VAR_3->hw.state = 0;

 FUNC_4(VAR_5, &VAR_3->hw, VAR_6);

 FUNC_2(VAR_3);
}
