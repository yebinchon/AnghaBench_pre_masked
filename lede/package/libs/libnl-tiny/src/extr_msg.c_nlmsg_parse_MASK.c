
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct nla_policy {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nlattr**,int,int ,int ,struct nla_policy*) ;
 int FUNC_1 (struct nlmsghdr*,int) ;
 int FUNC_2 (struct nlmsghdr*,int) ;
 int FUNC_3 (struct nlmsghdr*,int) ;

int FUNC_4(struct nlmsghdr *VAR_1, int VAR_2, struct nlattr *VAR_3[],
  int VAR_4, struct nla_policy *VAR_5)
{
 if (!FUNC_3(VAR_1, VAR_2))
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_4, FUNC_1(VAR_1, VAR_2),
    FUNC_2(VAR_1, VAR_2), VAR_5);
}
