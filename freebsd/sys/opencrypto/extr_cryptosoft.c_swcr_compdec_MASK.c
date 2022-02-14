
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct uio {int uio_iovcnt; TYPE_1__* uio_iov; } ;
struct swcr_data {scalar_t__ sw_size; struct comp_algo* sw_cxf; } ;
struct mbuf {int dummy; } ;
struct cryptodesc {scalar_t__ crd_len; int crd_flags; int crd_skip; } ;
struct comp_algo {scalar_t__ (* compress ) (int *,scalar_t__,int **) ;scalar_t__ (* decompress ) (int *,scalar_t__,int **) ;} ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,scalar_t__,int ,scalar_t__,int *) ;
 int FUNC_1 (int,scalar_t__,int ,scalar_t__,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct mbuf*,int) ;
 int * FUNC_4 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_5 (int *,scalar_t__,int **) ;
 scalar_t__ FUNC_6 (int *,scalar_t__,int **) ;

__attribute__((used)) static int
FUNC_7(struct cryptodesc *VAR_6, struct swcr_data *VAR_7,
    caddr_t VAR_8, int VAR_9)
{
 u_int8_t *VAR_10, *VAR_11;
 struct comp_algo *VAR_12;
 int VAR_13;
 u_int32_t VAR_14;

 VAR_12 = VAR_7->sw_cxf;






 VAR_10 = FUNC_4(VAR_6->crd_len, VAR_4, VAR_5);
 if (VAR_10 == ((void*)0))
  return (VAR_3);
 FUNC_1(VAR_9, VAR_8, VAR_6->crd_skip, VAR_6->crd_len, VAR_10);

 if (VAR_6->crd_flags & VAR_0)
  VAR_14 = VAR_12->compress(VAR_10, VAR_6->crd_len, &VAR_11);
 else
  VAR_14 = VAR_12->decompress(VAR_10, VAR_6->crd_len, &VAR_11);

 FUNC_2(VAR_10, VAR_4);
 if (VAR_14 == 0)
  return VAR_3;




 VAR_7->sw_size = VAR_14;

 if (VAR_6->crd_flags & VAR_0) {
  if (VAR_14 >= VAR_6->crd_len) {

   FUNC_2(VAR_11, VAR_4);
   return 0;
  }
 }

 FUNC_0(VAR_9, VAR_8, VAR_6->crd_skip, VAR_14, VAR_11);
 if (VAR_14 < VAR_6->crd_len) {
  VAR_13 = VAR_14 - VAR_6->crd_len;
  if (VAR_9 & VAR_1) {
   VAR_13 = VAR_14 - VAR_6->crd_len;
   FUNC_3((struct mbuf *)VAR_8, VAR_13);
  } else if (VAR_9 & VAR_2) {
   struct uio *VAR_15 = (struct uio *)VAR_8;
   int VAR_16;

   VAR_13 = VAR_6->crd_len - VAR_14;
   VAR_16 = VAR_15->uio_iovcnt - 1;

   while (VAR_13 > 0 && VAR_16 >= 0) {
    if (VAR_13 < VAR_15->uio_iov[VAR_16].iov_len) {
     VAR_15->uio_iov[VAR_16].iov_len -= VAR_13;
     break;
    }

    VAR_13 -= VAR_15->uio_iov[VAR_16].iov_len;
    VAR_15->uio_iov[VAR_16].iov_len = 0;
    VAR_16--;
    VAR_15->uio_iovcnt--;
   }
  }
 }
 FUNC_2(VAR_11, VAR_4);
 return 0;
}
