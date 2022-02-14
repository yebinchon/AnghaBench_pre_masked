
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ufs_lbn_t ;
typedef void* u_int ;
struct vnode {int dummy; } ;
struct uio {scalar_t__ uio_rw; scalar_t__ uio_resid; scalar_t__ uio_offset; } ;
struct ufs2_dinode {scalar_t__ di_extsize; } ;
struct inode {struct ufs2_dinode* i_din2; } ;
struct fs {scalar_t__ fs_magic; long fs_bsize; } ;
struct buf {scalar_t__ b_data; scalar_t__ b_resid; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;


 scalar_t__ VAR_0 ;
 struct fs* FUNC_0 (struct inode*) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct inode* FUNC_2 (struct vnode*) ;
 long FUNC_3 (struct fs*,scalar_t__) ;
 int FUNC_4 (struct vnode*,scalar_t__,long,int ,struct buf**) ;
 int FUNC_5 (struct vnode*,scalar_t__,long,scalar_t__*,void**,int,int ,struct buf**) ;
 int FUNC_6 (struct buf*) ;
 scalar_t__ FUNC_7 (struct fs*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct fs*,scalar_t__) ;
 int FUNC_9 (char*) ;
 void* FUNC_10 (struct fs*,scalar_t__,scalar_t__) ;
 int FUNC_11 (char*,int,struct uio*) ;
 int FUNC_12 (struct buf*,int) ;

__attribute__((used)) static int
FUNC_13(struct vnode *VAR_3, struct uio *VAR_4, int VAR_5)
{
 struct inode *VAR_6;
 struct ufs2_dinode *VAR_7;
 struct fs *VAR_8;
 struct buf *VAR_9;
 ufs_lbn_t VAR_10, VAR_11;
 off_t VAR_12;
 long VAR_13, VAR_14, VAR_15;
 ssize_t VAR_16;
 int VAR_17;

 VAR_6 = FUNC_2(VAR_3);
 VAR_8 = FUNC_0(VAR_6);
 VAR_7 = VAR_6->i_din2;






 VAR_16 = VAR_4->uio_resid;
 FUNC_1(VAR_16 >= 0, ("ffs_extread: uio->uio_resid < 0"));
 if (VAR_16 == 0)
  return (0);
 FUNC_1(VAR_4->uio_offset >= 0, ("ffs_extread: uio->uio_offset < 0"));

 for (VAR_17 = 0, VAR_9 = ((void*)0); VAR_4->uio_resid > 0; VAR_9 = ((void*)0)) {
  if ((VAR_12 = VAR_7->di_extsize - VAR_4->uio_offset) <= 0)
   break;
  VAR_10 = FUNC_7(VAR_8, VAR_4->uio_offset);
  VAR_11 = VAR_10 + 1;







  VAR_13 = FUNC_10(VAR_8, VAR_7->di_extsize, VAR_10);
  VAR_15 = FUNC_3(VAR_8, VAR_4->uio_offset);






  VAR_14 = VAR_8->fs_bsize - VAR_15;






  if (VAR_4->uio_resid < VAR_14)
   VAR_14 = VAR_4->uio_resid;
  if (VAR_12 < VAR_14)
   VAR_14 = VAR_12;

  if (FUNC_8(VAR_8, VAR_11) >= VAR_7->di_extsize) {



   VAR_17 = FUNC_4(VAR_3, -1 - VAR_10, VAR_13, VAR_1, &VAR_9);
  } else {







   u_int VAR_18 = FUNC_10(VAR_8, VAR_7->di_extsize, VAR_11);

   VAR_11 = -1 - VAR_11;
   VAR_17 = FUNC_5(VAR_3, -1 - VAR_10,
       VAR_13, &VAR_11, &VAR_18, 1, VAR_1, &VAR_9);
  }
  if (VAR_17) {
   FUNC_6(VAR_9);
   VAR_9 = ((void*)0);
   break;
  }
  VAR_13 -= VAR_9->b_resid;
  if (VAR_13 < VAR_14) {
   if (VAR_13 == 0)
    break;
   VAR_14 = VAR_13;
  }

  VAR_17 = FUNC_11((char *)VAR_9->b_data + VAR_15,
     (int)VAR_14, VAR_4);
  if (VAR_17)
   break;
  FUNC_12(VAR_9, VAR_5);
 }







 if (VAR_9 != ((void*)0))
  FUNC_12(VAR_9, VAR_5);
 return (VAR_17);
}
