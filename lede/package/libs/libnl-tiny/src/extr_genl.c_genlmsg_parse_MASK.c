
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nla_policy {int dummy; } ;
struct genlmsghdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct genlmsghdr*,int) ;
 int FUNC_1 (struct genlmsghdr*,int) ;
 int FUNC_2 (struct nlmsghdr*,int) ;
 int FUNC_3 (struct nlattr**,int,int ,int ,struct nla_policy*) ;
 struct genlmsghdr* FUNC_4 (struct nlmsghdr*) ;

int FUNC_5(struct nlmsghdr *VAR_1, int VAR_2, struct nlattr *VAR_3[],
    int VAR_4, struct nla_policy *VAR_5)
{
 struct genlmsghdr *VAR_6;

 if (!FUNC_2(VAR_1, VAR_2))
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_1);
 return FUNC_3(VAR_3, VAR_4, FUNC_0(VAR_6, VAR_2),
    FUNC_1(VAR_6, VAR_2), VAR_5);
}
