
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {scalar_t__ config_base; int config; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct intel_uncore_box {scalar_t__ io_addr; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct intel_uncore_box *VAR_0,
         struct perf_event *VAR_1)
{
 struct hw_perf_event *VAR_2 = &VAR_1->hw;

 if (!VAR_0->io_addr)
  return;

 FUNC_0(VAR_2->config, VAR_0->io_addr + VAR_2->config_base);
}
