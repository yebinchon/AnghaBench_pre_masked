
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {int nlmsg_len; } ;
struct nl_msg {int nm_nlh; } ;


 int FUNC_0 (int ) ;
 struct nl_msg* FUNC_1 (int ) ;
 int FUNC_2 (int ,struct nlmsghdr*,int ) ;
 int FUNC_3 (struct nl_msg*) ;

struct nl_msg *FUNC_4(struct nlmsghdr *VAR_0)
{
 struct nl_msg *VAR_1;

 VAR_1 = FUNC_1(FUNC_0(VAR_0->nlmsg_len));
 if (!VAR_1)
  goto errout;

 FUNC_2(VAR_1->nm_nlh, VAR_0, VAR_0->nlmsg_len);

 return VAR_1;
errout:
 FUNC_3(VAR_1);
 return ((void*)0);
}
