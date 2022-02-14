
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct perf_event {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct perf_event*,TYPE_1__*) ;
 int FUNC_1 (struct perf_event*) ;

__attribute__((used)) static void FUNC_2(struct perf_event *VAR_3, int VAR_4)
{
 if (!(VAR_3->hw.state & VAR_1)) {
  FUNC_1(VAR_3);
  VAR_3->hw.state |= VAR_1;
 }

 if ((VAR_4 & VAR_0) &&
     !(VAR_3->hw.state & VAR_2)) {
  FUNC_0(VAR_3, &VAR_3->hw);
  VAR_3->hw.state |= VAR_2;
 }
}
