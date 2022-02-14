
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct msghdr {int msg_iovlen; struct iovec* msg_iov; int msg_namelen; int * msg_name; } ;
struct iovec {int iov_len; int iov_base; } ;
struct TYPE_6__ {int len; int base; } ;
struct TYPE_5__ {int sa; } ;
struct TYPE_7__ {TYPE_2__ data; TYPE_1__ dest; } ;
typedef TYPE_3__ quicly_datagram_t ;
typedef int mess ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct msghdr*,int ,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int,struct msghdr*,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(int VAR_3, quicly_datagram_t *VAR_4)
{
    int VAR_5;
    struct msghdr VAR_6;
    struct iovec VAR_7;
    FUNC_1(&VAR_6, 0, sizeof(VAR_6));
    VAR_6.msg_name = &VAR_4->dest.sa;
    VAR_6.msg_namelen = FUNC_2(&VAR_4->dest.sa);
    VAR_7.iov_base = VAR_4->data.base;
    VAR_7.iov_len = VAR_4->data.len;
    VAR_6.msg_iov = &VAR_7;
    VAR_6.msg_iovlen = 1;
    if (VAR_2 >= 2)
        FUNC_0("sendmsg", VAR_7.iov_base, VAR_7.iov_len);
    while ((VAR_5 = (int)FUNC_3(VAR_3, &VAR_6, 0)) == -1 && VAR_1 == VAR_0)
        ;
    return VAR_5;
}
