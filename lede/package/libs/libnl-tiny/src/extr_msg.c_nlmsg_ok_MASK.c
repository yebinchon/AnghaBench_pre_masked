
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {int nlmsg_len; } ;



int FUNC_0(const struct nlmsghdr *VAR_0, int VAR_1)
{
 return (VAR_1 >= sizeof(struct nlmsghdr) &&
  VAR_0->nlmsg_len >= sizeof(struct nlmsghdr) &&
  VAR_0->nlmsg_len <= VAR_1);
}
