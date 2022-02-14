
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u_long ;
struct trapframe {size_t tf_type; int tf_tstate; void* tf_tpc; void* tf_sfar; int tf_sfsr; int tf_tnpc; } ;
struct thread {scalar_t__ td_cowgen; struct trapframe* td_frame; scalar_t__ td_pticks; struct proc* td_proc; } ;
struct proc {scalar_t__ p_cowgen; TYPE_1__* p_sysent; } ;
typedef void* register_t ;
struct TYPE_6__ {int ksi_signo; int ksi_code; int ksi_trapno; void* ksi_addr; } ;
typedef TYPE_2__ ksiginfo_t ;
struct TYPE_5__ {int (* sv_transtrap ) (int,size_t) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct thread*) ;
 int FUNC_1 (int ,char*,struct thread*,size_t,char*,int ) ;
 int FUNC_2 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (struct trapframe*) ;
 scalar_t__ FUNC_6 (struct trapframe*) ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;

 size_t VAR_8 ;




 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct thread* VAR_12 ;
 int FUNC_10 (struct trapframe*) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 () ;
 int FUNC_13 (size_t,int ,struct trapframe*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (char*,size_t) ;
 int VAR_22 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct thread*,struct trapframe*,int) ;
 int FUNC_18 (struct thread*) ;
 int FUNC_19 (int,size_t) ;
 int FUNC_20 (struct thread*) ;
 int FUNC_21 () ;
 size_t* VAR_23 ;
 int FUNC_22 (struct thread*,struct trapframe*,int*,int*) ;
 int* VAR_24 ;
 int FUNC_23 (struct thread*,TYPE_2__*) ;
 int FUNC_24 (struct thread*,struct trapframe*) ;
 int VAR_25 ;

void
FUNC_25(struct trapframe *VAR_26)
{
 struct thread *VAR_27;
 struct proc *VAR_28;
 int VAR_29;
 int VAR_30, VAR_31;
 register_t VAR_32;
 ksiginfo_t VAR_33;

 VAR_27 = VAR_12;

 FUNC_1(VAR_2, "trap: %p type=%s (%s) pil=%#lx", VAR_27,
     VAR_23[VAR_26->tf_type & ~VAR_7],
     (FUNC_6(VAR_26) ? "user" : "kernel"), FUNC_16(VAR_22));

 FUNC_7(VAR_25);

 if ((VAR_26->tf_tstate & VAR_6) == 0) {
  FUNC_2(VAR_27 != ((void*)0), ("trap: curthread NULL"));
  FUNC_2(VAR_27->td_proc != ((void*)0), ("trap: curproc NULL"));

  VAR_28 = VAR_27->td_proc;
  VAR_27->td_pticks = 0;
  VAR_27->td_frame = VAR_26;
  VAR_32 = VAR_26->tf_tpc;
  VAR_31 = (int)VAR_26->tf_type;
  if (VAR_27->td_cowgen != VAR_28->p_cowgen)
   FUNC_20(VAR_27);

  switch (VAR_26->tf_type) {
  case 137:
  case 136:
   VAR_32 = VAR_26->tf_sfar;

  case 133:
   if (FUNC_22(VAR_27, VAR_26, &VAR_30, &VAR_31))
    VAR_30 = 0;
   break;
  case 135:
   VAR_30 = FUNC_17(VAR_27, VAR_26, 2);
   break;
  case 134:
   VAR_30 = FUNC_17(VAR_27, VAR_26, 1);
   break;
  case 129:
   VAR_30 = FUNC_18(VAR_27);
   break;
  case 140:
   VAR_30 = FUNC_21();
   break;
  case 141:
   VAR_30 = VAR_4;
   VAR_31 = VAR_5;
   break;
  default:
   if (VAR_26->tf_type > VAR_8)
    FUNC_15("trap: bad trap type %#lx (user)",
        VAR_26->tf_type);
   else if (VAR_24[VAR_26->tf_type] == -1)
    FUNC_15("trap: %s (user)",
        VAR_23[VAR_26->tf_type]);
   VAR_30 = VAR_24[VAR_26->tf_type];
   break;
  }

  if (VAR_30 != 0) {

   if (VAR_28->p_sysent->sv_transtrap != ((void*)0)) {
    VAR_30 = VAR_28->p_sysent->sv_transtrap(VAR_30,
        VAR_26->tf_type);
   }
   if (VAR_13 &&
       (VAR_30 == 4 || VAR_30 == 10 || VAR_30 == 11))
    FUNC_11(VAR_1, "trapsig");
   FUNC_14(&VAR_33);
   VAR_33.ksi_signo = VAR_30;
   VAR_33.ksi_code = VAR_31;
   VAR_33.ksi_addr = (void *)VAR_32;
   VAR_33.ksi_trapno = (int)VAR_26->tf_type;
   FUNC_23(VAR_27, &VAR_33);
  }

  FUNC_24(VAR_27, VAR_26);
 } else {
  FUNC_2((VAR_26->tf_type & VAR_7) != 0,
      ("trap: kernel trap isn't"));

  if (VAR_21) {
   FUNC_12();
   return;
  }

  switch (VAR_26->tf_type & ~VAR_7) {
  case 141:
  case 132:
   VAR_29 = (FUNC_13(VAR_26->tf_type, 0, VAR_26) == 0);
   FUNC_5(VAR_26);
   break;






  case 137:
  case 136:
  case 133:
   VAR_29 = !FUNC_22(VAR_27, VAR_26, &VAR_30, &VAR_31);
   break;
  case 138:
  case 131:
   if ((VAR_26->tf_sfsr & VAR_3) != 0 &&
       FUNC_3(VAR_26->tf_sfsr) == VAR_0) {
    if (VAR_26->tf_tpc >= (u_long)VAR_10 &&
        VAR_26->tf_tpc <= (u_long)VAR_11) {
     VAR_26->tf_tpc = (u_long)VAR_9;
     VAR_26->tf_tnpc = VAR_26->tf_tpc + 4;
     VAR_29 = 0;
     break;
    }
    if (VAR_26->tf_tpc >= (u_long)VAR_18 &&
        VAR_26->tf_tpc <= (u_long)VAR_19) {
     VAR_26->tf_tpc = (u_long)VAR_17;
     VAR_26->tf_tnpc = VAR_26->tf_tpc + 4;
     VAR_29 = 0;
     break;
    }
   }
   VAR_29 = 1;
   break;
  case 139:






   if (VAR_26->tf_tpc > (u_long)VAR_15 &&
       VAR_26->tf_tpc < (u_long)VAR_16) {
    FUNC_9();
    FUNC_8(FUNC_4(VAR_20));
    VAR_26->tf_tpc = (u_long)VAR_14;
    VAR_26->tf_tnpc = VAR_26->tf_tpc + 4;
    VAR_29 = 0;
    break;
   }
   VAR_29 = 1;
   break;
  case 140:
   VAR_29 = FUNC_21();
   break;
  default:
   VAR_29 = 1;
   break;
  }

  if (VAR_29 != 0) {
   VAR_26->tf_type &= ~VAR_7;
   if (VAR_26->tf_type > VAR_8)
    FUNC_15("trap: bad trap type %#lx (kernel)",
        VAR_26->tf_type);
   FUNC_15("trap: %s (kernel)", VAR_23[VAR_26->tf_type]);
  }
 }
 FUNC_0(VAR_2, "trap: td=%p return", VAR_27);
}
