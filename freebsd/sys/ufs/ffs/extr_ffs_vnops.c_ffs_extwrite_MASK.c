
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uoff_t ;
typedef int ufs_lbn_t ;
struct vnode {int dummy; } ;
struct uio {scalar_t__ uio_rw; scalar_t__ uio_offset; scalar_t__ uio_resid; } ;
struct ufs2_dinode {scalar_t__ di_extsize; int di_mode; } ;
struct ucred {int dummy; } ;
struct inode {int i_mode; int i_flag; struct ufs2_dinode* i_din2; } ;
struct fs {scalar_t__ fs_magic; int fs_bsize; } ;
struct buf {int b_flags; int b_resid; scalar_t__ b_data; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct fs* FUNC_0 (struct inode*) ;
 int FUNC_1 (int,char*) ;
 int VAR_13 ;
 int FUNC_2 (struct vnode*,scalar_t__,int,struct ucred*,int,struct buf**) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 struct inode* FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (struct fs*,scalar_t__) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct buf*) ;
 int FUNC_9 (struct vnode*,scalar_t__,int,struct ucred*) ;
 int FUNC_10 (struct vnode*,int) ;
 int FUNC_11 (struct fs*,scalar_t__) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (struct ucred*,int ) ;
 int FUNC_14 (struct fs*,scalar_t__,int ) ;
 int FUNC_15 (char*,int,struct uio*) ;
 int FUNC_16 (struct buf*) ;
 int FUNC_17 (struct buf*,int) ;
 scalar_t__ FUNC_18 () ;

__attribute__((used)) static int
FUNC_19(struct vnode *VAR_16, struct uio *VAR_17, int VAR_18, struct ucred *VAR_19)
{
 struct inode *VAR_20;
 struct ufs2_dinode *VAR_21;
 struct fs *VAR_22;
 struct buf *VAR_23;
 ufs_lbn_t VAR_24;
 off_t VAR_25;
 ssize_t VAR_26;
 int VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;

 VAR_20 = FUNC_3(VAR_16);
 VAR_22 = FUNC_0(VAR_20);
 VAR_21 = VAR_20->i_din2;






 if (VAR_18 & VAR_5)
  VAR_17->uio_offset = VAR_21->di_extsize;
 FUNC_1(VAR_17->uio_offset >= 0, ("ffs_extwrite: uio->uio_offset < 0"));
 FUNC_1(VAR_17->uio_resid >= 0, ("ffs_extwrite: uio->uio_resid < 0"));
 if ((uoff_t)VAR_17->uio_offset + VAR_17->uio_resid >
     VAR_14 * VAR_22->fs_bsize)
  return (VAR_2);

 VAR_26 = VAR_17->uio_resid;
 VAR_25 = VAR_21->di_extsize;
 VAR_29 = VAR_8;
 if (VAR_18 & VAR_9)
  VAR_29 |= VAR_9;

 for (VAR_28 = 0; VAR_17->uio_resid > 0;) {
  VAR_24 = FUNC_11(VAR_22, VAR_17->uio_offset);
  VAR_27 = FUNC_6(VAR_22, VAR_17->uio_offset);
  VAR_31 = VAR_22->fs_bsize - VAR_27;
  if (VAR_17->uio_resid < VAR_31)
   VAR_31 = VAR_17->uio_resid;





  if (VAR_22->fs_bsize > VAR_31)
   VAR_29 |= VAR_0;
  else
   VAR_29 &= ~VAR_0;
  VAR_28 = FUNC_2(VAR_16, VAR_17->uio_offset, VAR_31,
      VAR_19, VAR_29, &VAR_23);
  if (VAR_28 != 0)
   break;







  if ((VAR_23->b_flags & VAR_1) == 0 && VAR_22->fs_bsize <= VAR_31)
   FUNC_16(VAR_23);

  if (VAR_17->uio_offset + VAR_31 > VAR_21->di_extsize)
   VAR_21->di_extsize = VAR_17->uio_offset + VAR_31;

  VAR_30 = FUNC_14(VAR_22, VAR_21->di_extsize, VAR_24) - VAR_23->b_resid;
  if (VAR_30 < VAR_31)
   VAR_31 = VAR_30;

  VAR_28 =
      FUNC_15((char *)VAR_23->b_data + VAR_27, (int)VAR_31, VAR_17);

  FUNC_17(VAR_23, VAR_18);
  if (VAR_18 & VAR_9) {
   (void)FUNC_8(VAR_23);
  } else if (FUNC_18() ||
       FUNC_7() ||
       VAR_31 + VAR_27 == VAR_22->fs_bsize ||
       (VAR_18 & (VAR_6 | VAR_7)))
   FUNC_4(VAR_23);
  else
   FUNC_5(VAR_23);
  if (VAR_28 || VAR_31 == 0)
   break;
  VAR_20->i_flag |= VAR_4;
 }





 if ((VAR_20->i_mode & (VAR_12 | VAR_11)) && VAR_26 > VAR_17->uio_resid && VAR_19) {
  if (FUNC_13(VAR_19, VAR_13)) {
   VAR_20->i_mode &= ~(VAR_12 | VAR_11);
   VAR_21->di_mode = VAR_20->i_mode;
  }
 }
 if (VAR_28) {
  if (VAR_18 & VAR_10) {
   (void)FUNC_9(VAR_16, VAR_25,
       VAR_8 | (VAR_18&VAR_9), VAR_19);
   VAR_17->uio_offset -= VAR_26 - VAR_17->uio_resid;
   VAR_17->uio_resid = VAR_26;
  }
 } else if (VAR_26 > VAR_17->uio_resid && (VAR_18 & VAR_9))
  VAR_28 = FUNC_10(VAR_16, 1);
 return (VAR_28);
}
