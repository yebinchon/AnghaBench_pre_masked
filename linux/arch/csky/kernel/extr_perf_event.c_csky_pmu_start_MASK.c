
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int idx; int state; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct perf_event*) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;

__attribute__((used)) static void FUNC_7(struct perf_event *VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 struct hw_perf_event *VAR_7 = &VAR_4->hw;
 int VAR_8 = VAR_7->idx;

 if (FUNC_1(VAR_8 == -1))
  return;

 if (VAR_5 & VAR_2)
  FUNC_1(!(VAR_7->state & VAR_3));

 VAR_7->state = 0;

 FUNC_4(VAR_4);

 FUNC_6(VAR_6);

 FUNC_3(VAR_1, FUNC_0(VAR_8) | FUNC_2(VAR_1));
 FUNC_3(VAR_0, FUNC_0(VAR_8) | FUNC_2(VAR_0));

 FUNC_5(VAR_6);
}
