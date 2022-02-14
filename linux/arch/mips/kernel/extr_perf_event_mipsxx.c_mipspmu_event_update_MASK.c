
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct perf_event {int count; } ;
struct hw_perf_event {int period_left; int prev_count; } ;
struct TYPE_2__ {scalar_t__ (* read_counter ) (int) ;} ;


 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__,int *) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_1,
     struct hw_perf_event *VAR_2,
     int VAR_3)
{
 u64 VAR_4, VAR_5;
 u64 VAR_6;

again:
 VAR_4 = FUNC_2(&VAR_2->prev_count);
 VAR_5 = VAR_0.read_counter(VAR_3);

 if (FUNC_1(&VAR_2->prev_count, VAR_4,
    VAR_5) != VAR_4)
  goto again;

 VAR_6 = VAR_5 - VAR_4;

 FUNC_0(VAR_6, &VAR_1->count);
 FUNC_3(VAR_6, &VAR_2->period_left);
}
