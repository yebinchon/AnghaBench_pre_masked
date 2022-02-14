
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union nfsfh {int fh_bytes; } ;
struct vnode {TYPE_1__* v_mount; } ;
struct ucred {int dummy; } ;
struct timeval {int dummy; } ;
struct thread {struct ucred* td_ucred; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct rpc_callextra {int * rc_timers; struct nlm_feedback_arg* rc_feedback_arg; int rc_feedback; int * rc_auth; } ;
struct proc {int p_pid; } ;
struct nlm_host {int dummy; } ;
struct nlm_file_svid {int ns_svid; void* ns_active; int ns_refs; scalar_t__ ns_ucred; } ;
struct nlm_feedback_arg {struct nfsmount* nf_nmp; void* nf_printed; } ;
struct nfsmount {int nm_flag; int nm_retry; int (* nm_getinfo ) (struct vnode*,int ,size_t*,struct sockaddr_storage*,int*,int *,struct timeval*) ;int nm_hostname; int (* nm_vinvalbuf ) (struct vnode*,int ,struct thread*,int) ;} ;
struct flock {scalar_t__ l_start; scalar_t__ l_len; int l_pid; int l_type; } ;
typedef int rpcvers_t ;
typedef int off_t ;
typedef int ext ;
typedef scalar_t__ bool_t ;
struct TYPE_2__ {struct ucred* mnt_cred; } ;
typedef int AUTH ;


 int FUNC_0 (struct vnode*,char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 struct nfsmount* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct vnode*,int ) ;
 int VAR_15 ;
 int * FUNC_5 (struct ucred*) ;
 scalar_t__ FUNC_6 (struct ucred*) ;
 int FUNC_7 (struct ucred*) ;
 int FUNC_8 (struct ucred*) ;
 struct thread* VAR_16 ;
 int FUNC_9 (char*,int ) ;
 char* FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (struct rpc_callextra*,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct nlm_host*,struct rpc_callextra*,int ,struct timeval*,int,struct vnode*,int,struct flock*,int,int,size_t,int *,int ) ;
 int VAR_17 ;
 struct nlm_host* FUNC_15 (char*,struct sockaddr*,int ) ;
 struct nlm_file_svid* FUNC_16 (void*) ;
 int FUNC_17 (struct nlm_file_svid*) ;
 int FUNC_18 (struct nlm_host*,struct rpc_callextra*,int ,struct timeval*,int,struct vnode*,int,struct flock*,int,int,size_t,int *,int ) ;
 int FUNC_19 (struct nlm_host*) ;
 int FUNC_20 (struct nlm_host*,struct rpc_callextra*,int ,struct timeval*,int,struct vnode*,int const,struct flock*,int,int,size_t,int *,int ,scalar_t__) ;
 int VAR_18 ;
 int FUNC_21 (char*,int ) ;
 int FUNC_22 (struct vnode*,int ,struct thread*,int) ;
 int FUNC_23 (struct vnode*,int ,size_t*,struct sockaddr_storage*,int*,int *,struct timeval*) ;

__attribute__((used)) static int
FUNC_24(struct vnode *VAR_19, void *VAR_20, int VAR_21, struct flock *VAR_22,
    int VAR_23, bool_t VAR_24, bool_t VAR_25)
{
 struct thread *VAR_26 = VAR_16;
 struct nfsmount *VAR_27;
 off_t VAR_28;
 size_t VAR_29;
 union nfsfh VAR_30;
 struct sockaddr *VAR_31;
 struct sockaddr_storage VAR_32;
 char *VAR_33;
 struct timeval VAR_34;
 int VAR_35;
 rpcvers_t VAR_36;
 struct nlm_host *VAR_37;
 struct rpc_callextra VAR_38;
 struct nlm_feedback_arg VAR_39;
 AUTH *VAR_40;
 struct ucred *VAR_41, *VAR_42;
 struct nlm_file_svid *VAR_43;
 int VAR_44;
 int VAR_45;
 int VAR_46;

 FUNC_0(VAR_19, "nlm_advlock_1");

 VAR_33 = FUNC_10(VAR_8, VAR_9, VAR_10);
 VAR_27 = FUNC_3(VAR_19->v_mount);





 if (VAR_21 == 129 || VAR_21 == 128)
  VAR_27->nm_vinvalbuf(VAR_19, VAR_15, VAR_26, 1);

 FUNC_21(VAR_33, VAR_27->nm_hostname);
 VAR_27->nm_getinfo(VAR_19, VAR_30.fh_bytes, &VAR_29, &VAR_32, &VAR_46, &VAR_28, &VAR_34);
 VAR_31 = (struct sockaddr *) &VAR_32;
 if (VAR_46 != 0)
  VAR_36 = VAR_13;
 else
  VAR_36 = VAR_12;

 if (VAR_27->nm_flag & VAR_11)
  VAR_35 = VAR_27->nm_retry;
 else
  VAR_35 = VAR_7;







 VAR_41 = VAR_26->td_ucred;
 VAR_26->td_ucred = VAR_19->v_mount->mnt_cred;
 FUNC_8(VAR_26->td_ucred);
 if (VAR_25)
  FUNC_4(VAR_19, 0);

 VAR_37 = FUNC_15(VAR_33, VAR_31, VAR_36);
 VAR_40 = FUNC_5(VAR_41);
 FUNC_11(&VAR_38, 0, sizeof(VAR_38));

 VAR_39.nf_printed = VAR_2;
 VAR_39.nf_nmp = VAR_27;
 VAR_38.rc_auth = VAR_40;

 VAR_38.rc_feedback = VAR_17;
 VAR_38.rc_feedback_arg = &VAR_39;
 VAR_38.rc_timers = ((void*)0);

 VAR_43 = ((void*)0);
 if (VAR_23 & VAR_3) {
  VAR_43 = FUNC_16(VAR_20);
  FUNC_2(VAR_22->l_start == 0 && VAR_22->l_len == 0,
      ("F_FLOCK lock requests must be whole-file locks"));
  if (!VAR_43->ns_ucred) {




   VAR_43->ns_ucred = FUNC_6(VAR_41);
  }
  VAR_44 = VAR_43->ns_svid;
 } else if (VAR_23 & VAR_4) {





  VAR_44 = VAR_22->l_pid;
 } else {
  VAR_44 = ((struct proc *) VAR_20)->p_pid;
 }

 switch(VAR_21) {
 case 129:
  if ((VAR_23 & (VAR_3|VAR_5)) == (VAR_3|VAR_5)
      && VAR_22->l_type == VAR_6) {
   VAR_45 = FUNC_20(VAR_37, &VAR_38, VAR_36, &VAR_34, VAR_35,
       VAR_19, 129, VAR_22, VAR_23 & ~VAR_5,
       VAR_44, VAR_29, &VAR_30.fh_bytes, VAR_28, VAR_24);
   if (VAR_45 == VAR_0) {
    VAR_22->l_type = 128;
    VAR_45 = FUNC_14(VAR_37, &VAR_38, VAR_36, &VAR_34,
        VAR_35, VAR_19, 128, VAR_22, VAR_23,
        VAR_44, VAR_29, &VAR_30.fh_bytes, VAR_28);
    VAR_22->l_type = VAR_6;
    if (!VAR_45) {
     FUNC_12(&VAR_18);
     if (VAR_43->ns_active) {
      VAR_43->ns_refs--;
      VAR_43->ns_active = VAR_2;
     }
     FUNC_13(&VAR_18);
     VAR_23 |= VAR_5;
     VAR_45 = FUNC_20(VAR_37, &VAR_38, VAR_36,
         &VAR_34, VAR_35, VAR_19, 129, VAR_22,
         VAR_23, VAR_44, VAR_29, &VAR_30.fh_bytes,
         VAR_28, VAR_24);
    }
   }
  } else {
   VAR_45 = FUNC_20(VAR_37, &VAR_38, VAR_36, &VAR_34, VAR_35,
       VAR_19, VAR_21, VAR_22, VAR_23, VAR_44, VAR_29, &VAR_30.fh_bytes,
       VAR_28, VAR_24);
  }
  if (!VAR_45 && VAR_43) {
   FUNC_12(&VAR_18);
   if (!VAR_43->ns_active) {
    VAR_43->ns_refs++;
    VAR_43->ns_active = VAR_14;
   }
   FUNC_13(&VAR_18);
  }
  break;

 case 128:
  VAR_45 = FUNC_14(VAR_37, &VAR_38, VAR_36, &VAR_34, VAR_35,
      VAR_19, VAR_21, VAR_22, VAR_23, VAR_44, VAR_29, &VAR_30.fh_bytes, VAR_28);
  if (!VAR_45 && VAR_43) {
   FUNC_12(&VAR_18);
   if (VAR_43->ns_active) {
    VAR_43->ns_refs--;
    VAR_43->ns_active = VAR_2;
   }
   FUNC_13(&VAR_18);
  }
  break;

 case 130:
  VAR_45 = FUNC_18(VAR_37, &VAR_38, VAR_36, &VAR_34, VAR_35,
      VAR_19, VAR_21, VAR_22, VAR_23, VAR_44, VAR_29, &VAR_30.fh_bytes, VAR_28);
  break;

 default:
  VAR_45 = VAR_1;
  break;
 }

 if (VAR_43)
  FUNC_17(VAR_43);

 VAR_42 = VAR_26->td_ucred;
 VAR_26->td_ucred = VAR_41;
 FUNC_7(VAR_42);
 FUNC_1(VAR_40);

 FUNC_19(VAR_37);
 FUNC_9(VAR_33, VAR_9);
 return (VAR_45);
}
