
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ event_base; } ;
struct perf_event {TYPE_1__ hw; } ;
struct intel_uncore_box {scalar_t__ io_addr; } ;


 int FUNC_0 (scalar_t__) ;

u64 FUNC_1(struct intel_uncore_box *VAR_0,
        struct perf_event *VAR_1)
{
 if (!VAR_0->io_addr)
  return 0;

 return FUNC_0(VAR_0->io_addr + VAR_1->hw.event_base);
}
