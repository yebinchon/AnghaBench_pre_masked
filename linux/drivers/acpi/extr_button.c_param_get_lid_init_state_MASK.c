
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;





 int VAR_0 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(char *VAR_1,
        const struct kernel_param *VAR_2)
{
 switch (VAR_0) {
 case 128:
  return FUNC_0(VAR_1, "open");
 case 129:
  return FUNC_0(VAR_1, "method");
 case 130:
  return FUNC_0(VAR_1, "ignore");
 default:
  return FUNC_0(VAR_1, "invalid");
 }
 return 0;
}
