
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct ucred {int dummy; } ;
struct msdosfsmount {int pm_crbomask; scalar_t__ pm_bpcluster; int pm_devvp; } ;
struct denode {int de_Attributes; int de_FileSize; int de_StartCluster; int de_flag; int de_diroffset; int de_dirclust; int * de_vnode; int de_Name; struct msdosfsmount* de_pmp; } ;
struct buf {scalar_t__ b_data; } ;
typedef int daddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct msdosfsmount*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct msdosfsmount*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (int ,int ,scalar_t__,int ,struct buf**) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (struct buf*) ;
 int FUNC_7 (struct msdosfsmount*,int) ;
 scalar_t__ FUNC_8 (struct msdosfsmount*,int) ;
 int FUNC_9 (struct msdosfsmount*,int) ;
 int FUNC_10 (struct denode*,int,struct ucred*) ;
 int FUNC_11 (int ,struct msdosfsmount*,int,int*,int ) ;
 int FUNC_12 (struct denode*,scalar_t__) ;
 int FUNC_13 (struct denode*,int ,int ,int) ;
 int FUNC_14 (struct msdosfsmount*,int) ;
 int FUNC_15 (scalar_t__,int ,scalar_t__) ;
 int FUNC_16 (struct denode*,scalar_t__,int ,int*,int ) ;

int
FUNC_17(struct denode *VAR_8, u_long VAR_9, int VAR_10, struct ucred *VAR_11)
{
 int VAR_12;
 int VAR_13;
 u_long VAR_14;
 u_long VAR_15;
 daddr_t VAR_16;
 int VAR_17;
 int VAR_18 = VAR_8->de_Attributes & VAR_0;
 struct buf *VAR_19;
 struct msdosfsmount *VAR_20 = VAR_8->de_pmp;

 FUNC_2(("detrunc(): file %s, length %lu, flags %x\n",
     VAR_8->de_Name, VAR_9, VAR_10));
 if (VAR_8->de_vnode != ((void*)0) && !FUNC_0(VAR_20)) {
  FUNC_2(("detrunc(): can't truncate root directory, "
      "clust %ld, offset %ld\n",
      VAR_8->de_dirclust, VAR_8->de_diroffset));

  return (VAR_4);
 }

 if (VAR_8->de_FileSize < VAR_9)
  return FUNC_10(VAR_8, VAR_9, VAR_11);
 if (VAR_9 == 0) {
  VAR_15 = VAR_8->de_StartCluster;
  VAR_8->de_StartCluster = 0;
  VAR_14 = ~0;
 } else {
  VAR_12 = FUNC_16(VAR_8, FUNC_8(VAR_20, VAR_9) - 1, 0,
      &VAR_14, 0);
  if (VAR_12) {
   FUNC_2(("detrunc(): pcbmap fails %d\n",
       VAR_12));
   return (VAR_12);
  }
 }

 FUNC_12(VAR_8, FUNC_8(VAR_20, VAR_9));






 if ((VAR_17 = VAR_9 & VAR_20->pm_crbomask) != 0) {
  if (VAR_18) {
   VAR_16 = FUNC_7(VAR_20, VAR_14);
   VAR_12 = FUNC_4(VAR_20->pm_devvp, VAR_16, VAR_20->pm_bpcluster,
       0, &VAR_19);
   if (VAR_12) {
    FUNC_5(VAR_19);
    FUNC_2(("detrunc(): bread fails %d\n",
        VAR_12));

    return (VAR_12);
   }
   FUNC_15(VAR_19->b_data + VAR_17, 0, VAR_20->pm_bpcluster - VAR_17);
   if (VAR_10 & VAR_7)
    FUNC_6(VAR_19);
   else
    FUNC_3(VAR_19);
  }
 }





 VAR_8->de_FileSize = VAR_9;
 if (!VAR_18)
  VAR_8->de_flag |= VAR_3|VAR_2;
 FUNC_2(("detrunc(): allerror %d, eofentry %lu\n",
     VAR_13, VAR_14));





 if (VAR_14 != ~0) {
  VAR_12 = FUNC_11(VAR_5, VAR_20, VAR_14,
     &VAR_15, VAR_1);
  if (VAR_12) {
   FUNC_2(("detrunc(): fatentry errors %d\n",
       VAR_12));
   return (VAR_12);
  }
  FUNC_13(VAR_8, VAR_6, FUNC_9(VAR_20, VAR_9 - 1),
      VAR_14);
 }





 if (VAR_15 != 0 && !FUNC_1(VAR_20, VAR_15))
  FUNC_14(VAR_20, VAR_15);

 return (VAR_13);
}
