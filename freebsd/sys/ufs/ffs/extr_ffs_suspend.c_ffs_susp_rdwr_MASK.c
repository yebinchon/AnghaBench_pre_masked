
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct uio {scalar_t__ uio_rw; scalar_t__ uio_segflg; scalar_t__ uio_resid; int uio_iovcnt; size_t uio_offset; TYPE_1__* uio_iov; } ;
struct ufsmount {struct fs* um_fs; struct vnode* um_devvp; } ;
struct mount {int dummy; } ;
struct fs {size_t fs_bsize; } ;
struct cdev {int dummy; } ;
struct buf {int b_flags; int b_data; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {size_t iov_len; char* iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct ufsmount* FUNC_1 (struct mount*) ;
 int FUNC_2 (struct vnode*,int ,size_t,int ,struct buf**) ;
 int FUNC_3 (struct buf*) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (void*,int ,size_t) ;
 int FUNC_7 (int ,void*,size_t) ;
 int FUNC_8 (void**) ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (struct mount*) ;
 scalar_t__ FUNC_10 (struct fs*,size_t) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(struct cdev *VAR_9, struct uio *VAR_10, int VAR_11)
{
 int VAR_12, VAR_13;
 struct vnode *VAR_14;
 struct mount *VAR_15;
 struct ufsmount *VAR_16;
 struct buf *VAR_17;
 void *VAR_18;
 size_t VAR_19;
 ssize_t VAR_20;
 struct fs *VAR_21;

 FUNC_11(&VAR_8);

 VAR_12 = FUNC_8((void **)&VAR_15);
 if (VAR_12 != 0) {
  FUNC_12(&VAR_8);
  return (VAR_3);
 }

 VAR_16 = FUNC_1(VAR_15);
 VAR_14 = VAR_16->um_devvp;
 VAR_21 = VAR_16->um_fs;

 if (FUNC_9(VAR_15) == 0) {
  FUNC_12(&VAR_8);
  return (VAR_3);
 }

 FUNC_0(VAR_10->uio_rw == VAR_5 || VAR_10->uio_rw == VAR_7,
     ("neither UIO_READ or UIO_WRITE"));
 FUNC_0(VAR_10->uio_segflg == VAR_6,
     ("uio->uio_segflg != UIO_USERSPACE"));

 VAR_20 = VAR_10->uio_resid;

 for (VAR_13 = 0; VAR_13 < VAR_10->uio_iovcnt; VAR_13++) {
  while (VAR_10->uio_iov[VAR_13].iov_len) {
   VAR_18 = VAR_10->uio_iov[VAR_13].iov_base;
   VAR_19 = VAR_10->uio_iov[VAR_13].iov_len;
   if (VAR_19 > VAR_21->fs_bsize)
    VAR_19 = VAR_21->fs_bsize;
   if (FUNC_10(VAR_21, VAR_10->uio_offset) != 0 ||
       FUNC_10(VAR_21, VAR_19) != 0) {
    VAR_12 = VAR_2;
    goto out;
   }
   VAR_12 = FUNC_2(VAR_14, FUNC_4(VAR_10->uio_offset), VAR_19,
       VAR_4, &VAR_17);
   if (VAR_12 != 0)
    goto out;
   if (VAR_10->uio_rw == VAR_7) {
    VAR_12 = FUNC_6(VAR_18, VAR_17->b_data, VAR_19);
    if (VAR_12 != 0) {
     VAR_17->b_flags |= VAR_0 | VAR_1;
     FUNC_3(VAR_17);
     goto out;
    }
    VAR_12 = FUNC_5(VAR_17);
    if (VAR_12 != 0)
     goto out;
   } else {
    VAR_12 = FUNC_7(VAR_17->b_data, VAR_18, VAR_19);
    FUNC_3(VAR_17);
    if (VAR_12 != 0)
     goto out;
   }
   VAR_10->uio_iov[VAR_13].iov_base =
       (char *)VAR_10->uio_iov[VAR_13].iov_base + VAR_19;
   VAR_10->uio_iov[VAR_13].iov_len -= VAR_19;
   VAR_10->uio_resid -= VAR_19;
   VAR_10->uio_offset += VAR_19;
  }
 }

out:
 FUNC_12(&VAR_8);

 if (VAR_10->uio_resid < VAR_20)
  return (0);

 return (VAR_12);
}
