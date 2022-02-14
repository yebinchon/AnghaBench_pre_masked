
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct thread {TYPE_3__* td_pcb; TYPE_2__* td_proc; } ;
typedef int * pmap_t ;
typedef int jmp_buf ;
struct TYPE_6__ {int * pcb_onfault; } ;
struct TYPE_5__ {TYPE_1__* p_vmspace; } ;
struct TYPE_4__ {int vm_pmap; } ;


 struct thread* VAR_0 ;
 scalar_t__ FUNC_0 (int *,void*,void**,int,int *) ;
 scalar_t__ FUNC_1 (int ) ;

int
FUNC_2(volatile uint32_t *VAR_1, uint32_t VAR_2, uint32_t *VAR_3,
    uint32_t VAR_4)
{
 struct thread *VAR_5;
 pmap_t VAR_6;
 jmp_buf VAR_7;
 uint32_t *VAR_8, VAR_9;
 int VAR_10;

 VAR_5 = VAR_0;
 VAR_6 = &VAR_5->td_proc->p_vmspace->vm_pmap;

 VAR_5->td_pcb->pcb_onfault = &VAR_7;
 if (FUNC_1(VAR_7)) {
  VAR_5->td_pcb->pcb_onfault = ((void*)0);
  return (-1);
 }

 if (FUNC_0(VAR_6, (void *)(uintptr_t)VAR_1, (void **)&VAR_8,
     sizeof(*VAR_8), ((void*)0))) {
  VAR_5->td_pcb->pcb_onfault = ((void*)0);
  return (-1);
 }

 VAR_10 = 0;
 __asm __volatile (
  "lwarx %0, 0, %3\n\t"
  "cmplw %4, %0\n\t"
  "bne 1f\n\t"
  "stwcx. %5, 0, %3\n\t"
  "bne- 2f\n\t"
  "b 3f\n\t"
  "1:\n\t"
  "stwcx. %0, 0, %3\n\t"
  "2:li %2, 1\n\t"
  "3:\n\t"
  : "=&r" (VAR_9), "=m" (*VAR_8), "+&r" (VAR_10)
  : "r" (VAR_8), "r" (VAR_2), "r" (VAR_4), "m" (*VAR_8)
  : "cr0", "memory");

 VAR_5->td_pcb->pcb_onfault = ((void*)0);

 *VAR_3 = VAR_9;
 return (VAR_10);
}
