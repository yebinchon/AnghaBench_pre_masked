
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct hw_perf_event {int sample_period; int prev_count; int event_base_rdpmc; } ;
struct perf_event {int count; struct hw_perf_event hw; } ;
typedef int s64 ;
struct TYPE_4__ {int enabled; } ;
struct TYPE_3__ {int cntval_bits; } ;


 int FUNC_0 (int) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct perf_event*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int
FUNC_7(struct perf_event *VAR_2, int VAR_3)
{
 struct hw_perf_event *VAR_4 = &VAR_2->hw;
 int VAR_5 = 64 - VAR_1.cntval_bits;
 u64 VAR_6 = VAR_4->sample_period;
 u64 VAR_7, VAR_8;
 s64 VAR_9, VAR_10;

 FUNC_0(!VAR_6);




 FUNC_0(FUNC_6(VAR_0.enabled));

 VAR_7 = FUNC_2(&VAR_4->prev_count);
 FUNC_5(VAR_4->event_base_rdpmc, VAR_8);
 FUNC_3(&VAR_4->prev_count, VAR_8);
 VAR_9 = ((s64)(VAR_8 << VAR_5) >> VAR_5);
 VAR_10 = ((s64)(VAR_7 << VAR_5) >> VAR_5);
 FUNC_1(VAR_9 - VAR_10 + VAR_3 * VAR_6, &VAR_2->count);

 FUNC_4(VAR_2);

 return 0;
}
