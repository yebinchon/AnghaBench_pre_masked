
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hw_perf_event {scalar_t__ idx; scalar_t__ config_base; int config; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct perf_event *VAR_1)
{
 struct hw_perf_event *VAR_2 = &VAR_1->hw;
 u64 VAR_3;

 VAR_3 = VAR_2->config;
 VAR_3 |= VAR_0;

 (void)FUNC_0(VAR_2->config_base + VAR_2->idx, VAR_3);
}
