
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {TYPE_1__* td_frame; struct pcb* td_pcb; } ;
struct TYPE_4__ {int ** vr; } ;
struct pcb {TYPE_2__ pcb_vec; } ;
struct TYPE_3__ {int * fixreg; } ;


 struct thread* FUNC_0 (int ) ;
 int FUNC_1 (struct thread*) ;
 int VAR_0 ;

void
FUNC_2(struct thread *VAR_1)
{
 struct thread *VAR_2;
 struct pcb *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_1 == VAR_2) {
  FUNC_1(VAR_1);
 }

 VAR_3 = VAR_1->td_pcb;

 for (VAR_4 = 0; VAR_4 < 32; VAR_4++) {
  VAR_3->pcb_vec.vr[VAR_4][1] =
      VAR_1->td_frame ? VAR_1->td_frame->fixreg[VAR_4] : 0;
 }
}
