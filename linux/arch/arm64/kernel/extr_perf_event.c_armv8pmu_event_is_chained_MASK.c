
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idx; } ;
struct perf_event {TYPE_1__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct perf_event*) ;

__attribute__((used)) static inline bool FUNC_2(struct perf_event *VAR_1)
{
 int VAR_2 = VAR_1->hw.idx;

 return !FUNC_0(VAR_2 < 0) &&
        FUNC_1(VAR_1) &&
        (VAR_2 != VAR_0);
}
