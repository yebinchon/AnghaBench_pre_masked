
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
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,int *) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_1)
{
 s64 VAR_2, VAR_3, VAR_4;

 if (VAR_1->hw.state & VAR_0)
  return;






 do {
  VAR_4 = FUNC_3(&VAR_1->hw.prev_count);
  FUNC_0();
  VAR_2 = FUNC_5(VAR_1->hw.idx);
 } while (FUNC_2(&VAR_1->hw.prev_count, VAR_4, VAR_2) != VAR_4);


 VAR_3 = (VAR_2 - VAR_4) & 0xfffffffful;
 FUNC_1(VAR_3, &VAR_1->count);
 FUNC_4(VAR_3, &VAR_1->hw.period_left);
}
