
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {int uio_iovcnt; size_t uio_resid; TYPE_1__* uio_iov; struct thread* uio_td; int uio_rw; int uio_segflg; } ;
struct thread {int dummy; } ;
struct csession {int dummy; } ;
struct cryptop_data {TYPE_1__* iovec; struct uio uio; struct csession* cse; } ;
struct TYPE_2__ {size_t iov_len; void* iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (size_t,int ,int) ;

__attribute__((used)) static struct cryptop_data *
FUNC_1(struct csession *VAR_5, size_t VAR_6, struct thread *VAR_7)
{
 struct cryptop_data *VAR_8;
 struct uio *VAR_9;

 VAR_8 = FUNC_0(sizeof(struct cryptop_data), VAR_1, VAR_0 | VAR_2);

 VAR_8->cse = VAR_5;
 VAR_9 = &VAR_8->uio;
 VAR_9->uio_iov = VAR_8->iovec;
 VAR_9->uio_iovcnt = 1;
 VAR_9->uio_resid = VAR_6;
 VAR_9->uio_segflg = VAR_3;
 VAR_9->uio_rw = VAR_4;
 VAR_9->uio_td = VAR_7;
 VAR_9->uio_iov[0].iov_len = VAR_6;
 VAR_9->uio_iov[0].iov_base = FUNC_0(VAR_6, VAR_1, VAR_0);
 return (VAR_8);
}
