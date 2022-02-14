
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct msghdr {size_t msg_controllen; TYPE_1__* msg_iov; } ;
struct iovec {int dummy; } ;
struct TYPE_2__ {size_t iov_len; } ;


 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (struct msghdr*,struct iovec*,void*) ;

void
FUNC_2(struct msghdr *VAR_0, struct iovec *VAR_1,
    void *VAR_2, size_t VAR_3)
{
 FUNC_1(VAR_0, VAR_1, VAR_2);
 VAR_0->msg_controllen = VAR_3;
 FUNC_0("init: data size %zu", VAR_0->msg_iov != ((void*)0) ?
     VAR_0->msg_iov->iov_len : (size_t)0);
 FUNC_0("init: msghdr.msg_controllen %u",
     (u_int)VAR_0->msg_controllen);
}
