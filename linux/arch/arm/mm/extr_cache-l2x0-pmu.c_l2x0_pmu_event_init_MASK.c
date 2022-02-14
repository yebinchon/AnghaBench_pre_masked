
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int config; } ;
struct hw_perf_event {int config_base; } ;
struct perf_event {int attach_state; scalar_t__ cpu; TYPE_1__ attr; struct hw_perf_event hw; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct perf_event*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 (struct perf_event*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct perf_event *VAR_6)
{
 struct hw_perf_event *VAR_7 = &VAR_6->hw;

 if (VAR_6->attr.type != VAR_4->type)
  return -VAR_1;

 if (FUNC_1(VAR_6) ||
     VAR_6->attach_state & VAR_3)
  return -VAR_0;

 if (VAR_6->cpu < 0)
  return -VAR_0;

 if (VAR_6->attr.config & ~VAR_2)
  return -VAR_0;

 VAR_7->config_base = VAR_6->attr.config;

 if (!FUNC_2(VAR_6))
  return -VAR_0;

 VAR_6->cpu = FUNC_0(&VAR_5);

 return 0;
}
