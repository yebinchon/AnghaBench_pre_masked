
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {struct pcb* td_pcb; } ;
struct pcb {int pcb_fpcpu; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (struct thread*) ;

void
FUNC_2(struct thread *VAR_2)
{
 struct pcb *VAR_3;

 VAR_3 = VAR_2->td_pcb;

 FUNC_1(VAR_2);





 VAR_3->pcb_fpcpu = VAR_0;
 FUNC_0(VAR_1, ((void*)0));
}
