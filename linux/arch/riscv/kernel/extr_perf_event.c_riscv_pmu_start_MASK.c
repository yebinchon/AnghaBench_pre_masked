
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int state; int idx; int prev_count; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_3, int VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_3->hw;

 if (FUNC_0(!(VAR_3->hw.state & VAR_1)))
  return;

 if (VAR_4 & VAR_0) {
  FUNC_0(!(VAR_3->hw.state & VAR_2));





 }

 VAR_5->state = 0;
 FUNC_2(VAR_3);






 FUNC_1(&VAR_5->prev_count, FUNC_3(VAR_5->idx));
}
