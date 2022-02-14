
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int event_base; } ;
struct perf_event {TYPE_1__ hw; } ;
struct intel_uncore_box {int dummy; } ;


 int FUNC_0 (int ,int ) ;

u64 FUNC_1(struct intel_uncore_box *VAR_0, struct perf_event *VAR_1)
{
 u64 VAR_2;

 FUNC_0(VAR_1->hw.event_base, VAR_2);

 return VAR_2;
}
