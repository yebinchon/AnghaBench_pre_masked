
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iovec {void* iov_len; int iov_base; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_5__ {void* len; int ptr; int type; int src; int dst; } ;
typedef TYPE_1__ packet_t ;
struct TYPE_6__ {int fd; } ;
typedef TYPE_2__ channel_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct iovec*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,struct iovec*,int ) ;

__attribute__((used)) static bool
FUNC_3(channel_t *VAR_2, packet_t *VAR_3)
{
 struct iovec VAR_4[4];
 ssize_t VAR_5;

 VAR_4[0].iov_base = VAR_3->dst;
 VAR_4[0].iov_len = VAR_0;
 VAR_4[1].iov_base = VAR_3->src;
 VAR_4[1].iov_len = VAR_0;
 VAR_4[2].iov_base = VAR_3->type;
 VAR_4[2].iov_len = VAR_1;
 VAR_4[3].iov_base = VAR_3->ptr;
 VAR_4[3].iov_len = VAR_3->len;


 VAR_5 = FUNC_2(VAR_2->fd, VAR_4, FUNC_0(VAR_4));
 FUNC_1(VAR_5 > 0);

 return 1;
}
