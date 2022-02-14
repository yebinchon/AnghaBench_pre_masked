
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct msdosfsmount {int pm_bpcluster; int pm_devvp; } ;
struct denode {scalar_t__ de_StartCluster; int de_Attributes; TYPE_1__* de_fc; struct msdosfsmount* de_pmp; } ;
struct buf {int dummy; } ;
struct TYPE_2__ {scalar_t__ fc_frcn; scalar_t__ fc_fsrcn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct buf*) ;
 int FUNC_1 (struct buf*) ;
 int FUNC_2 (struct msdosfsmount*,scalar_t__,scalar_t__,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (struct msdosfsmount*,scalar_t__,int *) ;
 int FUNC_4 (struct msdosfsmount*,int ) ;
 int FUNC_5 (int ,struct msdosfsmount*,scalar_t__,int ,scalar_t__) ;
 int FUNC_6 (struct denode*,size_t,scalar_t__,scalar_t__) ;
 struct buf* FUNC_7 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (struct denode*,int,int ,scalar_t__*,int ) ;
 int FUNC_9 (char*) ;

int
FUNC_10(struct denode *VAR_10, u_long VAR_11, struct buf **VAR_12, u_long *VAR_13,
    int VAR_14)
{
 int VAR_15;
 u_long VAR_16;
 u_long VAR_17, VAR_18;
 struct msdosfsmount *VAR_19 = VAR_10->de_pmp;
 struct buf *VAR_20;




 if (VAR_10->de_StartCluster == VAR_9
     && (VAR_10->de_Attributes & VAR_0)) {



  return (VAR_4);
 }





 if (VAR_10->de_fc[VAR_7].fc_frcn == VAR_6 &&
     VAR_10->de_StartCluster != 0) {
  VAR_15 = FUNC_8(VAR_10, 0xffff, 0, &VAR_17, 0);

  if (VAR_15 != VAR_3)
   return (VAR_15);
 }

 VAR_10->de_fc[VAR_8].fc_frcn =
     VAR_10->de_fc[VAR_7].fc_frcn;
 VAR_10->de_fc[VAR_8].fc_fsrcn =
     VAR_10->de_fc[VAR_7].fc_fsrcn;
 while (VAR_11 > 0) {
  if (VAR_10->de_StartCluster == 0)
   VAR_17 = 0;
  else
   VAR_17 = VAR_10->de_fc[VAR_7].fc_fsrcn + 1;
  VAR_15 = FUNC_2(VAR_19, VAR_17, VAR_11, VAR_1, &VAR_17, &VAR_18);
  if (VAR_15)
   return (VAR_15);

  VAR_11 -= VAR_18;





  if (VAR_13) {
   *VAR_13 = VAR_17;
   VAR_13 = ((void*)0);
  }

  if (VAR_10->de_StartCluster == 0) {
   VAR_10->de_StartCluster = VAR_17;
   VAR_16 = 0;
  } else {
   VAR_15 = FUNC_5(VAR_5, VAR_19,
      VAR_10->de_fc[VAR_7].fc_fsrcn,
      0, VAR_17);
   if (VAR_15) {
    FUNC_3(VAR_19, VAR_17, ((void*)0));
    return (VAR_15);
   }
   VAR_16 = VAR_10->de_fc[VAR_7].fc_frcn + 1;
  }





  FUNC_6(VAR_10, VAR_7, VAR_16 + VAR_18 - 1, VAR_17 + VAR_18 - 1);

  if ((VAR_14 & VAR_2) &&
      (VAR_10->de_Attributes & VAR_0)) {
   while (VAR_18-- > 0) {
    VAR_20 = FUNC_7(VAR_19->pm_devvp,
        FUNC_4(VAR_19, VAR_17++),
        VAR_19->pm_bpcluster, 0, 0, 0);
    FUNC_1(VAR_20);
    if (VAR_12) {
     *VAR_12 = VAR_20;
     VAR_12 = ((void*)0);
    } else {
     FUNC_0(VAR_20);
    }
   }
  }
 }

 return (0);
}
