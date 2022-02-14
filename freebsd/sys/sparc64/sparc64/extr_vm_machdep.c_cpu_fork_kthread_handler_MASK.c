
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_long ;
struct thread {struct pcb* td_pcb; } ;
struct pcb {scalar_t__ pcb_sp; } ;
struct frame {void** fr_local; } ;


 scalar_t__ VAR_0 ;

void
FUNC_0(struct thread *VAR_1, void (*VAR_2)(void *), void *VAR_3)
{
 struct frame *VAR_4;
 struct pcb *VAR_5;

 VAR_5 = VAR_1->td_pcb;
 VAR_4 = (struct frame *)(VAR_5->pcb_sp + VAR_0);
 VAR_4->fr_local[0] = (u_long)VAR_2;
 VAR_4->fr_local[1] = (u_long)VAR_3;
}
