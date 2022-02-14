
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct msghdr {int msg_iovlen; struct iovec* msg_iov; int msg_namelen; int * msg_name; } ;
struct iovec {int iov_len; int iov_base; } ;
struct TYPE_6__ {int sa; } ;
struct TYPE_5__ {int len; int base; } ;
struct TYPE_7__ {TYPE_2__ dest; TYPE_1__ data; } ;
typedef TYPE_3__ quicly_datagram_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int,struct msghdr*,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_2, quicly_datagram_t *VAR_3)
{
    struct iovec VAR_4 = {.iov_base = VAR_3->data.base, .iov_len = VAR_3->data.len};
    struct msghdr VAR_5 = {
        .msg_name = &VAR_3->dest.sa, .msg_namelen = FUNC_0(&VAR_3->dest.sa), .msg_iov = &VAR_4, .msg_iovlen = 1};
    int VAR_6;

    while ((VAR_6 = (int)FUNC_1(VAR_2, &VAR_5, 0)) == -1 && VAR_1 == VAR_0)
        ;
    return VAR_6;
}
