
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {int uio_iovcnt; TYPE_1__* uio_iov; } ;
struct TYPE_2__ {int iov_len; } ;



int
FUNC_0(struct uio *VAR_0, int VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = 0;
 while (VAR_1 >= 0 && VAR_3 < VAR_0->uio_iovcnt) {
  VAR_4 = VAR_0->uio_iov[VAR_3].iov_len;
  if (VAR_4 > VAR_1) {
       *VAR_2 = VAR_1;
       return (VAR_3);
  }
  VAR_1 -= VAR_4;
  VAR_3++;
 }

 if (VAR_3 > 0 && VAR_1 == 0) {
  VAR_3--;
  *VAR_2 = VAR_0->uio_iov[VAR_3].iov_len;
  return (VAR_3);
 }

 return (-1);
}
