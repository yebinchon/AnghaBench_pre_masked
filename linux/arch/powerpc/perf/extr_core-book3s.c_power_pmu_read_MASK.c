
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; int period_left; int idx; int prev_count; } ;
struct perf_event {TYPE_1__ hw; int count; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct perf_event*) ;
 int FUNC_3 (scalar_t__,int *) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct perf_event *VAR_1)
{
 s64 VAR_2, VAR_3, VAR_4;

 if (VAR_1->hw.state & VAR_0)
  return;

 if (!VAR_1->hw.idx)
  return;

 if (FUNC_2(VAR_1)) {
  VAR_2 = FUNC_7(VAR_1->hw.idx);
  FUNC_6(&VAR_1->hw.prev_count, VAR_2);
  return;
 }






 do {
  VAR_4 = FUNC_5(&VAR_1->hw.prev_count);
  FUNC_0();
  VAR_2 = FUNC_7(VAR_1->hw.idx);
  VAR_3 = FUNC_1(VAR_4, VAR_2);
  if (!VAR_3)
   return;
 } while (FUNC_4(&VAR_1->hw.prev_count, VAR_4, VAR_2) != VAR_4);

 FUNC_3(VAR_3, &VAR_1->count);
 do {
  VAR_4 = FUNC_5(&VAR_1->hw.period_left);
  VAR_2 = VAR_4 - VAR_3;
  if (VAR_2 < 1)
   VAR_2 = 1;
 } while (FUNC_4(&VAR_1->hw.period_left, VAR_4, VAR_2) != VAR_4);
}
