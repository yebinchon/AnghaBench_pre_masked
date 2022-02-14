
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct nlmsghdr {int nlmsg_flags; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {int sk; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct nlmsghdr*) ;
 int FUNC_2 (struct nlmsghdr*) ;

int FUNC_3(struct sk_buff *VAR_2,
        struct nlmsghdr *VAR_3,
        struct netlink_ext_ack *VAR_4)
{
 if ((VAR_3->nlmsg_flags & VAR_1) ||
     !(FUNC_0(VAR_2).sk))
  return -VAR_0;

 if (FUNC_1(VAR_3))
  FUNC_2(VAR_3);

 return VAR_2->len;
}
