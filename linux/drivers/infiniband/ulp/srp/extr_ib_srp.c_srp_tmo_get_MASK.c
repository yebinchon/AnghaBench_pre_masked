
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {scalar_t__ arg; } ;


 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, const struct kernel_param *VAR_1)
{
 int VAR_2 = *(int *)VAR_1->arg;

 if (VAR_2 >= 0)
  return FUNC_0(VAR_0, "%d", VAR_2);
 else
  return FUNC_0(VAR_0, "off");
}
