
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nla_policy {int dummy; } ;


 int FUNC_0 (int,struct nlattr*) ;
 int FUNC_1 (struct nlattr**,int,struct nlattr*,struct nla_policy const*,int *) ;

int FUNC_2(struct nlattr *VAR_0[], int VAR_1, struct nlattr *VAR_2,
     const struct nla_policy *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_4)
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
        ((void*)0));

 return VAR_4;
}
