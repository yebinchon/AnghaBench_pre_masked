
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlmsghdr {scalar_t__ nlmsg_pid; scalar_t__ nlmsg_seq; int nlmsg_flags; } ;
struct TYPE_2__ {scalar_t__ nl_pid; } ;
struct nl_sock {int s_proto; int s_flags; int s_seq_next; TYPE_1__ s_local; struct nl_cb* s_cb; } ;
struct nl_msg {int nm_protocol; } ;
struct nl_cb {int (* cb_send_ow ) (struct nl_sock*,struct nl_msg*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nl_sock*,struct nl_msg*) ;
 struct nlmsghdr* FUNC_1 (struct nl_msg*) ;
 int FUNC_2 (struct nl_sock*,struct nl_msg*) ;

int FUNC_3(struct nl_sock *VAR_3, struct nl_msg *VAR_4)
{
 struct nlmsghdr *VAR_5;
 struct nl_cb *VAR_6 = VAR_3->s_cb;

 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5->nlmsg_pid == 0)
  VAR_5->nlmsg_pid = VAR_3->s_local.nl_pid;

 if (VAR_5->nlmsg_seq == 0)
  VAR_5->nlmsg_seq = VAR_3->s_seq_next++;

 if (VAR_4->nm_protocol == -1)
  VAR_4->nm_protocol = VAR_3->s_proto;

 VAR_5->nlmsg_flags |= VAR_1;

 if (!(VAR_3->s_flags & VAR_2))
  VAR_5->nlmsg_flags |= VAR_0;

 if (VAR_6->cb_send_ow)
  return VAR_6->cb_send_ow(VAR_3, VAR_4);
 else
  return FUNC_0(VAR_3, VAR_4);
}
