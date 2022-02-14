
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int dummy; } ;
struct thread {int td_kstack; int td_kstack_pages; struct trapframe* td_frame; struct pcb* td_pcb; } ;
struct pcb {int dummy; } ;


 int VAR_0 ;

void
FUNC_0(struct thread *VAR_1)
{
 struct pcb *VAR_2;

 VAR_2 = (struct pcb *)((VAR_1->td_kstack + VAR_1->td_kstack_pages * VAR_0 -
     sizeof(struct pcb)) & ~0x2fUL);
 VAR_1->td_pcb = VAR_2;
 VAR_1->td_frame = (struct trapframe *)VAR_2 - 1;
}
