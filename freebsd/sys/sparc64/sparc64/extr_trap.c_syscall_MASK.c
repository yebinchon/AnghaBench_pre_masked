
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trapframe {int tf_tpc; } ;
struct thread {TYPE_1__* td_pcb; int * td_proc; struct trapframe* td_frame; } ;
struct TYPE_2__ {int pcb_tpc; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct trapframe*) ;
 struct thread* VAR_0 ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;

void
FUNC_4(struct trapframe *VAR_1)
{
 struct thread *VAR_2;

 VAR_2 = VAR_0;
 VAR_2->td_frame = VAR_1;

 FUNC_0(VAR_2 != ((void*)0), ("trap: curthread NULL"));
 FUNC_0(VAR_2->td_proc != ((void*)0), ("trap: curproc NULL"));





 VAR_2->td_pcb->pcb_tpc = VAR_1->tf_tpc;
 FUNC_1(VAR_1);

 FUNC_2(VAR_2);
 FUNC_3(VAR_2);
}
