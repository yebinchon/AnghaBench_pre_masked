
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {int nlmsg_len; } ;
struct genlmsghdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(const struct genlmsghdr *VAR_2)
{
 struct nlmsghdr *VAR_3 = (struct nlmsghdr *)((unsigned char *)VAR_2 -
       VAR_1);
 return (VAR_3->nlmsg_len - VAR_0 - VAR_1);
}
