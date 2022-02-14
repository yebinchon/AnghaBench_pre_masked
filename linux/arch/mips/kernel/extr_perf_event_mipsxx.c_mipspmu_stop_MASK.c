
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int state; int idx; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct perf_event*,struct hw_perf_event*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_2, int VAR_3)
{
 struct hw_perf_event *VAR_4 = &VAR_2->hw;

 if (!(VAR_4->state & VAR_0)) {

  FUNC_2(VAR_4->idx);
  FUNC_0();
  FUNC_1(VAR_2, VAR_4, VAR_4->idx);
  VAR_4->state |= VAR_0 | VAR_1;
 }
}
