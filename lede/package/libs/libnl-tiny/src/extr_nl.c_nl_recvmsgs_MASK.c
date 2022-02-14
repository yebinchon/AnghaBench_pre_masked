
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_sock {int dummy; } ;
struct nl_cb {int (* cb_recvmsgs_ow ) (struct nl_sock*,struct nl_cb*) ;} ;


 int FUNC_0 (struct nl_sock*,struct nl_cb*) ;
 int FUNC_1 (struct nl_sock*,struct nl_cb*) ;

int FUNC_2(struct nl_sock *VAR_0, struct nl_cb *VAR_1)
{
 if (VAR_1->cb_recvmsgs_ow)
  return VAR_1->cb_recvmsgs_ow(VAR_0, VAR_1);
 else
  return FUNC_0(VAR_0, VAR_1);
}
