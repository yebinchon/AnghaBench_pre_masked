
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int debugreg6; } ;
struct task_struct {TYPE_1__ thread; } ;
struct pt_regs {int dummy; } ;
struct perf_sample_data {int dummy; } ;
struct perf_event {int dummy; } ;
struct TYPE_4__ {scalar_t__ enabled; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 struct task_struct* VAR_2 ;

__attribute__((used)) static void FUNC_0(struct perf_event *VAR_3,
  struct perf_sample_data *VAR_4, struct pt_regs *VAR_5)
{
 struct task_struct *VAR_6 = VAR_2;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
  if (VAR_1[VAR_7].enabled)
   VAR_6->thread.debugreg6 |= (VAR_0 << VAR_7);
}
