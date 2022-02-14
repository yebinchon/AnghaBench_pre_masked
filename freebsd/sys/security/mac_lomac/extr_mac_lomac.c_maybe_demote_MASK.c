
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uintmax_t ;
struct vnode {TYPE_3__* v_mount; } ;
struct vattr {scalar_t__ va_fileid; } ;
struct sbuf {int dummy; } ;
struct proc {int p_comm; int p_pid; TYPE_1__* p_pgrp; int p_label; } ;
struct mac_lomac {int ml_flags; int ml_single; int ml_rangehigh; int ml_rangelow; } ;
struct mac_lomac_proc {struct mac_lomac mac_lomac; int mtx; } ;
typedef int pid_t ;
struct TYPE_12__ {int cr_uid; } ;
struct TYPE_11__ {int td_flags; TYPE_7__* td_ucred; struct proc* td_proc; } ;
struct TYPE_9__ {int f_mntonname; } ;
struct TYPE_10__ {TYPE_2__ mnt_stat; } ;
struct TYPE_8__ {int pg_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mac_lomac_proc* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct vnode*,struct vattr*,TYPE_7__*) ;
 int FUNC_2 (struct mac_lomac*,int) ;
 TYPE_4__* VAR_5 ;
 int FUNC_3 (int ,char*,char*,int ,int ,int ,int ,char*,char const*,char*,char const*,...) ;
 int FUNC_4 (struct mac_lomac*,struct mac_lomac*) ;
 int FUNC_5 (struct mac_lomac*,struct mac_lomac*) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (struct mac_lomac*,struct mac_lomac*) ;
 int FUNC_8 (struct sbuf*,struct mac_lomac*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 char* FUNC_11 (struct sbuf*) ;
 int FUNC_12 (struct sbuf*) ;
 int FUNC_13 (struct sbuf*) ;
 int FUNC_14 (struct sbuf*,int *,int ,int ) ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (TYPE_4__*) ;

__attribute__((used)) static int
FUNC_17(struct mac_lomac *VAR_6, struct mac_lomac *VAR_7,
    const char *VAR_8, const char *VAR_9, struct vnode *VAR_10)
{
 struct sbuf VAR_11, VAR_12, VAR_13;
 char *VAR_14, *VAR_15, *VAR_16;
 struct mac_lomac VAR_17;
 struct mac_lomac_proc *VAR_18;
 struct vattr VAR_19;
 struct proc *VAR_20;
 pid_t VAR_21;

 VAR_18 = FUNC_0(VAR_5->td_proc->p_label);

 VAR_20 = VAR_5->td_proc;
 FUNC_9(&VAR_18->mtx);
        if (VAR_18->mac_lomac.ml_flags & VAR_1) {





  if (FUNC_7(VAR_7, &VAR_18->mac_lomac)) {
   FUNC_10(&VAR_18->mtx);
   return (0);
  }
 }
 FUNC_2(&VAR_18->mac_lomac, sizeof(VAR_18->mac_lomac));



 FUNC_5(VAR_7, &VAR_18->mac_lomac);





 FUNC_4(VAR_6, &VAR_18->mac_lomac);
 if (!FUNC_6(&VAR_7->ml_single,
     &VAR_18->mac_lomac.ml_rangelow))
  VAR_18->mac_lomac.ml_rangelow = VAR_7->ml_single;
 VAR_18->mac_lomac.ml_rangehigh = VAR_7->ml_single;
 VAR_18->mac_lomac.ml_flags |= VAR_1;
 FUNC_15(VAR_5);
 VAR_5->td_flags |= VAR_3 | VAR_4;
 FUNC_16(VAR_5);




 FUNC_5(&VAR_18->mac_lomac, &VAR_17);
 FUNC_10(&VAR_18->mtx);

 FUNC_14(&VAR_11, ((void*)0), 0, VAR_2);
 FUNC_8(&VAR_11, VAR_6);
 FUNC_13(&VAR_11);
 VAR_14 = FUNC_11(&VAR_11);

 FUNC_14(&VAR_12, ((void*)0), 0, VAR_2);
 FUNC_8(&VAR_12, &VAR_18->mac_lomac);
 FUNC_13(&VAR_12);
 VAR_16 = FUNC_11(&VAR_12);

 FUNC_14(&VAR_13, ((void*)0), 0, VAR_2);
 FUNC_8(&VAR_13, VAR_7);
 FUNC_13(&VAR_13);
 VAR_15 = FUNC_11(&VAR_13);

 VAR_21 = VAR_20->p_pgrp->pg_id;
 if (VAR_10 != ((void*)0) && FUNC_1(VAR_10, &VAR_19, VAR_5->td_ucred) == 0) {
  FUNC_3(VAR_0, "LOMAC: level-%s subject p%dg%du%d:%s demoted to"
      " level %s after %s a level-%s %s (inode=%ju, "
      "mountpount=%s)\n",
      VAR_14, VAR_20->p_pid, VAR_21, VAR_5->td_ucred->cr_uid,
      VAR_20->p_comm, VAR_16, VAR_8, VAR_15, VAR_9,
      (uintmax_t)VAR_19.va_fileid, VAR_10->v_mount->mnt_stat.f_mntonname);
 } else {
  FUNC_3(VAR_0, "LOMAC: level-%s subject p%dg%du%d:%s demoted to"
      " level %s after %s a level-%s %s\n",
      VAR_14, VAR_20->p_pid, VAR_21, VAR_5->td_ucred->cr_uid,
      VAR_20->p_comm, VAR_16, VAR_8, VAR_15, VAR_9);
 }

 FUNC_12(&VAR_11);
 FUNC_12(&VAR_12);
 FUNC_12(&VAR_13);

 return (0);
}
