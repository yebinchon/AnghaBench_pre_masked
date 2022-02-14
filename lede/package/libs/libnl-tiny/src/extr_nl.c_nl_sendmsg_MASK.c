
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nl_sock {int s_fd; struct nl_cb* s_cb; int s_local; } ;
struct nl_msg {int dummy; } ;
struct nl_cb {scalar_t__* cb_set; } ;
struct msghdr {int msg_iovlen; struct iovec* msg_iov; } ;
struct iovec {void* iov_base; int iov_len; } ;
struct TYPE_2__ {int nlmsg_len; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct nl_cb*,size_t,struct nl_msg*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct nl_msg*) ;
 int FUNC_3 (struct nl_msg*,int *) ;
 int FUNC_4 (int ,struct msghdr*,int ) ;

int FUNC_5(struct nl_sock *VAR_3, struct nl_msg *VAR_4, struct msghdr *VAR_5)
{
 struct nl_cb *VAR_6;
 int VAR_7;

 struct iovec VAR_8 = {
  .iov_base = (void *) FUNC_2(VAR_4),
  .iov_len = FUNC_2(VAR_4)->nlmsg_len,
 };

 VAR_5->msg_iov = &VAR_8;
 VAR_5->msg_iovlen = 1;

 FUNC_3(VAR_4, &VAR_3->s_local);

 VAR_6 = VAR_3->s_cb;
 if (VAR_6->cb_set[VAR_0])
  if (FUNC_0(VAR_6, VAR_0, VAR_4) != VAR_1)
   return 0;

 VAR_7 = FUNC_4(VAR_3->s_fd, VAR_5, 0);
 if (VAR_7 < 0)
  return -FUNC_1(VAR_2);

 return VAR_7;
}
