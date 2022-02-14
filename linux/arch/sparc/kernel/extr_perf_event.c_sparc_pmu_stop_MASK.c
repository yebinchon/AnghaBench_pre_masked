
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
 int VAR_2 ;
 int FUNC_0 (struct cpu_hw_events*,struct perf_event*) ;
 int VAR_3 ;
 int FUNC_1 (struct perf_event*,TYPE_1__*,int) ;
 int FUNC_2 (struct cpu_hw_events*,TYPE_1__*,int) ;
 struct cpu_hw_events* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_4, int VAR_5)
{
 struct cpu_hw_events *VAR_6 = FUNC_3(&VAR_3);
 int VAR_7 = FUNC_0(VAR_6, VAR_4);

 if (!(VAR_4->hw.state & VAR_1)) {
  FUNC_2(VAR_6, &VAR_4->hw, VAR_7);
  VAR_4->hw.state |= VAR_1;
 }

 if (!(VAR_4->hw.state & VAR_2) && (VAR_5 & VAR_0)) {
  FUNC_1(VAR_4, &VAR_4->hw, VAR_7);
  VAR_4->hw.state |= VAR_2;
 }
}
