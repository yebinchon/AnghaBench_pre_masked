
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int config1; int config; } ;
struct hw_perf_event {int conf1; int conf; } ;
struct perf_event {int attach_state; scalar_t__ cpu; TYPE_1__ attr; TYPE_2__* pmu; struct hw_perf_event hw; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct perf_event*) ;

__attribute__((used)) static int FUNC_1(struct perf_event *VAR_3)
{
 struct hw_perf_event *VAR_4 = &VAR_3->hw;


 if (VAR_3->attr.type != VAR_3->pmu->type)
  return -VAR_1;






 if (FUNC_0(VAR_3) || VAR_3->attach_state & VAR_2)
  return -VAR_0;

 if (VAR_3->cpu < 0)
  return -VAR_0;


 VAR_4->conf = VAR_3->attr.config;
 VAR_4->conf1 = VAR_3->attr.config1;

 return 0;
}
