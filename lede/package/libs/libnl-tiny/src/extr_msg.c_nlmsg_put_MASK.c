
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint32_t ;
struct nlmsghdr {int nlmsg_type; int nlmsg_flags; void* nlmsg_seq; void* nlmsg_pid; } ;
struct nl_msg {TYPE_1__* nm_nlh; } ;
struct TYPE_2__ {scalar_t__ nlmsg_len; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*,struct nl_msg*,int,int,void*,void*) ;
 int * FUNC_2 (struct nl_msg*,int,int ) ;

struct nlmsghdr *FUNC_3(struct nl_msg *VAR_2, uint32_t VAR_3, uint32_t VAR_4,
      int VAR_5, int VAR_6, int VAR_7)
{
 struct nlmsghdr *VAR_8;

 if (VAR_2->nm_nlh->nlmsg_len < VAR_1)
  FUNC_0();

 VAR_8 = (struct nlmsghdr *) VAR_2->nm_nlh;
 VAR_8->nlmsg_type = VAR_5;
 VAR_8->nlmsg_flags = VAR_7;
 VAR_8->nlmsg_pid = VAR_3;
 VAR_8->nlmsg_seq = VAR_4;

 FUNC_1(2, "msg %p: Added netlink header type=%d, flags=%d, pid=%d, "
    "seq=%d\n", VAR_2, VAR_5, VAR_7, VAR_3, VAR_4);

 if (VAR_6 > 0 &&
     FUNC_2(VAR_2, VAR_6, VAR_0) == ((void*)0))
  return ((void*)0);

 return VAR_8;
}
