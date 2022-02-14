
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_event {TYPE_1__* pmu; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct perf_event *VAR_1)
{
 return VAR_1->pmu->type == VAR_0.type;
}
