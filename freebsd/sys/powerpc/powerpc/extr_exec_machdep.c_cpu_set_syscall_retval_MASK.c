
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {scalar_t__* fixreg; int cr; int srr0; } ;
struct thread {int* td_retval; struct trapframe* td_frame; struct proc* td_proc; } ;
struct proc {int dummy; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct proc*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct proc*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void
FUNC_2(struct thread *VAR_6, int VAR_7)
{
 struct proc *VAR_8;
 struct trapframe *VAR_9;
 int VAR_10;

 if (VAR_7 == VAR_0)
  return;

 VAR_8 = VAR_6->td_proc;
 VAR_9 = VAR_6->td_frame;

 if (VAR_9->fixreg[0] == VAR_3 &&
     (FUNC_1(VAR_8, VAR_2))) {
  int VAR_11 = VAR_9->fixreg[VAR_1 + 1];
  VAR_10 = (



      VAR_11 != VAR_5) ? 1 : 0;
 } else
  VAR_10 = 0;

 switch (VAR_7) {
 case 0:
  if (VAR_10) {



   VAR_9->fixreg[VAR_1] = 0;
   VAR_9->fixreg[VAR_1 + 1] = VAR_6->td_retval[0];
  } else {
   VAR_9->fixreg[VAR_1] = VAR_6->td_retval[0];
   VAR_9->fixreg[VAR_1 + 1] = VAR_6->td_retval[1];
  }
  VAR_9->cr &= ~0x10000000;
  break;
 case 128:



  VAR_9->srr0 -= 4;
  break;
 default:
  VAR_9->fixreg[VAR_1] = FUNC_0(VAR_8, VAR_7);
  VAR_9->cr |= 0x10000000;
  break;
 }
}
