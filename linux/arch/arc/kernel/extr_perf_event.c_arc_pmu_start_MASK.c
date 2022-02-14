
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int idx; int state; int config; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct perf_event*) ;
 scalar_t__ FUNC_3 (struct perf_event*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_5, int VAR_6)
{
 struct hw_perf_event *VAR_7 = &VAR_5->hw;
 int VAR_8 = VAR_7->idx;

 if (FUNC_1(VAR_8 == -1))
  return;

 if (VAR_6 & VAR_3)
  FUNC_1(!(VAR_7->state & VAR_4));

 VAR_7->state = 0;

 FUNC_2(VAR_5);


 if (FUNC_3(VAR_5))
  FUNC_5(VAR_2,
         FUNC_4(VAR_2) | FUNC_0(VAR_8));


 FUNC_5(VAR_1, VAR_8);
 FUNC_5(VAR_0, VAR_7->config);
}
