
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct TYPE_18__ {int dbcr0; } ;
struct TYPE_19__ {TYPE_7__ booke; } ;
struct trapframe {int exc; int srr1; int srr0; int dar; TYPE_8__ cpu; } ;
struct thread {scalar_t__ td_cowgen; TYPE_6__* td_pcb; int * td_ucred; struct trapframe* td_frame; scalar_t__ td_pticks; int td_name; struct proc* td_proc; } ;
struct proc {scalar_t__ p_cowgen; TYPE_3__* p_sysent; TYPE_4__* p_vmspace; } ;
typedef int register_t ;
struct TYPE_20__ {int ksi_signo; int ksi_code; int ksi_trapno; void* ksi_addr; } ;
typedef TYPE_9__ ksiginfo_t ;
struct TYPE_12__ {int usr_vsid; } ;
struct TYPE_13__ {TYPE_1__ aim; } ;
struct TYPE_16__ {int vscr; } ;
struct TYPE_17__ {int pcb_flags; TYPE_2__ pcb_cpu; TYPE_5__ pcb_vec; } ;
struct TYPE_15__ {int vm_pmap; } ;
struct TYPE_14__ {int (* sv_transtrap ) (int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;







 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;




 int VAR_11 ;

 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int,char*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_44 ;
 struct thread* VAR_45 ;
 int FUNC_4 (struct trapframe*) ;
 int FUNC_5 (struct trapframe*) ;
 int FUNC_6 (struct trapframe*) ;
 scalar_t__ FUNC_7 (struct trapframe*,int) ;
 int FUNC_8 (struct thread*) ;
 int FUNC_9 (struct thread*) ;
 int FUNC_10 (struct thread*,struct trapframe*) ;
 int FUNC_11 (struct trapframe*) ;
 int FUNC_12 (void const*) ;
 int FUNC_13 (struct trapframe*) ;
 int FUNC_14 (int *,int) ;
 scalar_t__ VAR_46 ;
 int FUNC_15 () ;
 int FUNC_16 (TYPE_9__*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 () ;
 int FUNC_20 (struct trapframe*,struct thread*) ;
 int FUNC_21 (struct thread*) ;
 int FUNC_22 (struct thread*) ;
 scalar_t__ FUNC_23 (struct trapframe*,int) ;
 int FUNC_24 (struct trapframe*) ;
 int FUNC_25 (int,int) ;
 int FUNC_26 (struct trapframe*) ;
 int FUNC_27 (struct thread*) ;
 int FUNC_28 (struct trapframe*) ;
 int FUNC_29 (struct trapframe*,int,int*,int*) ;
 int FUNC_30 (int) ;
 int FUNC_31 (struct thread*,TYPE_9__*) ;
 int FUNC_32 (struct thread*,struct trapframe*) ;
 int VAR_47 ;

void
FUNC_33(struct trapframe *VAR_48)
{
 struct thread *VAR_49;
 struct proc *VAR_50;



 int VAR_51, VAR_52, VAR_53;
 u_int VAR_54;
 ksiginfo_t VAR_55;
 register_t VAR_56;

 FUNC_3(VAR_47);
 VAR_49 = VAR_45;
 VAR_50 = VAR_49->td_proc;

 VAR_52 = VAR_54 = VAR_48->exc;
 VAR_51 = 0;
 VAR_53 = VAR_48->srr1 & VAR_23;

 FUNC_1(VAR_16, "trap: %s type=%s (%s)", VAR_49->td_name,
     FUNC_30(VAR_52), VAR_53 ? "user" : "kernel");
 if (VAR_53) {
  VAR_49->td_pticks = 0;
  VAR_49->td_frame = VAR_48;
  if (VAR_49->td_cowgen != VAR_50->p_cowgen)
   FUNC_27(VAR_49);


  switch (VAR_52) {
  case 141:
  case 138:
   VAR_48->srr1 &= ~VAR_24;
   VAR_51 = VAR_31;
   VAR_54 = VAR_42;
   break;
  case 149:
  case 144:
   if (FUNC_29(VAR_48, 1, &VAR_51, &VAR_54))
    VAR_51 = 0;
   break;

  case 140:
   FUNC_26(VAR_48);
   break;

  case 147:
   FUNC_2((VAR_49->td_pcb->pcb_flags & VAR_19) != VAR_19,
       ("FPU already enabled for thread"));
   FUNC_8(VAR_49);
   break;

  case 137:
   FUNC_2((VAR_49->td_pcb->pcb_flags & VAR_20) != VAR_20,
       ("Altivec already enabled for thread"));
   FUNC_9(VAR_49);
   break;

  case 133:
   FUNC_2((VAR_49->td_pcb->pcb_flags & VAR_21) != VAR_21,
       ("VSX already enabled for thread"));
   if (!(VAR_49->td_pcb->pcb_flags & VAR_20))
    FUNC_9(VAR_49);
   if (VAR_49->td_pcb->pcb_flags & VAR_19)
    FUNC_21(VAR_49);
   VAR_49->td_pcb->pcb_flags |= VAR_21;
   FUNC_8(VAR_49);
   break;

  case 148:
   VAR_56 = FUNC_17(VAR_37);
   switch (VAR_56 & VAR_11) {
   case 130:
    FUNC_0(VAR_16,
        "Hardware Transactional Memory subsystem disabled");
    VAR_51 = VAR_29;
    VAR_54 = VAR_14;
    break;
   case 132:
    VAR_49->td_pcb->pcb_flags |= VAR_18 | VAR_17;
    VAR_56 |= VAR_9;
    FUNC_18(VAR_34, 0);
    break;
   case 131:
    VAR_49->td_pcb->pcb_flags |= VAR_18;
    VAR_56 |= VAR_10;
    FUNC_18(VAR_35, 0);
    FUNC_18(VAR_36, 0);
    FUNC_18(VAR_32, 0);
    break;
   case 128:
    VAR_49->td_pcb->pcb_flags |= VAR_18;
    VAR_56 |= VAR_13;
    FUNC_18(VAR_40, 0);
    break;
   case 129:
    VAR_49->td_pcb->pcb_flags |= VAR_18;
    VAR_56 |= VAR_12;
    FUNC_18(VAR_38, 0);
    FUNC_18(VAR_39, 0);
    break;
   default:
    VAR_51 = VAR_29;
    VAR_54 = VAR_14;
   }
   FUNC_18(VAR_37, VAR_56 & ~VAR_11);
   break;
  case 146:
   VAR_51 = VAR_29;
   VAR_54 = VAR_14;
   break;

  case 136:
  case 135:
  case 134:
   FUNC_22(VAR_49);
   VAR_49->td_pcb->pcb_vec.vscr |= VAR_0;
   FUNC_9(VAR_49);
   break;

  case 152:
   if (FUNC_10(VAR_49, VAR_48) != 0) {
    VAR_51 = VAR_27;
    VAR_54 = VAR_1;
   }
   else
    VAR_48->srr0 += 4;
   break;

  case 151:
   FUNC_18(VAR_33, FUNC_17(VAR_33));
   VAR_48->srr1 &= ~VAR_22;
   VAR_48->cpu.booke.dbcr0 &= ~(VAR_4 | VAR_3);
   VAR_51 = VAR_31;
   VAR_54 = VAR_42;
   break;

  case 142:

   if (FUNC_11(VAR_48)) {
     VAR_51 = VAR_31;
    VAR_54 = VAR_41;
   } else {
    VAR_51 = FUNC_20(VAR_48, VAR_49);
    if (VAR_51 == VAR_29) {
     if (VAR_48->srr1 & VAR_7)
      VAR_54 = VAR_15;
     else if (VAR_48->srr1 & VAR_6)
      VAR_54 = VAR_14;
    } else if (VAR_51 == VAR_28)
     VAR_54 = VAR_8;
   }
   break;

  case 143:





   VAR_51 = VAR_27;
   VAR_54 = VAR_2;
   break;
  default:
   FUNC_28(VAR_48);
  }
 } else {


  FUNC_2(VAR_44 || VAR_49->td_ucred != ((void*)0),
      ("kernel trap doesn't have ucred"));
  switch (VAR_52) {
  case 142:
   break;
  case 149:
   if (FUNC_29(VAR_48, 0, ((void*)0), ((void*)0)))
     return;
   break;
  case 143:
   if (FUNC_13(VAR_48))
     return;
   break;
  default:
   break;
  }
  FUNC_28(VAR_48);
 }

 if (VAR_51 != 0) {
  if (VAR_50->p_sysent->sv_transtrap != ((void*)0))
   VAR_51 = (VAR_50->p_sysent->sv_transtrap)(VAR_51, VAR_52);
  FUNC_16(&VAR_55);
  VAR_55.ksi_signo = VAR_51;
  VAR_55.ksi_code = (int) VAR_54;
  VAR_55.ksi_addr = (void *)VAR_48->srr0;
  VAR_55.ksi_trapno = VAR_52;
  FUNC_31(VAR_49, &VAR_55);
 }

 FUNC_32(VAR_49, VAR_48);
}
