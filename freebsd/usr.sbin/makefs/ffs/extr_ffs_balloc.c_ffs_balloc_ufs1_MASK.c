
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct inode {scalar_t__ i_ffs1_size; scalar_t__* i_ffs1_db; scalar_t__* i_ffs1_ib; int i_devvp; struct fs* i_fs; } ;
struct indir {size_t in_off; scalar_t__ in_lbn; } ;
struct fs {int fs_bsize; } ;
struct buf {void* b_blkno; scalar_t__ b_data; } ;
typedef scalar_t__ off_t ;
typedef scalar_t__ int32_t ;
typedef scalar_t__ daddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct fs*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct fs*,scalar_t__) ;
 int FUNC_4 (struct fs*,struct inode*,scalar_t__) ;
 int FUNC_5 (int ,scalar_t__,int,int *,struct buf**) ;
 int FUNC_6 (struct buf*) ;
 int FUNC_7 (struct buf*) ;
 int FUNC_8 (struct buf*) ;
 int FUNC_9 (struct inode*,scalar_t__,scalar_t__,int,scalar_t__*) ;
 scalar_t__ FUNC_10 (struct inode*,scalar_t__,int,scalar_t__*) ;
 int FUNC_11 (struct fs*,int) ;
 void* FUNC_12 (struct fs*,scalar_t__) ;
 struct buf* FUNC_13 (int ,scalar_t__,int,int ,int ,int ) ;
 scalar_t__ FUNC_14 (struct fs*,scalar_t__) ;
 scalar_t__ FUNC_15 (struct fs*,scalar_t__) ;
 int FUNC_16 (struct inode*,scalar_t__,struct indir*,int*) ;
 scalar_t__ FUNC_17 (scalar_t__,int const) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static int
FUNC_19(struct inode *VAR_3, off_t VAR_4, int VAR_5, struct buf **VAR_6)
{
 daddr_t VAR_7, VAR_8;
 int VAR_9;
 int32_t VAR_10;
 struct buf *VAR_11, *VAR_12;
 struct fs *VAR_13 = VAR_3->i_fs;
 struct indir VAR_14[VAR_2 + 2];
 daddr_t VAR_15, VAR_16;
 int32_t *VAR_17;
 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 int32_t *VAR_23, VAR_24[VAR_2 + 1];
 int32_t *VAR_25;
 const int VAR_26 = FUNC_0(VAR_13);

 VAR_7 = FUNC_14(VAR_13, VAR_4);
 VAR_9 = FUNC_3(VAR_13, VAR_4) + VAR_5;
 if (VAR_6 != ((void*)0)) {
  *VAR_6 = ((void*)0);
 }

 FUNC_2(VAR_9 <= VAR_13->fs_bsize);
 if (VAR_7 < 0)
  return (VAR_0);







 VAR_8 = FUNC_14(VAR_13, VAR_3->i_ffs1_size);
 if (VAR_8 < VAR_1 && VAR_8 < VAR_7) {
  VAR_10 = VAR_8;
  VAR_18 = FUNC_4(VAR_13, VAR_3, VAR_10);
  if (VAR_18 < VAR_13->fs_bsize && VAR_18 > 0) {
   FUNC_18("need to ffs_realloccg; not supported!");
   FUNC_1();
  }
 }





 if (VAR_7 < VAR_1) {
  VAR_10 = FUNC_17(VAR_3->i_ffs1_db[VAR_7], VAR_26);
  if (VAR_10 != 0 && VAR_3->i_ffs1_size >=
      (uint64_t)FUNC_15(VAR_13, VAR_7 + 1)) {
   if (VAR_6 != ((void*)0)) {
    VAR_22 = FUNC_5(VAR_3->i_devvp, VAR_7, VAR_13->fs_bsize,
        ((void*)0), VAR_6);
    if (VAR_22) {
     FUNC_6(*VAR_6);
     return (VAR_22);
    }
   }
   return (0);
  }
  if (VAR_10 != 0) {





   VAR_18 = FUNC_11(VAR_13, FUNC_3(VAR_13, VAR_3->i_ffs1_size));
   VAR_19 = FUNC_11(VAR_13, VAR_9);
   if (VAR_19 <= VAR_18) {







    if (VAR_6 != ((void*)0)) {
     VAR_22 = FUNC_5(VAR_3->i_devvp, VAR_7, VAR_18,
         ((void*)0), VAR_6);
     if (VAR_22) {
      FUNC_6(*VAR_6);
      return (VAR_22);
     }
    }
    return 0;
   } else {
    FUNC_18("need to ffs_realloccg; not supported!");
    FUNC_1();
   }
  } else {






   if (VAR_3->i_ffs1_size < (uint64_t)FUNC_15(VAR_13, VAR_7 + 1))
    VAR_19 = FUNC_11(VAR_13, VAR_9);
   else
    VAR_19 = VAR_13->fs_bsize;
   VAR_22 = FUNC_9(VAR_3, VAR_7,
       FUNC_10(VAR_3, VAR_7, (int)VAR_7,
    &VAR_3->i_ffs1_db[0]),
    VAR_19, &VAR_15);
   if (VAR_22)
    return (VAR_22);
   if (VAR_6 != ((void*)0)) {
    VAR_11 = FUNC_13(VAR_3->i_devvp, VAR_7, VAR_19, 0, 0, 0);
    VAR_11->b_blkno = FUNC_12(VAR_13, VAR_15);
    FUNC_8(VAR_11);
    *VAR_6 = VAR_11;
   }
  }
  VAR_3->i_ffs1_db[VAR_7] = FUNC_17((int32_t)VAR_15, VAR_26);
  return (0);
 }





 VAR_16 = 0;
 if ((VAR_22 = FUNC_16(VAR_3, VAR_7, VAR_14, &VAR_20)) != 0)
  return (VAR_22);

 if (VAR_20 < 1) {
  FUNC_18("ffs_balloc: ufs_getlbns returned indirect block");
  FUNC_1();
 }





 --VAR_20;
 VAR_10 = FUNC_17(VAR_3->i_ffs1_ib[VAR_14[0].in_off], VAR_26);
 VAR_25 = ((void*)0);
 VAR_23 = VAR_24;
 if (VAR_10 == 0) {
  VAR_16 = FUNC_10(VAR_3, VAR_7, 0, (int32_t *)0);
  VAR_22 = FUNC_9(VAR_3, VAR_7, VAR_16, (int)VAR_13->fs_bsize, &VAR_15);
  if (VAR_22)
   return VAR_22;
  VAR_10 = VAR_15;
  *VAR_23++ = VAR_10;
  VAR_11 = FUNC_13(VAR_3->i_devvp, VAR_14[1].in_lbn, VAR_13->fs_bsize, 0, 0, 0);
  VAR_11->b_blkno = FUNC_12(VAR_13, VAR_10);
  FUNC_8(VAR_11);




  if ((VAR_22 = FUNC_7(VAR_11)) != 0)
   return VAR_22;
  VAR_25 = &VAR_3->i_ffs1_ib[VAR_14[0].in_off];
  *VAR_25 = FUNC_17((int32_t)VAR_10, VAR_26);
 }





 for (VAR_21 = 1;;) {
  VAR_22 = FUNC_5(VAR_3->i_devvp, VAR_14[VAR_21].in_lbn, VAR_13->fs_bsize,
      ((void*)0), &VAR_11);
  if (VAR_22) {
   FUNC_6(VAR_11);
   return VAR_22;
  }
  VAR_17 = (int32_t *)VAR_11->b_data;
  VAR_10 = FUNC_17(VAR_17[VAR_14[VAR_21].in_off], VAR_26);
  if (VAR_21 == VAR_20)
   break;
  VAR_21++;
  if (VAR_10 != 0) {
   FUNC_6(VAR_11);
   continue;
  }
  if (VAR_16 == 0)
   VAR_16 = FUNC_10(VAR_3, VAR_7, 0, (int32_t *)0);
  VAR_22 = FUNC_9(VAR_3, VAR_7, VAR_16, (int)VAR_13->fs_bsize, &VAR_15);
  if (VAR_22) {
   FUNC_6(VAR_11);
   return VAR_22;
  }
  VAR_10 = VAR_15;
  *VAR_23++ = VAR_10;
  VAR_12 = FUNC_13(VAR_3->i_devvp, VAR_14[VAR_21].in_lbn, VAR_13->fs_bsize, 0, 0, 0);
  VAR_12->b_blkno = FUNC_12(VAR_13, VAR_10);
  FUNC_8(VAR_12);





  if ((VAR_22 = FUNC_7(VAR_12)) != 0) {
   FUNC_6(VAR_11);
   return VAR_22;
  }
  VAR_17[VAR_14[VAR_21 - 1].in_off] = FUNC_17(VAR_10, VAR_26);

  FUNC_7(VAR_11);
 }





 if (VAR_10 == 0) {
  VAR_16 = FUNC_10(VAR_3, VAR_7, VAR_14[VAR_20].in_off, &VAR_17[0]);
  VAR_22 = FUNC_9(VAR_3, VAR_7, VAR_16, (int)VAR_13->fs_bsize, &VAR_15);
  if (VAR_22) {
   FUNC_6(VAR_11);
   return VAR_22;
  }
  VAR_10 = VAR_15;
  *VAR_23++ = VAR_10;
  if (VAR_6 != ((void*)0)) {
   VAR_12 = FUNC_13(VAR_3->i_devvp, VAR_7, VAR_13->fs_bsize, 0, 0, 0);
   VAR_12->b_blkno = FUNC_12(VAR_13, VAR_10);
   FUNC_8(VAR_12);
   *VAR_6 = VAR_12;
  }
  VAR_17[VAR_14[VAR_20].in_off] = FUNC_17(VAR_10, VAR_26);





  FUNC_7(VAR_11);
  return (0);
 }
 FUNC_6(VAR_11);
 if (VAR_6 != ((void*)0)) {
  VAR_22 = FUNC_5(VAR_3->i_devvp, VAR_7, (int)VAR_13->fs_bsize, ((void*)0), &VAR_12);
  if (VAR_22) {
   FUNC_6(VAR_12);
   return VAR_22;
  }
  *VAR_6 = VAR_12;
 }
 return (0);
}
