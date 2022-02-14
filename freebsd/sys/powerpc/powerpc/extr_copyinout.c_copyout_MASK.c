
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread {TYPE_3__* td_pcb; TYPE_2__* td_proc; } ;
typedef int * pmap_t ;
typedef int jmp_buf ;
struct TYPE_6__ {int * pcb_onfault; } ;
struct TYPE_5__ {TYPE_1__* p_vmspace; } ;
struct TYPE_4__ {int vm_pmap; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*,size_t) ;
 struct thread* VAR_1 ;
 scalar_t__ FUNC_1 (int *,char*,void**,size_t,size_t*) ;
 scalar_t__ FUNC_2 (int ) ;

int
FUNC_3(const void *VAR_2, void *VAR_3, size_t VAR_4)
{
 struct thread *VAR_5;
 pmap_t VAR_6;
 jmp_buf VAR_7;
 const char *VAR_8;
 char *VAR_9, *VAR_10;
 size_t VAR_11;

 VAR_5 = VAR_1;
 VAR_6 = &VAR_5->td_proc->p_vmspace->vm_pmap;

 VAR_5->td_pcb->pcb_onfault = &VAR_7;
 if (FUNC_2(VAR_7)) {
  VAR_5->td_pcb->pcb_onfault = ((void*)0);
  return (VAR_0);
 }

 VAR_8 = VAR_2;
 VAR_9 = VAR_3;

 while (VAR_4 > 0) {
  if (FUNC_1(VAR_6, VAR_9, (void **)&VAR_10, VAR_4, &VAR_11)) {
   VAR_5->td_pcb->pcb_onfault = ((void*)0);
   return (VAR_0);
  }

  FUNC_0(VAR_8, VAR_10, VAR_11);

  VAR_9 += VAR_11;
  VAR_8 += VAR_11;
  VAR_4 -= VAR_11;
 }

 VAR_5->td_pcb->pcb_onfault = ((void*)0);
 return (0);
}
