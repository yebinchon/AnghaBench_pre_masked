
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int core_avg_perf; } ;
struct TYPE_3__ {int max_pstate_physical; } ;
struct cpudata {TYPE_2__ sample; TYPE_1__ pstate; } ;
typedef int int32_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline int32_t FUNC_1(struct cpudata *VAR_0)
{
 return FUNC_0(VAR_0->pstate.max_pstate_physical,
     VAR_0->sample.core_avg_perf);
}
