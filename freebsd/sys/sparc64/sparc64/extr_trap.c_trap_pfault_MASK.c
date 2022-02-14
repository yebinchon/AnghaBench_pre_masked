
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_offset_t ;
typedef int * vm_map_t ;
typedef TYPE_3__* vm_map_entry_t ;
typedef scalar_t__ u_long ;
struct trapframe {int tf_type; int tf_tstate; scalar_t__ tf_tpc; scalar_t__ tf_tnpc; int tf_tar; } ;
struct thread {struct proc* td_proc; int * td_pcb; } ;
struct proc {TYPE_2__* p_vmspace; } ;
struct TYPE_7__ {int eflags; } ;
struct TYPE_5__ {int * pm_context; } ;
struct TYPE_6__ {int vm_map; TYPE_1__ vm_pmap; } ;


 int FUNC_0 (int ,char*,struct thread*,int ,int) ;
 int FUNC_1 (int ,char*,struct thread*,int ,int ,scalar_t__) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 size_t VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int * VAR_19 ;
 int FUNC_5 (int *,int ,int,int ,int*,int*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ,TYPE_3__**) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static bool
FUNC_9(struct thread *VAR_20, struct trapframe *VAR_21, int *VAR_22, int *VAR_23)
{
 vm_map_t VAR_24;
 struct proc *VAR_25;
 vm_offset_t VAR_26;
 vm_prot_t VAR_27;
 vm_map_entry_t VAR_28;
 u_long VAR_29;
 int VAR_30;
 int VAR_31;

 if (VAR_20 == ((void*)0))
  return (-1);
 FUNC_2(VAR_20->td_pcb != ((void*)0), ("trap_pfault: pcb NULL"));
 FUNC_2(VAR_20->td_proc != ((void*)0), ("trap_pfault: curproc NULL"));
 FUNC_2(VAR_20->td_proc->p_vmspace != ((void*)0), ("trap_pfault: vmspace NULL"));

 VAR_25 = VAR_20->td_proc;

 VAR_31 = VAR_0;
 VAR_29 = FUNC_3(VAR_21->tf_tar);
 VAR_30 = VAR_21->tf_type & ~VAR_7;
 VAR_26 = FUNC_4(VAR_21->tf_tar);

 FUNC_1(VAR_1, "trap_pfault: td=%p pm_ctx=%#lx va=%#lx ctx=%#lx",
     VAR_20, VAR_25->p_vmspace->vm_pmap.pm_context[VAR_15], VAR_26, VAR_29);

 if (VAR_30 == VAR_6)
  VAR_27 = VAR_11;
 else {
  if (VAR_30 == VAR_5)
   VAR_27 = VAR_10;
  else
   VAR_27 = VAR_10 | VAR_9;
 }

 if (VAR_29 != VAR_3) {

  VAR_24 = &VAR_25->p_vmspace->vm_map;
 } else {





  FUNC_2(VAR_21->tf_tstate & VAR_4,
      ("trap_pfault: fault on nucleus context from user mode"));

  if (VAR_21->tf_tpc >= (u_long)VAR_13 &&
      VAR_21->tf_tpc <= (u_long)VAR_14) {
   FUNC_6(VAR_19);
   if (FUNC_7(VAR_19, VAR_26, &VAR_28) &&
       (VAR_28->eflags & VAR_2) != 0) {
    VAR_21->tf_tpc = (u_long)VAR_12;
    VAR_21->tf_tnpc = VAR_21->tf_tpc + 4;
    FUNC_8(VAR_19);
    return (0);
   }
   FUNC_8(VAR_19);
  }
  VAR_24 = VAR_19;
 }


 VAR_31 = FUNC_5(VAR_24, VAR_26, VAR_27, VAR_8, VAR_22, VAR_23);

 FUNC_0(VAR_1, "trap_pfault: return td=%p va=%#lx rv=%d",
     VAR_20, VAR_26, VAR_31);
 if (VAR_31 == VAR_0)
  return (1);
 if (VAR_29 != VAR_3 && (VAR_21->tf_tstate & VAR_4) != 0) {
  if (VAR_21->tf_tpc >= (u_long)VAR_17 &&
      VAR_21->tf_tpc <= (u_long)VAR_18) {
   VAR_21->tf_tpc = (u_long)VAR_16;
   VAR_21->tf_tnpc = VAR_21->tf_tpc + 4;
   return (1);
  }
  if (VAR_21->tf_tpc >= (u_long)VAR_13 &&
      VAR_21->tf_tpc <= (u_long)VAR_14) {
   VAR_21->tf_tpc = (u_long)VAR_12;
   VAR_21->tf_tnpc = VAR_21->tf_tpc + 4;
   return (1);
  }
 }
 return (0);
}
