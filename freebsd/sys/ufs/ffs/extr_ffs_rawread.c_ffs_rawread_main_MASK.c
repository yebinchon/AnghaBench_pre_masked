
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long u_int ;
struct vnode {int dummy; } ;
struct uio {long uio_resid; scalar_t__ uio_offset; TYPE_1__* uio_iov; struct thread* uio_td; } ;
struct thread {int td_proc; } ;
struct buf {long b_bufsize; long b_bcount; long b_resid; int b_ioflags; int b_error; } ;
typedef scalar_t__ off_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {scalar_t__ iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct buf*,int ,char*) ;
 struct thread* VAR_4 ;
 int FUNC_3 (struct vnode*,scalar_t__,scalar_t__,long,struct thread*,struct buf*) ;
 int VAR_5 ;
 int FUNC_4 (struct vnode*,struct buf*) ;
 int FUNC_5 (struct buf*) ;
 scalar_t__ VAR_6 ;
 struct buf* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,struct buf*) ;
 int FUNC_8 (struct buf*) ;

__attribute__((used)) static int
FUNC_9(struct vnode *VAR_7,
   struct uio *VAR_8)
{
 int VAR_9, VAR_10;
 struct buf *VAR_11, *VAR_12, *VAR_13;
 u_int VAR_14;
 caddr_t VAR_15;
 long VAR_16;
 off_t VAR_17;
 struct thread *VAR_18;

 VAR_18 = VAR_8->uio_td ? VAR_8->uio_td : VAR_4;
 VAR_15 = VAR_8->uio_iov->iov_base;
 VAR_16 = VAR_8->uio_resid;
 VAR_17 = VAR_8->uio_offset;




 FUNC_0(VAR_18->td_proc);

 VAR_9 = 0;
 VAR_10 = 0;

 VAR_11 = ((void*)0);
 VAR_12 = ((void*)0);

 while (VAR_16 > 0) {

  if (VAR_11 == ((void*)0)) {
   VAR_11 = FUNC_6(VAR_5, VAR_2);
   FUNC_4(VAR_7, VAR_11);
   VAR_9 = FUNC_3(VAR_7, VAR_15, VAR_17,
           VAR_16, VAR_18, VAR_11);
   if (VAR_9 != 0)
    break;

   if (VAR_16 > VAR_11->b_bufsize) {
    if (VAR_6 != 0)
     VAR_12 = FUNC_6(VAR_5,
         VAR_1);
    else
     VAR_12 = ((void*)0);
    if (VAR_12 != ((void*)0)) {
     FUNC_4(VAR_7, VAR_12);

     VAR_10 = FUNC_3(VAR_7,
               VAR_15 +
               VAR_11->b_bufsize,
               VAR_17 +
               VAR_11->b_bufsize,
               VAR_16 -
               VAR_11->b_bufsize,
               VAR_18,
               VAR_12);
     if (VAR_10) {
      FUNC_5(VAR_12);
      FUNC_7(VAR_5,
          VAR_12);
      VAR_12 = ((void*)0);
     }
    }
   }
  }

  FUNC_2(VAR_11, VAR_3, "rawrd");
  FUNC_8(VAR_11);

  VAR_14 = VAR_11->b_bcount - VAR_11->b_resid;
  if (VAR_14 == 0 && (VAR_11->b_ioflags & VAR_0) == 0) {
   VAR_10 = 0;
   break;
  }

  if ((VAR_11->b_ioflags & VAR_0) != 0) {
   VAR_9 = VAR_11->b_error;
   break;
  }
  VAR_16 -= VAR_14;
  VAR_15 += VAR_14;
  VAR_17 += VAR_14;
  if (VAR_14 < VAR_11->b_bufsize) {

   VAR_9 = FUNC_3(VAR_7,
            VAR_15,
            VAR_17,
            VAR_11->b_bufsize - VAR_14,
            VAR_18,
            VAR_11);
   if (VAR_9 != 0)
    break;
  } else if (VAR_12 != ((void*)0)) {

   VAR_13 = VAR_11;
   VAR_11 = VAR_12;
   VAR_12 = VAR_13;

   if (VAR_16 <= VAR_11->b_bufsize) {
    FUNC_5(VAR_12);
    FUNC_7(VAR_5, VAR_12);
    VAR_12 = ((void*)0);
   } else {
    VAR_10 = FUNC_3(VAR_7,
              VAR_15 +
              VAR_11->b_bufsize,
              VAR_17 +
              VAR_11->b_bufsize,
              VAR_16 -
              VAR_11->b_bufsize,
              VAR_18,
              VAR_12);
    if (VAR_10 != 0) {
     FUNC_5(VAR_12);
     FUNC_7(VAR_5, VAR_12);
     VAR_12 = ((void*)0);
    }
   }
  } else if (VAR_10 != 0) {
   break;
  } else if (VAR_16 > 0) {
   VAR_9 = FUNC_3(VAR_7, VAR_15, VAR_17,
            VAR_16, VAR_18, VAR_11);
   if (VAR_9 != 0)
    break;
  }
 }

 if (VAR_11 != ((void*)0)) {
  FUNC_5(VAR_11);
  FUNC_7(VAR_5, VAR_11);
 }
 if (VAR_12 != ((void*)0)) {
  FUNC_2(VAR_12, VAR_3, "rawrd");
  FUNC_8(VAR_12);
  FUNC_5(VAR_12);
  FUNC_7(VAR_5, VAR_12);
 }

 if (VAR_9 == 0)
  VAR_9 = VAR_10;
 FUNC_1(VAR_18->td_proc);
 VAR_8->uio_iov->iov_base = VAR_15;
 VAR_8->uio_resid = VAR_16;
 VAR_8->uio_offset = VAR_17;
 return VAR_9;
}
