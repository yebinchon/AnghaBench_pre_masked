
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_3__* vm_page_t ;
typedef TYPE_4__* vm_object_t ;
struct vnode {int dummy; } ;
struct uio {int uio_iovcnt; int uio_resid; TYPE_9__* uio_td; int uio_rw; int uio_segflg; scalar_t__ uio_offset; struct iovec* uio_iov; } ;
struct sf_buf {int dummy; } ;
struct iovec {int iov_len; scalar_t__ iov_base; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_17__ {int td_ucred; } ;
struct TYPE_13__ {scalar_t__ vnp_size; } ;
struct TYPE_14__ {TYPE_1__ vnp; } ;
struct TYPE_16__ {struct vnode* handle; TYPE_2__ un_pager; } ;
struct TYPE_15__ {scalar_t__ dirty; int pindex; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct vnode*,struct uio*,int ,int ) ;
 int FUNC_6 (scalar_t__,int) ;
 TYPE_9__* VAR_7 ;
 struct sf_buf* FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (struct sf_buf*) ;
 scalar_t__ FUNC_9 (struct sf_buf*) ;
 int FUNC_10 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_11(vm_object_t VAR_8, vm_page_t VAR_9)
{
 struct uio VAR_10;
 struct iovec VAR_11;
 int VAR_12;
 int VAR_13;
 struct sf_buf *VAR_14;
 struct vnode *VAR_15;

 FUNC_2(VAR_8);
 VAR_12 = 0;




 if (FUNC_0(VAR_9->pindex) >= VAR_8->un_pager.vnp.vnp_size) {
  return VAR_4;
 } else {
  VAR_13 = VAR_1;
  if (FUNC_0(VAR_9->pindex) + VAR_13 > VAR_8->un_pager.vnp.vnp_size)
   VAR_13 = VAR_8->un_pager.vnp.vnp_size - FUNC_0(VAR_9->pindex);
  VAR_15 = VAR_8->handle;
  FUNC_4(VAR_8);





  VAR_14 = FUNC_7(VAR_9, 0);

  VAR_11.iov_base = (caddr_t)FUNC_9(VAR_14);
  VAR_11.iov_len = VAR_13;
  VAR_10.uio_iov = &VAR_11;
  VAR_10.uio_iovcnt = 1;
  VAR_10.uio_offset = FUNC_0(VAR_9->pindex);
  VAR_10.uio_segflg = VAR_3;
  VAR_10.uio_rw = VAR_2;
  VAR_10.uio_resid = VAR_13;
  VAR_10.uio_td = VAR_7;

  VAR_12 = FUNC_5(VAR_15, &VAR_10, 0, VAR_7->td_ucred);
  if (!VAR_12) {
   int VAR_16 = VAR_13 - VAR_10.uio_resid;

   if (VAR_16 == 0)
    VAR_12 = VAR_0;
   else if (VAR_16 != VAR_1)
    FUNC_6((caddr_t)FUNC_9(VAR_14) + VAR_16,
        VAR_1 - VAR_16);
  }
  FUNC_8(VAR_14);

  FUNC_3(VAR_8);
 }
 FUNC_1(VAR_9->dirty == 0, ("vnode_pager_input_old: page %p is dirty", VAR_9));
 if (!VAR_12)
  FUNC_10(VAR_9);
 return VAR_12 ? VAR_5 : VAR_6;
}
