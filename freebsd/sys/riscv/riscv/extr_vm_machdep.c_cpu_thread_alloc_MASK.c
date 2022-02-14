
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trapframe {int dummy; } ;
struct thread {int td_kstack_pages; struct pcb* td_pcb; struct trapframe* td_frame; scalar_t__ td_kstack; } ;
struct pcb {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

void
FUNC_1(struct thread *VAR_1)
{

 VAR_1->td_pcb = (struct pcb *)(VAR_1->td_kstack +
     VAR_1->td_kstack_pages * VAR_0) - 1;
 VAR_1->td_frame = (struct trapframe *)FUNC_0(
     (caddr_t)VAR_1->td_pcb - 8 - sizeof(struct trapframe));
}
