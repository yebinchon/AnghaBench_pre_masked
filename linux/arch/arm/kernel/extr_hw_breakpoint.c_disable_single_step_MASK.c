
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_event {int dummy; } ;
struct TYPE_3__ {scalar_t__ enabled; } ;
struct TYPE_4__ {TYPE_1__ step_ctrl; } ;


 int FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;
 TYPE_2__* FUNC_2 (struct perf_event*) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_0)
{
 FUNC_1(VAR_0);
 FUNC_2(VAR_0)->step_ctrl.enabled = 0;
 FUNC_0(VAR_0);
}
