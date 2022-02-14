
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;


 struct nlattr* FUNC_0 (int) ;
 int FUNC_1 (int,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct nlattr*,int) ;

struct nlattr *FUNC_3(int VAR_0, struct nlattr *VAR_1, int VAR_2)
{
 int VAR_3;





 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3)
  return FUNC_0(VAR_3);
 return FUNC_2(VAR_1, VAR_2);
}
