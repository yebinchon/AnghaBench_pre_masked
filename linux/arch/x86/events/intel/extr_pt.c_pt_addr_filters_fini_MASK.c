
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * addr_filters; } ;
struct perf_event {TYPE_1__ hw; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct perf_event *VAR_0)
{
 FUNC_0(VAR_0->hw.addr_filters);
 VAR_0->hw.addr_filters = ((void*)0);
}
