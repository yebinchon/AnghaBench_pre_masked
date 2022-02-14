
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {int nlmsg_type; int nlmsg_flags; } ;
struct nl_msg {int dummy; } ;


 int FUNC_0 (int,char*,struct nl_msg*) ;
 struct nl_msg* FUNC_1 (struct nlmsghdr*) ;

struct nl_msg *FUNC_2(int VAR_0, int VAR_1)
{
 struct nl_msg *VAR_2;
 struct nlmsghdr VAR_3 = {
  .nlmsg_type = VAR_0,
  .nlmsg_flags = VAR_1,
 };

 VAR_2 = FUNC_1(&VAR_3);
 if (VAR_2)
  FUNC_0(2, "msg %p: Allocated new simple message\n", VAR_2);

 return VAR_2;
}
