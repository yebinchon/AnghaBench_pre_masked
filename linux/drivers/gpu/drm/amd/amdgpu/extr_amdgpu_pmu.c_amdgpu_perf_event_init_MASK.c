
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int config; } ;
struct hw_perf_event {int conf; } ;
struct perf_event {TYPE_2__ attr; TYPE_1__* pmu; struct hw_perf_event hw; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct perf_event *VAR_1)
{
 struct hw_perf_event *VAR_2 = &VAR_1->hw;


 if (VAR_1->attr.type != VAR_1->pmu->type)
  return -VAR_0;


 VAR_2->conf = VAR_1->attr.config;

 return 0;
}
