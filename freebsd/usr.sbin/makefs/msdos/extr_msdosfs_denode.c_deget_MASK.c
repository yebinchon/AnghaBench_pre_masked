
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ u_long ;
struct vnode {int dummy; } ;
struct msdosfsmount {scalar_t__ pm_rootdirblk; int pm_rootdirsize; scalar_t__ pm_bpcluster; } ;
struct direntry {int dummy; } ;
struct denode {int de_refcnt; int de_Attributes; scalar_t__ de_StartCluster; int de_FileSize; int de_CTime; int de_CDate; int de_ADate; int de_MTime; int de_MDate; int * de_Name; scalar_t__ de_CHun; scalar_t__ de_LowerCase; struct vnode* de_vnode; struct msdosfsmount* de_pmp; scalar_t__ de_inode; scalar_t__ de_diroffset; scalar_t__ de_dirclust; scalar_t__ de_flag; } ;
struct buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct denode*,struct direntry*) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct msdosfsmount*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*) ;
 int VAR_8 ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (struct msdosfsmount*,scalar_t__) ;
 struct denode* FUNC_5 (int,int) ;
 int FUNC_6 (struct denode*,int ) ;
 int FUNC_7 (struct denode*,int,int ,scalar_t__*,int ) ;
 int FUNC_8 (struct msdosfsmount*,scalar_t__,scalar_t__,struct buf**,struct direntry**) ;

int
FUNC_9(struct msdosfsmount *VAR_9, u_long VAR_10, u_long VAR_11,
    struct denode **VAR_12)
{
 int VAR_13;
 uint64_t VAR_14;
 struct direntry *VAR_15;
 struct denode *VAR_16;
 struct buf *VAR_17;

 FUNC_2(("deget(pmp %p, dirclust %lu, diroffset %lx, depp %p)\n",
     VAR_9, VAR_10, VAR_11, VAR_12));





 if (FUNC_1(VAR_9) && VAR_10 == VAR_6)
  VAR_10 = VAR_9->pm_rootdirblk;

 VAR_14 = (uint64_t)VAR_9->pm_bpcluster * VAR_10 + VAR_11;

 VAR_16 = FUNC_5(1, sizeof(*VAR_16));
 VAR_16->de_vnode = ((void*)0);
 VAR_16->de_flag = 0;
 VAR_16->de_dirclust = VAR_10;
 VAR_16->de_diroffset = VAR_11;
 VAR_16->de_inode = VAR_14;
 VAR_16->de_pmp = VAR_9;
 VAR_16->de_refcnt = 1;
 FUNC_6(VAR_16, 0);



 if ((VAR_10 == VAR_6
      || (FUNC_1(VAR_9) && VAR_10 == VAR_9->pm_rootdirblk))
     && VAR_11 == VAR_7) {







  VAR_16->de_vnode = (struct vnode *)-1;

  VAR_16->de_Attributes = VAR_0;
  VAR_16->de_LowerCase = 0;
  if (FUNC_1(VAR_9))
   VAR_16->de_StartCluster = VAR_9->pm_rootdirblk;

  else {
   VAR_16->de_StartCluster = VAR_6;
   VAR_16->de_FileSize = VAR_9->pm_rootdirsize * VAR_4;
  }





  VAR_16->de_CHun = 0;
  VAR_16->de_CTime = 0x0000;
  VAR_16->de_CDate = (0 << VAR_3) | (1 << VAR_2)
      | (1 << VAR_1);

  VAR_16->de_ADate = VAR_16->de_CDate;
  VAR_16->de_MTime = VAR_16->de_CTime;
  VAR_16->de_MDate = VAR_16->de_CDate;

 } else {
  VAR_13 = FUNC_8(VAR_9, VAR_10, VAR_11, &VAR_17, &VAR_15);
  if (VAR_13) {
   VAR_16->de_Name[0] = VAR_8;

   *VAR_12 = ((void*)0);
   return (VAR_13);
  }
  (void)FUNC_0(VAR_16, VAR_15);
  FUNC_3(VAR_17);
 }





 if (VAR_16->de_Attributes & VAR_0) {






  u_long VAR_18;






  if (VAR_11 == 0 && VAR_16->de_StartCluster != VAR_10) {
   FUNC_2(("deget(): \".\" entry at clust %lu != %lu\n",
       VAR_10, VAR_16->de_StartCluster));

   VAR_16->de_StartCluster = VAR_10;
  }

  if (VAR_16->de_StartCluster != VAR_6) {
   VAR_13 = FUNC_7(VAR_16, 0xffff, 0, &VAR_18, 0);
   if (VAR_13 == VAR_5) {
    VAR_16->de_FileSize = FUNC_4(VAR_9, VAR_18);
    VAR_13 = 0;
   } else {
    FUNC_2(("deget(): pcbmap returned %d\n",
        VAR_13));
   }
  }
 }
 *VAR_12 = VAR_16;
 return (0);
}
