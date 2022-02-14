
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vop_advlock_args {int a_flags; scalar_t__ a_op; struct flock* a_fl; struct vnode* a_vp; } ;
struct vnode {int v_mount; } ;
struct timeval {int dummy; } ;
struct thread {int td_ucred; struct proc* td_proc; } ;
struct proc {TYPE_4__* p_nlminfo; TYPE_1__* p_stats; int p_pid; } ;
struct nlminfo {int dummy; } ;
struct nfsmount {int (* nm_getinfo ) (struct vnode*,int ,int *,int *,int *,int *,int *) ;} ;
struct flock {scalar_t__ l_whence; scalar_t__ l_start; int l_len; scalar_t__ l_type; int l_pid; scalar_t__ l_sysid; } ;
struct TYPE_10__ {int retcode; int getlk_pid; scalar_t__ set_getlk_pid; scalar_t__ msg_seq; int pid_start; } ;
struct TYPE_8__ {scalar_t__ msg_seq; int pid_start; int pid; } ;
struct TYPE_9__ {int lm_wait; int lm_getlk; int lm_cred; struct flock lm_fl; TYPE_2__ lm_msg_ident; int lm_version; int lm_nfsv3; int lm_addr; int lm_fh_len; int lm_fh; } ;
struct TYPE_7__ {int p_start; } ;
typedef TYPE_3__ LOCKD_MSG ;


 int FUNC_0 (struct vnode*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 struct nfsmount* FUNC_1 (int ) ;
 int FUNC_2 (struct vnode*,int ) ;
 int FUNC_3 (int ,int *) ;
 struct thread* VAR_16 ;
 int FUNC_4 (struct timeval*) ;
 int VAR_17 ;
 TYPE_4__* FUNC_5 (int,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (struct vnode*,int ,int *,int *,int *,int *,int *) ;
 int FUNC_10 (int *,struct timeval*) ;
 int FUNC_11 (TYPE_4__*,int ,char*,int) ;

int
FUNC_12(struct vop_advlock_args *VAR_18)
{
 LOCKD_MSG VAR_19;
 struct thread *VAR_20;
 struct vnode *VAR_21;
 int VAR_22;
 struct flock *VAR_23;
 struct proc *VAR_24;
 struct nfsmount *VAR_25;
 struct timeval VAR_26;

 VAR_20 = VAR_16;
 VAR_24 = VAR_20->td_proc;

 VAR_21 = VAR_18->a_vp;
 VAR_23 = VAR_18->a_fl;
 VAR_25 = FUNC_1(VAR_21->v_mount);

 FUNC_0(VAR_21, "nfs_dolock");

 VAR_25->nm_getinfo(VAR_21, VAR_19.lm_fh, &VAR_19.lm_fh_len, &VAR_19.lm_addr,
     &VAR_19.lm_nfsv3, ((void*)0), ((void*)0));
 FUNC_2(VAR_21, 0);





 if (VAR_23->l_whence != VAR_14) {
  if ((VAR_23->l_whence != VAR_13 && VAR_23->l_whence != VAR_15) ||
      VAR_23->l_start < 0 ||
      (VAR_23->l_len < 0 &&
       (VAR_23->l_start == 0 || VAR_23->l_start + VAR_23->l_len < 0)))
   return (VAR_0);
  if (VAR_23->l_len > 0 &&
    (VAR_23->l_len - 1 > VAR_11 - VAR_23->l_start))
   return (VAR_1);
 }




 VAR_19.lm_version = VAR_7;
 VAR_19.lm_msg_ident.pid = VAR_24->p_pid;

 FUNC_6(&VAR_6);



 if (VAR_24->p_nlminfo == ((void*)0)) {
  VAR_24->p_nlminfo = FUNC_5(sizeof(struct nlminfo),
      VAR_8, VAR_9 | VAR_10);
  VAR_24->p_nlminfo->pid_start = VAR_24->p_stats->p_start;
  FUNC_4(&VAR_26);
  FUNC_10(&VAR_24->p_nlminfo->pid_start, &VAR_26);
 }
 VAR_19.lm_msg_ident.pid_start = VAR_24->p_nlminfo->pid_start;
 VAR_19.lm_msg_ident.msg_seq = ++(VAR_24->p_nlminfo->msg_seq);

 VAR_19.lm_fl = *VAR_23;
 VAR_19.lm_wait = VAR_18->a_flags & VAR_5;
 VAR_19.lm_getlk = VAR_18->a_op == VAR_3;
 FUNC_3(VAR_20->td_ucred, &VAR_19.lm_cred);

 for (;;) {
  VAR_22 = FUNC_8(&VAR_19);
  if (VAR_22)
   goto out;


  if (VAR_23->l_type == VAR_4)
   goto out;
  VAR_22 = FUNC_11(VAR_24->p_nlminfo, VAR_12, "lockd", 20*VAR_17);
  if (VAR_22 != 0) {
   if (VAR_22 == VAR_2) {




    continue;
   }

   break;
  }

  if (VAR_19.lm_getlk && VAR_24->p_nlminfo->retcode == 0) {
   if (VAR_24->p_nlminfo->set_getlk_pid) {
    VAR_23->l_sysid = 0;
    VAR_23->l_pid = VAR_24->p_nlminfo->getlk_pid;
   } else {
    VAR_23->l_type = VAR_4;
   }
  }
  VAR_22 = VAR_24->p_nlminfo->retcode;
  break;
 }
 out:
 FUNC_7(&VAR_6);
 return (VAR_22);
}
