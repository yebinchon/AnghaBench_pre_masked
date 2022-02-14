
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int args; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,int) ;
 int FUNC_1 (struct device*,struct of_phandle_args*) ;
 int FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1,
     struct of_phandle_args *VAR_2)
{
 if (!FUNC_2(VAR_1))
  return -VAR_0;

 FUNC_0(VAR_1, VAR_2->args, 1);


 if (FUNC_3(VAR_1))
  return 0;

 return FUNC_1(VAR_1, VAR_2);
}
