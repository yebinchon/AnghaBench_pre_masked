
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct trapframe {int* tf_a; void* tf_sp; void* tf_sepc; void* tf_ra; } ;
struct TYPE_5__ {int ss_flags; scalar_t__ ss_size; scalar_t__ ss_sp; } ;
struct thread {int td_pflags; struct proc* td_proc; TYPE_1__ td_sigstk; struct trapframe* td_frame; } ;
struct sysentvec {scalar_t__ sv_sigcode_base; scalar_t__* sv_szsigcode; scalar_t__ sv_psstrings; } ;
struct TYPE_6__ {TYPE_1__ uc_stack; int uc_sigmask; int uc_mcontext; } ;
struct sigframe {TYPE_2__ sf_uc; int sf_si; } ;
struct sigacts {int ps_mtx; int ps_sigonstack; } ;
struct proc {struct sysentvec* p_sysent; int p_comm; struct sigacts* p_sigacts; } ;
typedef int sigset_t ;
typedef scalar_t__ sig_t ;
typedef void* register_t ;
struct TYPE_7__ {int ksi_signo; int ksi_info; } ;
typedef TYPE_3__ ksiginfo_t ;
typedef int frame ;


 int FUNC_0 (int ,char*,struct thread*,struct sigframe*) ;
 int FUNC_1 (int ,char*,struct thread*,void*,void*) ;
 int FUNC_2 (int ,char*,struct thread*,int ,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*,int ) ;
 int FUNC_5 (struct proc*) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (struct sigframe*) ;
 int VAR_5 ;
 int FUNC_8 (struct sigframe*,int) ;
 scalar_t__ FUNC_9 (struct sigframe*,struct sigframe*,int) ;
 struct thread* VAR_6 ;
 int FUNC_10 (struct thread*,int *) ;
 int FUNC_11 (struct thread*,int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct thread*,int ) ;
 int FUNC_16 (void*) ;

void
FUNC_17(sig_t VAR_7, ksiginfo_t *VAR_8, sigset_t *VAR_9)
{
 struct sigframe *VAR_10, VAR_11;
 struct sysentvec *VAR_12;
 struct trapframe *VAR_13;
 struct sigacts *VAR_14;
 struct thread *VAR_15;
 struct proc *VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_15 = VAR_6;
 VAR_16 = VAR_15->td_proc;
 FUNC_4(VAR_16, VAR_1);

 VAR_18 = VAR_8->ksi_signo;
 VAR_14 = VAR_16->p_sigacts;
 FUNC_12(&VAR_14->ps_mtx, VAR_1);

 VAR_13 = VAR_15->td_frame;
 VAR_17 = FUNC_16(VAR_13->tf_sp);

 FUNC_2(VAR_0, "sendsig: td=%p (%s) catcher=%p sig=%d", VAR_15, VAR_16->p_comm,
     VAR_7, VAR_18);


 if ((VAR_15->td_pflags & VAR_5) != 0 && !VAR_17 &&
     FUNC_6(VAR_14->ps_sigonstack, VAR_18)) {
  VAR_10 = (struct sigframe *)((uintptr_t)VAR_15->td_sigstk.ss_sp +
      VAR_15->td_sigstk.ss_size);
 } else {
  VAR_10 = (struct sigframe *)VAR_15->td_frame->tf_sp;
 }


 VAR_10--;
 VAR_10 = (struct sigframe *)FUNC_7(VAR_10);


 FUNC_8(&VAR_11, sizeof(VAR_11));
 FUNC_11(VAR_15, &VAR_11.sf_uc.uc_mcontext, 0);
 FUNC_10(VAR_15, &VAR_11.sf_uc.uc_mcontext);
 VAR_11.sf_si = VAR_8->ksi_info;
 VAR_11.sf_uc.uc_sigmask = *VAR_9;
 VAR_11.sf_uc.uc_stack = VAR_15->td_sigstk;
 VAR_11.sf_uc.uc_stack.ss_flags = (VAR_15->td_pflags & VAR_5) != 0 ?
     (VAR_17 ? VAR_4 : 0) : VAR_3;
 FUNC_14(&VAR_14->ps_mtx);
 FUNC_5(VAR_15->td_proc);


 if (FUNC_9(&VAR_11, VAR_10, sizeof(*VAR_10)) != 0) {

  FUNC_0(VAR_0, "sendsig: sigexit td=%p fp=%p", VAR_15, VAR_10);
  FUNC_3(VAR_16);
  FUNC_15(VAR_15, VAR_2);
 }

 VAR_13->tf_a[0] = VAR_18;
 VAR_13->tf_a[1] = (register_t)&VAR_10->sf_si;
 VAR_13->tf_a[2] = (register_t)&VAR_10->sf_uc;

 VAR_13->tf_sepc = (register_t)VAR_7;
 VAR_13->tf_sp = (register_t)VAR_10;

 VAR_12 = VAR_16->p_sysent;
 if (VAR_12->sv_sigcode_base != 0)
  VAR_13->tf_ra = (register_t)VAR_12->sv_sigcode_base;
 else
  VAR_13->tf_ra = (register_t)(VAR_12->sv_psstrings -
      *(VAR_12->sv_szsigcode));

 FUNC_1(VAR_0, "sendsig: return td=%p pc=%#x sp=%#x", VAR_15, VAR_13->tf_sepc,
     VAR_13->tf_sp);

 FUNC_3(VAR_16);
 FUNC_13(&VAR_14->ps_mtx);
}
