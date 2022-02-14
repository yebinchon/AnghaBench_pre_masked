
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct uio {int uio_iovcnt; scalar_t__ uio_segflg; scalar_t__ uio_resid; int uio_offset; TYPE_3__* uio_td; TYPE_1__* uio_iov; } ;
struct inode {int i_size; } ;
typedef int off_t ;
struct TYPE_7__ {int bo_bsize; } ;
struct TYPE_10__ {TYPE_2__ v_bufobj; } ;
struct TYPE_9__ {unsigned int fs_bsize; } ;
struct TYPE_8__ {int td_pflags; } ;
struct TYPE_6__ {scalar_t__ iov_len; } ;


 TYPE_5__* FUNC_0 (struct inode*) ;
 TYPE_4__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct inode* FUNC_2 (struct vnode*) ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_3 (struct vnode*,struct uio*) ;
 int FUNC_4 (struct vnode*) ;

int
FUNC_5(struct vnode *VAR_4,
     struct uio *VAR_5,
     int *VAR_6)
{
 if (VAR_2 != 0 &&
     VAR_5->uio_iovcnt == 1 &&
     VAR_5->uio_segflg == VAR_1 &&
     VAR_5->uio_resid == VAR_5->uio_iov->iov_len &&
     (((VAR_5->uio_td != ((void*)0)) ? VAR_5->uio_td : VAR_3)->td_pflags &
      VAR_0) == 0) {
  int VAR_7;
  off_t VAR_8;
  int VAR_9;
  int VAR_10;
  int VAR_11;
  struct inode *VAR_12;
  int VAR_13;



  VAR_12 = FUNC_2(VAR_4);
  VAR_7 = FUNC_0(VAR_12)->v_bufobj.bo_bsize;
  if ((VAR_5->uio_offset & (VAR_7 - 1)) == 0 &&
      (VAR_5->uio_resid & (VAR_7 - 1)) == 0) {


   VAR_13 = FUNC_4(VAR_4);
   if (VAR_13 != 0)
    return VAR_13;


   if (VAR_12->i_size > VAR_5->uio_offset) {
    VAR_8 = VAR_12->i_size - VAR_5->uio_offset;


    if (VAR_5->uio_resid <= VAR_8) {
     *VAR_6 = 1;
     return FUNC_3(VAR_4, VAR_5);
    }

    VAR_10 = ((unsigned int) VAR_12->i_size) %
        FUNC_1(VAR_12)->fs_bsize;
    VAR_9 = (int) VAR_8 - VAR_10;
    if (VAR_9 > 0) {
     VAR_11 = VAR_5->uio_resid -
      VAR_9;
     VAR_5->uio_resid = VAR_9;
     VAR_13 = FUNC_3(VAR_4, VAR_5);
     VAR_5->uio_resid += VAR_11;
     if (VAR_13 != 0)
      return VAR_13;

    }
   }
  }
 }
 *VAR_6 = 0;
 return 0;
}
