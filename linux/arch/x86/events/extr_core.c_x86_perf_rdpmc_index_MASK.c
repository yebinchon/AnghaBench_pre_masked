
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int event_base_rdpmc; } ;
struct perf_event {TYPE_1__ hw; } ;


 int FUNC_0 () ;

int FUNC_1(struct perf_event *VAR_0)
{
 FUNC_0();

 return VAR_0->hw.event_base_rdpmc;
}
