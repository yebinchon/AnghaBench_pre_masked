
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ufs2_daddr_t ;
struct ucred {scalar_t__ cr_uid; } ;
struct inode {scalar_t__ i_uid; struct dquot** i_dquot; } ;
struct dquot {scalar_t__ dq_curblocks; scalar_t__ dq_bhardlimit; int dq_flags; scalar_t__ dq_bsoftlimit; scalar_t__ dq_btime; } ;
struct TYPE_6__ {scalar_t__* um_btime; } ;
struct TYPE_4__ {int f_mntonname; } ;
struct TYPE_5__ {TYPE_1__ mnt_stat; } ;


 int FUNC_0 (struct dquot*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_4, ufs2_daddr_t VAR_5, struct ucred *VAR_6,
    int VAR_7, int *VAR_8)
{
 struct dquot *VAR_9 = VAR_4->i_dquot[VAR_7];
 ufs2_daddr_t VAR_10 = VAR_9->dq_curblocks + VAR_5;




 if (VAR_10 >= VAR_9->dq_bhardlimit && VAR_9->dq_bhardlimit) {
  if ((VAR_9->dq_flags & VAR_0) == 0 &&
      VAR_4->i_uid == VAR_6->cr_uid) {
   VAR_9->dq_flags |= VAR_0;
   FUNC_0(VAR_9);
   FUNC_3("\n%s: write failed, %s disk limit reached\n",
       FUNC_2(VAR_4)->mnt_stat.f_mntonname,
       VAR_2[VAR_7]);
   return (VAR_1);
  }
  FUNC_0(VAR_9);
  return (VAR_1);
 }




 if (VAR_10 >= VAR_9->dq_bsoftlimit && VAR_9->dq_bsoftlimit) {
  if (VAR_9->dq_curblocks < VAR_9->dq_bsoftlimit) {
   VAR_9->dq_btime = VAR_3 + FUNC_1(VAR_4)->um_btime[VAR_7];
   if (VAR_4->i_uid == VAR_6->cr_uid)
    *VAR_8 = 1;
   return (0);
  }
  if (VAR_3 > VAR_9->dq_btime) {
   if ((VAR_9->dq_flags & VAR_0) == 0 &&
       VAR_4->i_uid == VAR_6->cr_uid) {
    VAR_9->dq_flags |= VAR_0;
    FUNC_0(VAR_9);
    FUNC_3("\n%s: write failed, %s "
        "disk quota exceeded for too long\n",
        FUNC_2(VAR_4)->mnt_stat.f_mntonname,
        VAR_2[VAR_7]);
    return (VAR_1);
   }
   FUNC_0(VAR_9);
   return (VAR_1);
  }
 }
 return (0);
}
