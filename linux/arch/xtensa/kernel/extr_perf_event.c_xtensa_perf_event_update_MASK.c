
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int idx; } ;
struct perf_event {int count; TYPE_1__ hw; } ;
struct hw_perf_event {int period_left; int prev_count; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int *) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_1,
         struct hw_perf_event *VAR_2, int VAR_3)
{
 uint64_t VAR_4, VAR_5;
 int64_t VAR_6;

 do {
  VAR_4 = FUNC_2(&VAR_2->prev_count);
  VAR_5 = FUNC_4(VAR_1->hw.idx);
 } while (FUNC_1(&VAR_2->prev_count, VAR_4,
     VAR_5) != VAR_4);

 VAR_6 = (VAR_5 - VAR_4) & VAR_0;

 FUNC_0(VAR_6, &VAR_1->count);
 FUNC_3(VAR_6, &VAR_2->period_left);
}
