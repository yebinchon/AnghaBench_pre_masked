
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ address; scalar_t__ type; } ;
struct TYPE_4__ {int dbcr0; int dbcr1; } ;
struct thread_struct {TYPE_3__ hw_brk; struct perf_event** ptrace_bps; TYPE_2__* regs; TYPE_1__ debug; } ;
struct task_struct {struct thread_struct thread; } ;
struct perf_event {int dummy; } ;
struct TYPE_5__ {int msr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 long VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct task_struct*,int) ;
 int FUNC_2 (struct task_struct*,int) ;
 int FUNC_3 (struct perf_event*) ;

__attribute__((used)) static long FUNC_4(struct task_struct *VAR_4, long VAR_5)
{
 if (VAR_5 != 1)
  return -VAR_1;
 if (VAR_4->thread.hw_brk.address == 0)
  return -VAR_2;

 VAR_4->thread.hw_brk.address = 0;
 VAR_4->thread.hw_brk.type = 0;


 return 0;

}
