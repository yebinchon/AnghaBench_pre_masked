
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int idx; int state; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct perf_event*,struct hw_perf_event*,int) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_3, int VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_3->hw;
 int VAR_6 = VAR_5->idx;

 if (!(VAR_5->state & VAR_1)) {
  FUNC_3(0, FUNC_0(VAR_6));
  FUNC_3(FUNC_2(FUNC_1(VAR_6)),
         FUNC_1(VAR_6));
  VAR_5->state |= VAR_1;
 }

 if ((VAR_4 & VAR_0) &&
     !(VAR_3->hw.state & VAR_2)) {
  FUNC_4(VAR_3, &VAR_3->hw, VAR_6);
  VAR_3->hw.state |= VAR_2;
 }
}
