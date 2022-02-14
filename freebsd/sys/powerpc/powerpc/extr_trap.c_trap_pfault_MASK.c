
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_offset_t ;
typedef int * vm_map_t ;
struct TYPE_6__ {int dsisr; } ;
struct TYPE_5__ {int esr; } ;
struct TYPE_7__ {TYPE_2__ aim; TYPE_1__ booke; } ;
struct trapframe {scalar_t__ exc; int srr1; TYPE_3__ cpu; int dar; int srr0; } ;
struct thread {struct proc* td_proc; } ;
struct proc {TYPE_4__* p_vmspace; } ;
struct TYPE_8__ {int vm_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct thread* VAR_9 ;
 scalar_t__ FUNC_1 (struct trapframe*) ;
 int * VAR_10 ;
 int FUNC_2 (int ,int*,int *) ;
 int FUNC_3 (int *,int ,int ,int ,int*,int*) ;

__attribute__((used)) static bool
FUNC_4(struct trapframe *VAR_11, bool VAR_12, int *VAR_13, int *VAR_14)
{
 vm_offset_t VAR_15;
 struct thread *VAR_16;
 struct proc *VAR_17;
 vm_map_t VAR_18;
 vm_prot_t VAR_19;
 int VAR_20, VAR_21;

 VAR_16 = VAR_9;
 VAR_17 = VAR_16->td_proc;
 if (VAR_11->exc == VAR_2) {
  VAR_15 = VAR_11->srr0;
  VAR_19 = VAR_6;
  if (VAR_11->srr1 & VAR_4)
   VAR_19 |= VAR_7;
 } else {
  VAR_15 = VAR_11->dar;



  if (VAR_11->cpu.aim.dsisr & VAR_0)

   VAR_19 = VAR_8;
  else
   VAR_19 = VAR_7;
 }

 if (VAR_12) {
  FUNC_0(VAR_17->p_vmspace != ((void*)0), ("trap_pfault: vmspace  NULL"));
  VAR_18 = &VAR_17->p_vmspace->vm_map;
 } else {
  VAR_20 = FUNC_2(VAR_15, &VAR_21, &VAR_15);
  if (VAR_20 != 0)
   return (0);

  if (VAR_21)
   VAR_18 = &VAR_17->p_vmspace->vm_map;
  else
   VAR_18 = VAR_10;
 }


 VAR_20 = FUNC_3(VAR_18, VAR_15, VAR_19, VAR_5, VAR_13, VAR_14);




 if (VAR_20 == VAR_3)
  return (1);

 if (!VAR_12 && FUNC_1(VAR_11))
  return (1);

 return (0);
}
