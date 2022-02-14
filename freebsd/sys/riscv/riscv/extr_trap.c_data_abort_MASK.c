
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_offset_t ;
typedef scalar_t__ uint64_t ;
struct vm_map {int pmap; } ;
struct trapframe {scalar_t__ tf_stval; scalar_t__ tf_scause; int* tf_a; scalar_t__ tf_sepc; } ;
struct thread {scalar_t__ td_critnest; scalar_t__ td_intr_nesting_level; struct proc* td_proc; struct pcb* td_pcb; } ;
struct proc {TYPE_1__* p_vmspace; } ;
struct pcb {scalar_t__ pcb_onfault; } ;
struct TYPE_2__ {struct vm_map vm_map; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int,int *,char*) ;
 int FUNC_1 (struct thread*,int,int,void*) ;
 struct thread* VAR_11 ;
 int FUNC_2 (struct trapframe*) ;
 scalar_t__ VAR_12 ;
 int FUNC_3 () ;
 struct vm_map* VAR_13 ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct thread*,struct trapframe*) ;
 int FUNC_8 (struct vm_map*,int ,int ,int ,int*,int*) ;

__attribute__((used)) static void
FUNC_9(struct trapframe *VAR_14, int VAR_15)
{
 struct vm_map *VAR_16;
 uint64_t VAR_17;
 struct thread *VAR_18;
 struct pcb *VAR_19;
 vm_prot_t VAR_20;
 vm_offset_t VAR_21;
 struct proc *VAR_22;
 int VAR_23, VAR_24, VAR_25;
 VAR_18 = VAR_11;
 VAR_22 = VAR_18->td_proc;
 VAR_19 = VAR_18->td_pcb;
 VAR_17 = VAR_14->tf_stval;

 if (VAR_18->td_critnest != 0 || VAR_18->td_intr_nesting_level != 0 ||
     FUNC_0(VAR_10 | VAR_9, ((void*)0),
     "Kernel page fault") != 0)
  goto fatal;

 if (VAR_15)
  VAR_16 = &VAR_18->td_proc->p_vmspace->vm_map;
 else if (VAR_17 >= VAR_5)
  VAR_16 = VAR_13;
 else {
  if (VAR_19->pcb_onfault == 0)
   goto fatal;
  VAR_16 = &VAR_18->td_proc->p_vmspace->vm_map;
 }

 VAR_21 = FUNC_6(VAR_17);

 if ((VAR_14->tf_scause == VAR_0) ||
     (VAR_14->tf_scause == VAR_2)) {
  VAR_20 = VAR_8;
 } else if (VAR_14->tf_scause == VAR_1) {
  VAR_20 = VAR_6;
 } else {
  VAR_20 = VAR_7;
 }

 if (FUNC_5(VAR_16->pmap, VAR_21, VAR_20))
  goto done;

 VAR_23 = FUNC_8(VAR_16, VAR_21, VAR_20, VAR_4, &VAR_24, &VAR_25);
 if (VAR_23 != VAR_3) {
  if (VAR_15) {
   FUNC_1(VAR_18, VAR_24, VAR_25, (void *)VAR_17);
  } else {
   if (VAR_19->pcb_onfault != 0) {
    VAR_14->tf_a[0] = VAR_23;
    VAR_14->tf_sepc = VAR_19->pcb_onfault;
    return;
   }
   goto fatal;
  }
 }

done:
 if (VAR_15)
  FUNC_7(VAR_18, VAR_14);
 return;

fatal:
 FUNC_2(VAR_14);
 FUNC_4("Fatal page fault at %#lx: %#016lx", VAR_14->tf_sepc, VAR_17);
}
