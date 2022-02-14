
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef int vm_prot_t ;
typedef struct vm_page* vm_page_t ;
typedef int vm_offset_t ;
struct vm_page {void* phys_addr; } ;
struct uio {scalar_t__ uio_resid; scalar_t__ uio_iovcnt; int uio_offset; scalar_t__ uio_rw; struct iovec* uio_iov; } ;
struct iovec {scalar_t__ iov_len; scalar_t__ iov_base; } ;
struct cdev {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct cdev*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 (void*,scalar_t__,int ) ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (int,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int) ;
 int FUNC_9 (scalar_t__) ;
 void* FUNC_10 (int) ;
 int FUNC_11 (void*,scalar_t__,struct uio*) ;
 int FUNC_12 (struct vm_page**,int,scalar_t__,struct uio*) ;
 int VAR_12 ;

int
FUNC_13(struct cdev *VAR_13, struct uio *VAR_14, int VAR_15)
{
 struct iovec *VAR_16;
 int VAR_17 = 0;
 vm_offset_t VAR_18, VAR_19, VAR_20, VAR_21;
 vm_prot_t VAR_22;
 struct vm_page VAR_23;
 vm_page_t VAR_24;
 vm_size_t VAR_25;

 VAR_25 = 0;
 VAR_17 = 0;

 while (VAR_14->uio_resid > 0 && !VAR_17) {
  VAR_16 = VAR_14->uio_iov;
  if (VAR_16->iov_len == 0) {
   VAR_14->uio_iov++;
   VAR_14->uio_iovcnt--;
   if (VAR_14->uio_iovcnt < 0)
    FUNC_6("memrw");
   continue;
  }
  if (FUNC_2(VAR_13) == VAR_1) {
   VAR_21 = VAR_14->uio_offset;

kmem_direct_mapped: VAR_20 = VAR_21 & VAR_4;
   VAR_25 = VAR_5 - ((vm_offset_t)VAR_16->iov_base &
       VAR_4);
   VAR_25 = FUNC_5(VAR_25, VAR_5 - VAR_20);
   VAR_25 = FUNC_5(VAR_25, VAR_16->iov_len);

   if (FUNC_4(VAR_21, VAR_25)) {
    VAR_17 = VAR_2;
    break;
   }

   if (VAR_10 && !FUNC_7(VAR_21, VAR_25)) {
    VAR_17 = FUNC_11((void *)FUNC_1(VAR_21), VAR_25,
        VAR_14);
   } else {
    VAR_23.phys_addr = FUNC_10(VAR_21);
    VAR_24 = &VAR_23;
    VAR_17 = FUNC_12(&VAR_24, VAR_20, VAR_25, VAR_14);
   }
  }
  else if (FUNC_2(VAR_13) == VAR_0) {
   VAR_18 = VAR_14->uio_offset;

   if ((VAR_18 < VAR_7) || (VAR_18 > VAR_12)) {
    VAR_21 = FUNC_0(VAR_18);
    goto kmem_direct_mapped;
   }

   VAR_18 = FUNC_10(VAR_14->uio_offset);
   VAR_19 = FUNC_9(VAR_14->uio_offset
       + VAR_16->iov_len);






   for (; VAR_18 < VAR_19; VAR_18 += VAR_5)
    if (FUNC_8(VAR_11, VAR_18) == 0)
     return (VAR_2);

   VAR_22 = (VAR_14->uio_rw == VAR_6)
       ? VAR_8 : VAR_9;

   VAR_18 = VAR_14->uio_offset;
   if (FUNC_3((void *) VAR_18, VAR_16->iov_len, VAR_22)
       == VAR_3)
    return (VAR_2);

   VAR_17 = FUNC_11((void *)VAR_18, VAR_16->iov_len, VAR_14);

   continue;
  }
 }

 return (VAR_17);
}
