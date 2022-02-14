
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unl {int dummy; } ;
struct nlattr {int dummy; } ;
struct nl_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nl_msg*,int ,int) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nl_msg*) ;
 struct nlattr* FUNC_3 (struct unl*,struct nl_msg*,int ) ;
 struct nl_msg* FUNC_4 (struct unl*,int ,int) ;
 scalar_t__ FUNC_5 (struct unl*,struct nl_msg*,struct nl_msg**) ;

int FUNC_6(struct unl *VAR_3, int VAR_4)
{
 struct nl_msg *VAR_5;
 struct nlattr *VAR_6;
 int VAR_7 = -1;

 VAR_5 = FUNC_4(VAR_3, VAR_2, 0);
 if (!VAR_5)
  return -1;

 FUNC_0(VAR_5, VAR_0, VAR_4);
 if (FUNC_5(VAR_3, VAR_5, &VAR_5) < 0)
  return -1;

 VAR_6 = FUNC_3(VAR_3, VAR_5, VAR_1);
 if (!VAR_6)
  goto out;

 VAR_7 = FUNC_1(VAR_6);
out:
nla_put_failure:
 FUNC_2(VAR_5);
 return VAR_7;
}
