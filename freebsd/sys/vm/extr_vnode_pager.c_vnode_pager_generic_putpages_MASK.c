
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef TYPE_3__* vm_page_t ;
typedef int vm_page_bits_t ;
typedef int vm_ooffset_t ;
typedef TYPE_4__* vm_object_t ;
typedef int uintmax_t ;
typedef int u_long ;
struct vnode {TYPE_4__* v_object; } ;
struct uio {int uio_iovcnt; int uio_offset; int uio_resid; int * uio_td; int uio_rw; int uio_segflg; struct iovec* uio_iov; } ;
struct timeval {int dummy; } ;
struct iovec {int iov_len; int * iov_base; } ;
typedef int off_t ;
typedef scalar_t__ int64_t ;
struct TYPE_17__ {int vnp_size; } ;
struct TYPE_18__ {TYPE_1__ vnp; } ;
struct TYPE_20__ {TYPE_2__ un_pager; } ;
struct TYPE_19__ {scalar_t__ dirty; scalar_t__ pindex; } ;
struct TYPE_16__ {int td_ucred; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (struct vnode*,struct uio*,int ,int ) ;
 int FUNC_12 (int) ;
 TYPE_10__* VAR_9 ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (struct timeval*,int*,int) ;
 int FUNC_15 (char*,int,int ) ;
 int FUNC_16 (int,scalar_t__) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_17 (TYPE_3__*) ;
 int FUNC_18 (TYPE_3__*,int,int) ;
 scalar_t__ FUNC_19 (TYPE_3__*,int) ;
 int FUNC_20 (int) ;
 int FUNC_21 (struct vnode*,char*,int,...) ;
 int FUNC_22 (int) ;

int
FUNC_23(struct vnode *VAR_12, vm_page_t *VAR_13, int VAR_14,
    int VAR_15, int *VAR_16)
{
 vm_object_t VAR_17;
 vm_page_t VAR_18;
 vm_ooffset_t VAR_19, VAR_20, VAR_21, VAR_22;
 struct uio VAR_23;
 struct iovec VAR_24;
 off_t VAR_25, VAR_26;
 int VAR_27, VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 bool VAR_34;
 static struct timeval VAR_35;
 static int VAR_36;

 VAR_17 = VAR_12->v_object;
 VAR_27 = VAR_14 / VAR_3;

 for (VAR_29 = 0; VAR_29 < VAR_27; VAR_29++)
  VAR_16[VAR_29] = VAR_7;

 if ((int64_t)VAR_13[0]->pindex < 0) {
  FUNC_15("vnode_pager_generic_putpages: "
      "attempt to write meta-data 0x%jx(%lx)\n",
      (uintmax_t)VAR_13[0]->pindex, (u_long)VAR_13[0]->dirty);
  VAR_16[0] = VAR_6;
  return (VAR_6);
 }

 VAR_30 = VAR_27 * VAR_3;
 VAR_31 = VAR_27;

 VAR_21 = FUNC_0(VAR_13[0]->pindex);
 FUNC_7(VAR_17);
 if (VAR_30 + VAR_21 > VAR_17->un_pager.vnp.vnp_size) {
  if (!FUNC_9(VAR_17)) {
   FUNC_8(VAR_17);
   FUNC_10(VAR_17);
   if (VAR_30 + VAR_21 <= VAR_17->un_pager.vnp.vnp_size)
    goto downgrade;
  }
  if (VAR_17->un_pager.vnp.vnp_size > VAR_21) {
   VAR_30 = VAR_17->un_pager.vnp.vnp_size - VAR_21;
   VAR_31 = FUNC_12(VAR_30);
   if ((VAR_32 = (int)VAR_30 & VAR_2) != 0) {
    VAR_32 = FUNC_16(VAR_32, VAR_0);







    VAR_18 = VAR_13[VAR_31 - 1];
    FUNC_17(VAR_18);
    FUNC_1(!FUNC_13(VAR_18),
  ("vnode_pager_generic_putpages: page %p is not read-only", VAR_18));
    FUNC_2(VAR_18->dirty != 0);
    FUNC_18(VAR_18, VAR_32, VAR_3 -
        VAR_32);
   }
  } else {
   VAR_30 = 0;
   VAR_31 = 0;
  }
  for (VAR_29 = VAR_31; VAR_29 < VAR_27; VAR_29++)
   VAR_16[VAR_29] = VAR_6;
downgrade:
  FUNC_6(VAR_17);
 }

 VAR_23.uio_iov = &VAR_24;
 VAR_23.uio_segflg = VAR_4;
 VAR_23.uio_rw = VAR_5;
 VAR_23.uio_td = ((void*)0);
 VAR_19 = FUNC_16(VAR_21 + VAR_30, VAR_0);

 for (VAR_22 = VAR_21; VAR_22 < VAR_19;) {

  for (VAR_34 = 1; VAR_34 && VAR_22 < VAR_19;) {
   VAR_18 = VAR_13[FUNC_3(VAR_22 - VAR_21)];
   for (VAR_29 = FUNC_20(VAR_22);
       VAR_29 < sizeof(vm_page_bits_t) * VAR_1 &&
       VAR_22 < VAR_19; VAR_29++) {
    if (FUNC_19(VAR_18, VAR_22)) {
     VAR_34 = 0;
     break;
    }
    VAR_22 += VAR_0;
   }
  }
  if (VAR_34)
   goto write_done;


  for (VAR_20 = VAR_22; VAR_20 < VAR_19;) {
   VAR_18 = VAR_13[FUNC_3(VAR_20 - VAR_21)];
   for (VAR_29 = FUNC_20(VAR_20);
       VAR_29 < sizeof(vm_page_bits_t) * VAR_1 &&
       VAR_20 < VAR_19; VAR_29++) {
    if (!FUNC_19(VAR_18, VAR_20))
     goto start_write;
    VAR_20 += VAR_0;
   }
  }
start_write:
  if (VAR_20 > VAR_21 + VAR_30)
   VAR_20 = VAR_21 + VAR_30;





  FUNC_2(VAR_22 < VAR_20);

  FUNC_8(VAR_17);
  VAR_24.iov_base = ((void*)0);
  VAR_23.uio_iovcnt = 1;
  VAR_23.uio_offset = VAR_22;
  VAR_25 = VAR_23.uio_resid = VAR_24.iov_len = VAR_20 -
      VAR_22;
  VAR_28 = FUNC_11(VAR_12, &VAR_23,
      FUNC_22(VAR_15), VAR_9->td_ucred);

  VAR_26 = VAR_25 - VAR_23.uio_resid;
  if (VAR_26 == 0) {
   if (FUNC_14(&VAR_35, &VAR_36, 1) != 0) {
    FUNC_21(VAR_12, "vnode_pager_putpages: "
        "zero-length write at %ju resid %zd\n",
        VAR_23.uio_offset, VAR_23.uio_resid);
   }
   FUNC_7(VAR_17);
   break;
  }


  VAR_22 += VAR_26;
  FUNC_2(VAR_23.uio_offset == VAR_22);

  VAR_33 = 0;
  if (VAR_28 != 0 && (VAR_33 = FUNC_14(&VAR_35,
      &VAR_36, 1)) != 0)
   FUNC_21(VAR_12, "vnode_pager_putpages: I/O error %d\n",
       VAR_28);
  if (VAR_23.uio_resid != 0 && (VAR_33 != 0 ||
      FUNC_14(&VAR_35, &VAR_36, 1) != 0))
   FUNC_21(VAR_12, "vnode_pager_putpages: residual I/O %zd "
       "at %ju\n", VAR_23.uio_resid,
       (uintmax_t)VAR_13[0]->pindex);
  FUNC_7(VAR_17);
  if (VAR_28 != 0 || VAR_23.uio_resid != 0)
   break;
 }
write_done:

 for (VAR_29 = 0; VAR_29 < FUNC_3(VAR_22 - VAR_21); VAR_29++)
  VAR_16[VAR_29] = VAR_8;

 if (VAR_22 == VAR_21 + VAR_30 && (VAR_22 & VAR_2) != 0)
  VAR_16[VAR_29++] = VAR_8;

 for (; VAR_29 < VAR_31; VAR_29++)
  VAR_16[VAR_29] = VAR_13[VAR_29]->dirty == 0 ? VAR_8 : VAR_7;
 FUNC_8(VAR_17);
 FUNC_4(VAR_11, VAR_29);
 FUNC_5(VAR_10);
 return (VAR_16[0]);
}
