
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int ufs2_daddr_t ;
typedef int u_int ;
struct vnode {int v_bufobj; TYPE_2__* v_mount; } ;
struct thread {int dummy; } ;
struct inode {int dummy; } ;
struct buf {size_t b_bcount; int b_kvasize; int b_lblkno; int b_blkno; int b_bufsize; int b_offset; int b_iooffset; int b_flags; scalar_t__ b_resid; scalar_t__ b_data; int b_iodone; int b_iocmd; } ;
typedef int off_t ;
typedef int daddr_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_3__ {int f_iosize; } ;
struct TYPE_4__ {TYPE_1__ mnt_stat; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct buf*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vnode* FUNC_1 (struct inode*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct inode* FUNC_2 (struct vnode*) ;
 int VAR_7 ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct vnode*,int,int*,int *,int*,int *) ;
 scalar_t__ FUNC_6 (struct buf*,int) ;

__attribute__((used)) static int
FUNC_7(struct vnode *VAR_8,
        caddr_t VAR_9,
        off_t VAR_10,
        size_t VAR_11,
        struct thread *VAR_12,
        struct buf *VAR_13)
{
 int VAR_14;
 u_int VAR_15;
 off_t VAR_16;
 int VAR_17;
 int VAR_18;
 struct vnode *VAR_19;
 int VAR_20;
 struct inode *VAR_21;
 ufs2_daddr_t VAR_22;

 VAR_18 = VAR_8->v_mount->mnt_stat.f_iosize;

 VAR_21 = FUNC_2(VAR_8);
 VAR_19 = FUNC_1(VAR_21);

 VAR_15 = ((vm_offset_t) VAR_9) & VAR_5;
 VAR_13->b_bcount = VAR_11;
 if (VAR_13->b_bcount + VAR_15 > VAR_13->b_kvasize) {
  VAR_13->b_bcount = VAR_13->b_kvasize;
  if (VAR_15 != 0)
   VAR_13->b_bcount -= VAR_6;
 }
 VAR_13->b_flags = 0;
 VAR_13->b_iocmd = VAR_0;
 VAR_13->b_iodone = VAR_7;
 VAR_13->b_data = VAR_9;
 VAR_16 = VAR_10 / VAR_18;
 VAR_17 = (VAR_10 % VAR_18) / VAR_2;
 if ((daddr_t) VAR_16 != VAR_16) {
  return VAR_4;
 }

 VAR_13->b_lblkno = VAR_13->b_blkno = VAR_16;

 VAR_14 = FUNC_5(VAR_8, VAR_13->b_lblkno, &VAR_22, ((void*)0), &VAR_20, ((void*)0));
 if (VAR_14 != 0)
  return VAR_14;
 if (VAR_22 == -1) {



  if (VAR_13->b_bcount + VAR_17 * VAR_2 > VAR_18)
   VAR_13->b_bcount = VAR_18 - VAR_17 * VAR_2;
  VAR_13->b_bufsize = VAR_13->b_bcount;

  if (FUNC_6(VAR_13, 1) < 0)
   return VAR_3;

  FUNC_4();
  FUNC_3(VAR_13->b_data, VAR_13->b_bufsize);



  VAR_13->b_resid = 0;
  VAR_13->b_flags |= VAR_1;
  return 0;
 }
 VAR_13->b_blkno = VAR_22 + VAR_17;
 VAR_13->b_offset = VAR_13->b_iooffset = (VAR_22 + VAR_17) * VAR_2;

 if (VAR_13->b_bcount + VAR_17 * VAR_2 > VAR_18 * (1 + VAR_20))
  VAR_13->b_bcount = VAR_18 * (1 + VAR_20) - VAR_17 * VAR_2;
 VAR_13->b_bufsize = VAR_13->b_bcount;

 if (FUNC_6(VAR_13, 1) < 0)
  return VAR_3;

 FUNC_0(&VAR_19->v_bufobj, VAR_13);
 return 0;
}
