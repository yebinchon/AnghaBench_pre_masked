
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ufs2_daddr_t ;
struct vnode {int v_vflag; } ;
struct ucred {int dummy; } ;
struct inode {struct dquot** i_dquot; scalar_t__ i_gid; scalar_t__ i_uid; } ;
struct dquot {scalar_t__ dq_curblocks; scalar_t__ dq_bsoftlimit; int dq_flags; scalar_t__ dq_btime; } ;
struct TYPE_6__ {scalar_t__* um_btime; } ;
struct TYPE_4__ {int f_mntonname; } ;
struct TYPE_5__ {TYPE_1__ mnt_stat; } ;


 int VAR_0 ;
 int FUNC_0 (struct dquot*) ;
 int FUNC_1 (struct dquot*) ;
 int FUNC_2 (struct dquot*,scalar_t__,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_3 (struct inode*) ;
 struct vnode* FUNC_4 (struct inode*) ;
 TYPE_2__* FUNC_5 (struct inode*) ;
 int VAR_4 ;
 int FUNC_6 (int) ;
 struct ucred* VAR_5 ;
 struct dquot* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (struct inode*,scalar_t__,struct ucred*,int,int*) ;
 int FUNC_8 (struct inode*) ;
 scalar_t__ FUNC_9 (struct ucred*,int ) ;
 int * VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_10 (char*,int ,int ) ;

int
FUNC_11(struct inode *VAR_12, ufs2_daddr_t VAR_13, struct ucred *VAR_14, int VAR_15)
{
 struct dquot *VAR_16;
 ufs2_daddr_t VAR_17;
 struct vnode *VAR_18 = FUNC_4(VAR_12);
 int VAR_19, VAR_20, VAR_21, VAR_22;

 FUNC_6(VAR_14 != VAR_5 || (VAR_15 & VAR_3) != 0);




 if ((VAR_18->v_vflag & VAR_9) != 0)
  return (0);




 if ((int)VAR_12->i_uid < 0 || (int)VAR_12->i_gid < 0)
  return (0);




 if (VAR_13 == 0)
  return (0);
 if (VAR_13 < 0) {
  for (VAR_19 = 0; VAR_19 < VAR_4; VAR_19++) {
   if ((VAR_16 = VAR_12->i_dquot[VAR_19]) == VAR_6)
    continue;
   FUNC_0(VAR_16);
   FUNC_2(VAR_16, VAR_7+1, "chkdq1");
   VAR_17 = VAR_16->dq_curblocks + VAR_13;
   if (VAR_17 >= 0)
    VAR_16->dq_curblocks = VAR_17;
   else
    VAR_16->dq_curblocks = 0;
   VAR_16->dq_flags &= ~VAR_1;
   VAR_16->dq_flags |= VAR_2;
   FUNC_1(VAR_16);
  }
  return (0);
 }
 if ((VAR_15 & VAR_3) == 0 &&
     FUNC_9(VAR_14, VAR_8))
  VAR_22 = 1;
 else
  VAR_22 = 0;
 for (VAR_19 = 0; VAR_19 < VAR_4; VAR_19++) {
  if ((VAR_16 = VAR_12->i_dquot[VAR_19]) == VAR_6)
   continue;
  VAR_21 = 0;
  FUNC_0(VAR_16);
  FUNC_2(VAR_16, VAR_7+1, "chkdq2");
  if (VAR_22) {
   VAR_20 = FUNC_7(VAR_12, VAR_13, VAR_14, VAR_19, &VAR_21);
   if (VAR_20) {




    while (VAR_19 > 0) {
     --VAR_19;
     VAR_16 = VAR_12->i_dquot[VAR_19];
     if (VAR_16 == VAR_6)
      continue;
     FUNC_0(VAR_16);
     FUNC_2(VAR_16, VAR_7+1, "chkdq3");
     VAR_17 = VAR_16->dq_curblocks - VAR_13;
     if (VAR_17 >= 0)
      VAR_16->dq_curblocks = VAR_17;
     else
      VAR_16->dq_curblocks = 0;
     VAR_16->dq_flags &= ~VAR_1;
     VAR_16->dq_flags |= VAR_2;
     FUNC_1(VAR_16);
    }
    return (VAR_20);
   }
  }

  if (VAR_16->dq_curblocks + VAR_13 >= VAR_16->dq_bsoftlimit &&
      VAR_16->dq_curblocks < VAR_16->dq_bsoftlimit)
   VAR_16->dq_btime = VAR_11 + FUNC_3(VAR_12)->um_btime[VAR_19];
  VAR_16->dq_curblocks += VAR_13;
  VAR_16->dq_flags |= VAR_2;
  FUNC_1(VAR_16);
  if (VAR_21)
   FUNC_10("\n%s: warning, %s disk quota exceeded\n",
       FUNC_5(VAR_12)->mnt_stat.f_mntonname,
       VAR_10[VAR_19]);
 }
 return (0);
}
