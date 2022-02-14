
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int dummy; } ;
struct nlm_feedback_arg {int nf_printed; struct nfsmount* nf_nmp; } ;
struct nfsmount {int nm_state; int nm_mtx; TYPE_2__* nm_mountp; } ;
struct TYPE_3__ {int f_fsid; int f_mntfromname; } ;
struct TYPE_4__ {TYPE_1__ mnt_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct thread*,int ,char const*,int ) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct nlm_feedback_arg *VAR_2, struct thread *VAR_3,
    const char *VAR_4)
{
 struct nfsmount *VAR_5 = VAR_2->nf_nmp;

 if (!VAR_2->nf_printed)
  return;

 FUNC_2(VAR_3, VAR_5->nm_mountp->mnt_stat.f_mntfromname, VAR_4, 0);

 FUNC_0(&VAR_5->nm_mtx);
 if (VAR_5->nm_state & VAR_0) {
  VAR_5->nm_state &= ~VAR_0;
  FUNC_1(&VAR_5->nm_mtx);
  FUNC_3(&VAR_5->nm_mountp->mnt_stat.f_fsid,
      VAR_1, 1);
 } else {
  FUNC_1(&VAR_5->nm_mtx);
 }
}
