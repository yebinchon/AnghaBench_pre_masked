
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;





 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(char *VAR_1, const struct kernel_param *VAR_2)
{
 switch (VAR_0) {
 case 129:
  FUNC_0(VAR_1, "none");
  break;

 case 130:
  FUNC_0(VAR_1, "event");
  break;

 case 128:
  FUNC_0(VAR_1, "string");
  break;

 default:
  FUNC_0(VAR_1, "???");
  break;
 }

 return FUNC_1(VAR_1);
}
