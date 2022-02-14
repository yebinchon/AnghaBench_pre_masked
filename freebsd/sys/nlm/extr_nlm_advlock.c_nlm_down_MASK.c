
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct nlm_feedback_arg {int nf_printed; struct nfsmount* nf_nmp; } ;
struct nfsmount {int nm_state; TYPE_2__* nm_mountp; int nm_mtx; } ;
struct TYPE_3__ {int f_mntfromname; int f_fsid; } ;
struct TYPE_4__ {TYPE_1__ mnt_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct thread*,int ,char const*,int) ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct nlm_feedback_arg *VAR_3, struct thread *VAR_4,
    const char *VAR_5, int VAR_6)
{
 struct nfsmount *VAR_7 = VAR_3->nf_nmp;

 if (VAR_7 == ((void*)0))
  return;
 FUNC_0(&VAR_7->nm_mtx);
 if (!(VAR_7->nm_state & VAR_0)) {
  VAR_7->nm_state |= VAR_0;
  FUNC_1(&VAR_7->nm_mtx);
  FUNC_3(&VAR_7->nm_mountp->mnt_stat.f_fsid,
      VAR_2, 0);
 } else {
  FUNC_1(&VAR_7->nm_mtx);
 }

 VAR_3->nf_printed = VAR_1;
 FUNC_2(VAR_4, VAR_7->nm_mountp->mnt_stat.f_mntfromname, VAR_5, VAR_6);
}
