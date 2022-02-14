
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ucred {int dummy; } ;
struct inode {struct dquot** i_dquot; } ;
struct dquot {int dq_curinodes; scalar_t__ dq_isoftlimit; int dq_flags; scalar_t__ dq_itime; } ;
struct TYPE_6__ {scalar_t__* um_itime; } ;
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
 TYPE_2__* FUNC_4 (struct inode*) ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 struct ucred* VAR_5 ;
 struct dquot* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,int,struct ucred*,int,int*) ;
 scalar_t__ FUNC_8 (struct ucred*,int ) ;
 int * VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_9 (char*,int ,int ) ;

int
FUNC_10(struct inode *VAR_11, int VAR_12, struct ucred *VAR_13, int VAR_14)
{
 struct dquot *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;

 FUNC_5(VAR_13 != VAR_5 || (VAR_14 & VAR_3) != 0);




 if (VAR_12 == 0)
  return (0);
 if (VAR_12 < 0) {
  for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
   if ((VAR_15 = VAR_11->i_dquot[VAR_16]) == VAR_6)
    continue;
   FUNC_0(VAR_15);
   FUNC_2(VAR_15, VAR_7+1, "chkiq1");
   if (VAR_15->dq_curinodes >= -VAR_12)
    VAR_15->dq_curinodes += VAR_12;
   else
    VAR_15->dq_curinodes = 0;
   VAR_15->dq_flags &= ~VAR_1;
   VAR_15->dq_flags |= VAR_2;
   FUNC_1(VAR_15);
  }
  return (0);
 }
 if ((VAR_14 & VAR_3) == 0 &&
     FUNC_8(VAR_13, VAR_8))
  VAR_19 = 1;
 else
  VAR_19 = 0;
 for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
  if ((VAR_15 = VAR_11->i_dquot[VAR_16]) == VAR_6)
   continue;
  VAR_18 = 0;
  FUNC_0(VAR_15);
  FUNC_2(VAR_15, VAR_7+1, "chkiq2");
  if (VAR_19) {
   VAR_17 = FUNC_7(VAR_11, VAR_12, VAR_13, VAR_16, &VAR_18);
   if (VAR_17) {




    while (VAR_16 > 0) {
     --VAR_16;
     VAR_15 = VAR_11->i_dquot[VAR_16];
     if (VAR_15 == VAR_6)
      continue;
     FUNC_0(VAR_15);
     FUNC_2(VAR_15, VAR_7+1, "chkiq3");
     if (VAR_15->dq_curinodes >= VAR_12)
      VAR_15->dq_curinodes -= VAR_12;
     else
      VAR_15->dq_curinodes = 0;
     VAR_15->dq_flags &= ~VAR_1;
     VAR_15->dq_flags |= VAR_2;
     FUNC_1(VAR_15);
    }
    return (VAR_17);
   }
  }

  if (VAR_15->dq_curinodes + VAR_12 >= VAR_15->dq_isoftlimit &&
      VAR_15->dq_curinodes < VAR_15->dq_isoftlimit)
   VAR_15->dq_itime = VAR_10 + FUNC_3(VAR_11)->um_itime[VAR_16];
  VAR_15->dq_curinodes += VAR_12;
  VAR_15->dq_flags |= VAR_2;
  FUNC_1(VAR_15);
  if (VAR_18)
   FUNC_9("\n%s: warning, %s inode quota exceeded\n",
       FUNC_4(VAR_11)->mnt_stat.f_mntonname,
       VAR_9[VAR_16]);
 }
 return (0);
}
