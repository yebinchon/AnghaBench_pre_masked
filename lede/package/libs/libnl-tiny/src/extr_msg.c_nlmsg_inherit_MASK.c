
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {int nlmsg_pid; int nlmsg_seq; int nlmsg_flags; int nlmsg_type; } ;
struct nl_msg {struct nlmsghdr* nm_nlh; } ;


 struct nl_msg* FUNC_0 () ;

struct nl_msg *FUNC_1(struct nlmsghdr *VAR_0)
{
 struct nl_msg *VAR_1;

 VAR_1 = FUNC_0();
 if (VAR_1 && VAR_0) {
  struct nlmsghdr *VAR_2 = VAR_1->nm_nlh;

  VAR_2->nlmsg_type = VAR_0->nlmsg_type;
  VAR_2->nlmsg_flags = VAR_0->nlmsg_flags;
  VAR_2->nlmsg_seq = VAR_0->nlmsg_seq;
  VAR_2->nlmsg_pid = VAR_0->nlmsg_pid;
 }

 return VAR_1;
}
