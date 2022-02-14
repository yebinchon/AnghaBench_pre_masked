
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef int vm_prot_t ;
typedef TYPE_2__* vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ uint32_t ;
struct uio {scalar_t__ uio_resid; scalar_t__ uio_iovcnt; scalar_t__ uio_offset; scalar_t__ uio_rw; struct iovec* uio_iov; } ;
struct iovec {scalar_t__ iov_len; scalar_t__ iov_base; } ;
struct cdev {int dummy; } ;
struct TYPE_5__ {int color; } ;
struct TYPE_6__ {TYPE_1__ md; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_1 (struct cdev*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (void*,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,TYPE_2__**,int) ;
 int FUNC_9 (scalar_t__,int) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (void*,scalar_t__,struct uio*) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 TYPE_2__* FUNC_14 (scalar_t__) ;

int
FUNC_15(struct cdev *VAR_13, struct uio *VAR_14, int VAR_15)
{
 struct iovec *VAR_16;
 vm_offset_t VAR_17;
 vm_offset_t VAR_18;
 vm_offset_t VAR_19;
 vm_offset_t VAR_20;
 vm_prot_t VAR_21;
 vm_paddr_t VAR_22;
 vm_size_t VAR_23;
 vm_page_t VAR_24;
 int VAR_25;
 uint32_t VAR_26;

 VAR_23 = 0;
 VAR_26 = 1;
 VAR_25 = 0;
 VAR_19 = 0;

 while (VAR_14->uio_resid > 0 && VAR_25 == 0) {
  VAR_16 = VAR_14->uio_iov;
  if (VAR_16->iov_len == 0) {
   VAR_14->uio_iov++;
   VAR_14->uio_iovcnt--;
   if (VAR_14->uio_iovcnt < 0)
    FUNC_6("memrw");
   continue;
  }
  if (FUNC_1(VAR_13) == VAR_1) {
   VAR_22 = VAR_14->uio_offset & ~VAR_6;
   if (!FUNC_2(VAR_22)) {
    VAR_25 = VAR_3;
    break;
   }

   VAR_18 = VAR_14->uio_offset & VAR_6;
   VAR_23 = VAR_7 - ((vm_offset_t)VAR_16->iov_base &
       VAR_6);
   VAR_23 = FUNC_13(VAR_23, VAR_7 - VAR_18);
   VAR_23 = FUNC_13(VAR_23, VAR_16->iov_len);

   VAR_24 = FUNC_14(VAR_22);
   if (VAR_24 != ((void*)0)) {
    if (VAR_19 == 0) {
     if (VAR_12 == 0)
      VAR_26 = VAR_2;
     VAR_19 = FUNC_4(VAR_7 * VAR_26);
     if (VAR_19 == 0) {
      VAR_25 = VAR_4;
      break;
     }
    }
    if (VAR_26 != 1 && VAR_24->md.color != -1)
     VAR_20 = VAR_19 + VAR_24->md.color * VAR_7;
    else
     VAR_20 = VAR_19;
    FUNC_8(VAR_20, &VAR_24, 1);
    VAR_25 = FUNC_12((void *)(VAR_20 + VAR_18), VAR_23,
        VAR_14);
    FUNC_9(VAR_20, 1);
   } else {
    VAR_20 = FUNC_0(VAR_22);
    VAR_25 = FUNC_12((void *)(VAR_20 + VAR_18), VAR_23,
        VAR_14);
   }
   break;
  } else if (FUNC_1(VAR_13) == VAR_0) {
   VAR_20 = FUNC_11(VAR_14->uio_offset);
   VAR_17 = FUNC_10(VAR_14->uio_offset + VAR_16->iov_len);





   for (; VAR_20 < VAR_17; VAR_20 += VAR_7)
    if (FUNC_7(VAR_20) == 0)
     return (VAR_3);

   VAR_21 = (VAR_14->uio_rw == VAR_8) ? VAR_10 :
       VAR_11;
   VAR_20 = VAR_14->uio_offset;
   if (VAR_20 < VAR_9 &&
       FUNC_3((void *)VAR_20, VAR_16->iov_len, VAR_21) == VAR_5)
    return (VAR_3);

   VAR_25 = FUNC_12((void *)VAR_20, VAR_16->iov_len, VAR_14);
   break;
  }

 }
 if (VAR_19 != 0)
  FUNC_5(VAR_19, VAR_7 * VAR_26);
 return (VAR_25);
}
