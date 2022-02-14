
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct perf_event_attr {int dummy; } ;
struct TYPE_2__ {int idx; } ;
struct perf_event {TYPE_1__ hw; struct perf_event_attr attr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct perf_event*) ;
 int FUNC_4 (struct perf_event_attr*) ;
 int FUNC_5 (int ,struct perf_event_attr*) ;

__attribute__((used)) static inline void FUNC_6(struct perf_event *VAR_0)
{
 struct perf_event_attr *VAR_1 = &VAR_0->attr;
 int VAR_2 = VAR_0->hw.idx;
 u32 VAR_3 = FUNC_1(FUNC_0(VAR_2));

 if (FUNC_3(VAR_0))
  VAR_3 |= FUNC_1(FUNC_0(VAR_2 - 1));

 FUNC_5(VAR_3, VAR_1);


 if (!FUNC_4(VAR_1)) {
  FUNC_2(VAR_2);
  if (FUNC_3(VAR_0))
   FUNC_2(VAR_2 - 1);
 }
}
