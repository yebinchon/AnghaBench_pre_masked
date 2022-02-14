
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct user {int* u_debugreg; } ;
struct thread_struct {int debugreg6; struct perf_event** ptrace_bps; } ;
struct TYPE_3__ {int bp_addr; int disabled; } ;
struct perf_event {TYPE_1__ attr; } ;
struct arch_hw_breakpoint {int type; int len; } ;
struct TYPE_4__ {struct thread_struct thread; } ;


 int VAR_0 ;
 struct arch_hw_breakpoint* FUNC_0 (struct perf_event*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int,int ,int ) ;

void FUNC_2(struct user *VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;
 struct perf_event *VAR_5;
 struct arch_hw_breakpoint *VAR_6;
 struct thread_struct *VAR_7 = &VAR_1->thread;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_5 = VAR_7->ptrace_bps[VAR_3];

  if (VAR_5 && !VAR_5->attr.disabled) {
   VAR_2->u_debugreg[VAR_3] = VAR_5->attr.bp_addr;
   VAR_6 = FUNC_0(VAR_5);
   VAR_4 |= FUNC_1(VAR_3, VAR_6->len, VAR_6->type);
  } else {
   VAR_2->u_debugreg[VAR_3] = 0;
  }
 }

 VAR_2->u_debugreg[4] = 0;
 VAR_2->u_debugreg[5] = 0;
 VAR_2->u_debugreg[6] = VAR_1->thread.debugreg6;

 VAR_2->u_debugreg[7] = VAR_4;
}
