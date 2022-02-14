
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct perf_event_attr {int dummy; } ;
struct hw_perf_event {int idx; } ;
struct perf_event {struct perf_event_attr attr; struct hw_perf_event hw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct perf_event*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct perf_event_attr*) ;

__attribute__((used)) static inline void FUNC_6(struct perf_event *VAR_0)
{
 struct hw_perf_event *VAR_1 = &VAR_0->hw;
 struct perf_event_attr *VAR_2 = &VAR_0->attr;
 int VAR_3 = VAR_1->idx;
 u32 VAR_4 = FUNC_1(FUNC_0(VAR_3));

 if (FUNC_3(VAR_0))
  VAR_4 |= FUNC_1(FUNC_0(VAR_3 - 1));

 FUNC_4(VAR_4);


 if (!FUNC_5(VAR_2)) {
  if (FUNC_3(VAR_0))
   FUNC_2(VAR_3 - 1);
  FUNC_2(VAR_3);
 }
}
