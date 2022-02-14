
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int idx; int state; int config; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct perf_event*,struct hw_perf_event*,int) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_2, int VAR_3)
{
 struct hw_perf_event *VAR_4 = &VAR_2->hw;
 int VAR_5 = VAR_4->idx;

 if (FUNC_0(VAR_5 == -1))
  return;

 if (VAR_3 & VAR_0) {
  FUNC_0(!(VAR_2->hw.state & VAR_1));
  FUNC_3(VAR_2, VAR_4, VAR_5);
 }

 VAR_4->state = 0;

 FUNC_2(VAR_4->config, FUNC_1(VAR_5));
}
