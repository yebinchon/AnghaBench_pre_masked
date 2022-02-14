
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {int nlmsg_flags; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nlattr**,int,int ,int ,int ,int *) ;
 int FUNC_1 (struct nlmsghdr const*) ;
 int FUNC_2 (struct nlmsghdr const*) ;

__attribute__((used)) static inline int FUNC_3(const struct nlmsghdr *VAR_3)
{
 struct nlattr *VAR_4[VAR_0];
 int VAR_5;

 if (VAR_3->nlmsg_flags & VAR_1)
  return 0;

 VAR_5 = FUNC_0(VAR_4, VAR_0 - 1, FUNC_1(VAR_3),
       FUNC_2(VAR_3), VAR_2, ((void*)0));
 if (VAR_5)
  return 0;

 return 1;
}
