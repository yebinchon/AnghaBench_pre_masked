
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int state; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct perf_event*) ;

__attribute__((used)) static void FUNC_1(struct perf_event *VAR_3, int VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_3->hw;


 if (!(VAR_5->state & VAR_1))
  VAR_5->state |= VAR_1;


 if ((VAR_4 & VAR_0) && !(VAR_5->state & VAR_2)) {




  FUNC_0(VAR_3);
  VAR_5->state |= VAR_2;
 }
}
