
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct hw_perf_event {int idx; int period_left; int prev_count; int event_base_rdpmc; } ;
struct perf_event {int count; struct hw_perf_event hw; } ;
struct TYPE_2__ {int cntval_bits; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int ,int) ;
 TYPE_1__ VAR_1 ;

u64 FUNC_5(struct perf_event *VAR_2)
{
 struct hw_perf_event *VAR_3 = &VAR_2->hw;
 int VAR_4 = 64 - VAR_1.cntval_bits;
 u64 VAR_5, VAR_6;
 int VAR_7 = VAR_3->idx;
 u64 VAR_8;

 if (VAR_7 == VAR_0)
  return 0;
again:
 VAR_5 = FUNC_2(&VAR_3->prev_count);
 FUNC_4(VAR_3->event_base_rdpmc, VAR_6);

 if (FUNC_1(&VAR_3->prev_count, VAR_5,
     VAR_6) != VAR_5)
  goto again;
 VAR_8 = (VAR_6 << VAR_4) - (VAR_5 << VAR_4);
 VAR_8 >>= VAR_4;

 FUNC_0(VAR_8, &VAR_2->count);
 FUNC_3(VAR_8, &VAR_3->period_left);

 return VAR_6;
}
