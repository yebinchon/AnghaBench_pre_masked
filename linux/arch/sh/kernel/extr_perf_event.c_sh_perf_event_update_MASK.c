
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct perf_event {int count; } ;
struct hw_perf_event {int prev_count; } ;
typedef int s64 ;
struct TYPE_2__ {int (* read ) (int) ;} ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_1,
       struct hw_perf_event *VAR_2, int VAR_3)
{
 u64 VAR_4, VAR_5;
 s64 VAR_6;
 int VAR_7 = 0;
again:
 VAR_4 = FUNC_2(&VAR_2->prev_count);
 VAR_5 = VAR_0->read(VAR_3);

 if (FUNC_1(&VAR_2->prev_count, VAR_4,
        VAR_5) != VAR_4)
  goto again;
 VAR_6 = (VAR_5 << VAR_7) - (VAR_4 << VAR_7);
 VAR_6 >>= VAR_7;

 FUNC_0(VAR_6, &VAR_1->count);
}
