
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idx; } ;
struct perf_event {TYPE_1__ hw; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct perf_event*) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_0)
{
 FUNC_2(VAR_0);
 if (FUNC_1())
  return;

 FUNC_0(VAR_0->hw.idx);
}
