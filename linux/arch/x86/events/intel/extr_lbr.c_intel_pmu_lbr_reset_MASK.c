
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cpu_hw_events {scalar_t__ last_log_id; int * last_task_ctx; } ;
struct TYPE_3__ {scalar_t__ lbr_format; } ;
struct TYPE_4__ {TYPE_1__ intel_cap; int lbr_nr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct cpu_hw_events* FUNC_2 (int *) ;
 TYPE_2__ VAR_2 ;

void FUNC_3(void)
{
 struct cpu_hw_events *VAR_3 = FUNC_2(&VAR_1);

 if (!VAR_2.lbr_nr)
  return;

 if (VAR_2.intel_cap.lbr_format == VAR_0)
  FUNC_0();
 else
  FUNC_1();

 VAR_3->last_task_ctx = ((void*)0);
 VAR_3->last_log_id = 0;
}
