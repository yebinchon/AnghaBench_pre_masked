
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef TYPE_5__* vm_page_t ;
typedef int vm_page_bits_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef int vm_offset_t ;
typedef TYPE_6__* vm_object_t ;
struct vnode {int v_iflag; TYPE_2__* v_mount; } ;
struct sf_buf {int dummy; } ;
struct bufobj {int dummy; } ;
struct buf {scalar_t__ b_rcred; scalar_t__ b_wcred; int b_blkno; int b_bcount; int b_bufsize; int b_runningbufspace; int b_ioflags; struct vnode* b_vp; int b_iooffset; scalar_t__ b_data; int b_iodone; int b_iocmd; } ;
typedef int daddr_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_16__ {scalar_t__ vnp_size; } ;
struct TYPE_17__ {TYPE_3__ vnp; } ;
struct TYPE_19__ {TYPE_4__ un_pager; struct vnode* handle; } ;
struct TYPE_18__ {int valid; int dirty; int pindex; } ;
struct TYPE_14__ {int f_iosize; } ;
struct TYPE_15__ {TYPE_1__ mnt_stat; } ;
struct TYPE_13__ {int td_ucred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct vnode*,int ,struct bufobj**,int ,int *,int *) ;
 int FUNC_5 (int *,int) ;
 int VAR_11 ;
 int FUNC_6 (struct buf*) ;
 int FUNC_7 (struct buf*,int ,char*) ;
 int FUNC_8 (scalar_t__,int) ;
 void* FUNC_9 (int ) ;
 TYPE_10__* VAR_12 ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct bufobj*,struct buf*) ;
 int FUNC_12 (struct buf*) ;
 int VAR_13 ;
 struct sf_buf* FUNC_13 (TYPE_5__*,int ) ;
 int FUNC_14 (struct sf_buf*) ;
 scalar_t__ FUNC_15 (struct sf_buf*) ;
 struct buf* FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,struct buf*) ;
 int FUNC_18 (int,int) ;
 int FUNC_19 (struct vnode*,scalar_t__,int*,int *) ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_20(vm_object_t VAR_15, vm_page_t VAR_16)
{
 struct vnode *VAR_17;
 struct bufobj *VAR_18;
 struct buf *VAR_19;
 struct sf_buf *VAR_20;
 daddr_t VAR_21;
 vm_offset_t VAR_22;
 vm_page_bits_t VAR_23;
 int VAR_24, VAR_25;

 VAR_24 = 0;
 VAR_17 = VAR_15->handle;
 if (VAR_17->v_iflag & VAR_7)
  return VAR_8;

 VAR_22 = VAR_17->v_mount->mnt_stat.f_iosize;

 FUNC_4(VAR_17, 0, &VAR_18, 0, ((void*)0), ((void*)0));

 VAR_20 = FUNC_13(VAR_16, 0);

 for (VAR_25 = 0; VAR_25 < VAR_5 / VAR_22; VAR_25++) {
  vm_ooffset_t VAR_26;

  VAR_23 = FUNC_18(VAR_25 * VAR_22, VAR_22);
  if (VAR_16->valid & VAR_23)
   continue;

  VAR_26 = FUNC_0(VAR_16->pindex) + VAR_25 * VAR_22;
  if (VAR_26 >= VAR_15->un_pager.vnp.vnp_size) {
   VAR_21 = -1;
  } else {
   VAR_24 = FUNC_19(VAR_17, VAR_26, &VAR_21, ((void*)0));
   if (VAR_24)
    break;
  }
  if (VAR_21 != -1) {
   VAR_19 = FUNC_16(VAR_14, VAR_3);


   VAR_19->b_iocmd = VAR_1;
   VAR_19->b_iodone = VAR_11;
   FUNC_1(VAR_19->b_rcred == VAR_4, ("leaking read ucred"));
   FUNC_1(VAR_19->b_wcred == VAR_4, ("leaking write ucred"));
   VAR_19->b_rcred = FUNC_9(VAR_12->td_ucred);
   VAR_19->b_wcred = FUNC_9(VAR_12->td_ucred);
   VAR_19->b_data = (caddr_t)FUNC_15(VAR_20) + VAR_25 * VAR_22;
   VAR_19->b_blkno = VAR_21;
   FUNC_11(VAR_18, VAR_19);
   VAR_19->b_vp = VAR_17;
   VAR_19->b_bcount = VAR_22;
   VAR_19->b_bufsize = VAR_22;
   VAR_19->b_runningbufspace = VAR_19->b_bufsize;
   FUNC_5(&VAR_13, VAR_19->b_runningbufspace);


   VAR_19->b_iooffset = FUNC_10(VAR_19->b_blkno);
   FUNC_6(VAR_19);

   FUNC_7(VAR_19, VAR_6, "vnsrd");

   if ((VAR_19->b_ioflags & VAR_0) != 0)
    VAR_24 = VAR_2;




   VAR_19->b_vp = ((void*)0);
   FUNC_12(VAR_19);
   FUNC_17(VAR_14, VAR_19);
   if (VAR_24)
    break;
  } else
   FUNC_8((caddr_t)FUNC_15(VAR_20) + VAR_25 * VAR_22, VAR_22);
  FUNC_1((VAR_16->dirty & VAR_23) == 0,
      ("vnode_pager_input_smlfs: page %p is dirty", VAR_16));
  FUNC_2(VAR_15);
  VAR_16->valid |= VAR_23;
  FUNC_3(VAR_15);
 }
 FUNC_14(VAR_20);
 if (VAR_24) {
  return VAR_9;
 }
 return VAR_10;
}
