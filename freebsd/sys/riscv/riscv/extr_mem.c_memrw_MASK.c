
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct vm_page* vm_page_t ;
typedef int vm_offset_t ;
typedef scalar_t__ u_int ;
struct vm_page {int phys_addr; } ;
struct uio {scalar_t__ uio_resid; scalar_t__ uio_iovcnt; int uio_offset; int uio_rw; struct iovec* uio_iov; } ;
struct iovec {scalar_t__ iov_len; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ ssize_t ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct cdev*) ;
 int FUNC_4 (void*,scalar_t__,int ) ;
 int VAR_6 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (void*,scalar_t__,struct uio*) ;
 int FUNC_9 (struct vm_page**,int,scalar_t__,struct uio*) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;

int
FUNC_11(struct cdev *VAR_7, struct uio *VAR_8, int VAR_9)
{
 ssize_t VAR_10;
 vm_offset_t VAR_11, VAR_12;
 struct iovec *VAR_13;
 struct vm_page VAR_14;
 vm_page_t VAR_15;
 u_int VAR_16;
 int VAR_17;

 VAR_17 = 0;
 VAR_10 = VAR_8->uio_resid;
 while (VAR_8->uio_resid > 0 && VAR_17 == 0) {
  VAR_13 = VAR_8->uio_iov;
  if (VAR_13->iov_len == 0) {
   VAR_8->uio_iov++;
   VAR_8->uio_iovcnt--;
   if (VAR_8->uio_iovcnt < 0)
    FUNC_5("memrw");
   continue;
  }

  VAR_12 = VAR_8->uio_offset;
  VAR_11 = VAR_12 & VAR_1;
  VAR_16 = FUNC_10(VAR_13->iov_len, VAR_2 - (u_int)VAR_11);
  if (VAR_16 == 0)
   continue;

  switch(FUNC_3(VAR_7)) {
  case 129:

   if (FUNC_2(VAR_12)) {
    VAR_17 = FUNC_8((void *)VAR_12, VAR_16, VAR_8);
    break;
   }

   if (!FUNC_4((void *)VAR_12, VAR_16, VAR_8->uio_rw == VAR_3 ?
       VAR_4 : VAR_5)) {
    VAR_17 = VAR_0;
    break;
   }


   VAR_12 = FUNC_6(VAR_6, VAR_12);
   if (VAR_12 == 0) {
    VAR_17 = VAR_0;
    break;
   }


  case 128:

   if (FUNC_0(VAR_12)) {
    VAR_12 = FUNC_1(VAR_12);
    VAR_17 = FUNC_8((void *)VAR_12, VAR_16, VAR_8);
    break;
   }


   VAR_14.phys_addr = FUNC_7(VAR_12);
   VAR_15 = &VAR_14;
   FUNC_9(&VAR_15, VAR_11, VAR_16, VAR_8);
   break;
  }
 }





 if (VAR_8->uio_resid != VAR_10)
  VAR_17 = 0;

 return (VAR_17);
}
