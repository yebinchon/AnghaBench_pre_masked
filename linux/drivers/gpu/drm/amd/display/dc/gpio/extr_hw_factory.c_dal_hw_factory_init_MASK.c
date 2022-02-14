
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_factory {int dummy; } ;
typedef enum dce_version { ____Placeholder_dce_version } dce_version ;
typedef enum dce_environment { ____Placeholder_dce_environment } dce_environment ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct hw_factory*) ;
 int FUNC_3 (struct hw_factory*) ;
 int FUNC_4 (struct hw_factory*) ;
 int FUNC_5 (struct hw_factory*) ;
 int FUNC_6 (struct hw_factory*) ;
 int FUNC_7 (struct hw_factory*) ;
 int FUNC_8 (struct hw_factory*) ;

bool FUNC_9(
 struct hw_factory *VAR_0,
 enum dce_version VAR_1,
 enum dce_environment VAR_2)
{
 if (FUNC_1(VAR_2)) {
  FUNC_8(VAR_0);
  return 1;
 }

 switch (VAR_1) {
 case 134:
 case 133:
 case 132:
  FUNC_4(VAR_0);
  return 1;

 case 140:
  FUNC_2(VAR_0);
  return 1;
 case 139:
 case 138:
 case 137:
  FUNC_2(VAR_0);
  return 1;
 case 136:
 case 135:
  FUNC_3(VAR_0);
  return 1;
 default:
  FUNC_0(0);
  return 0;
 }
}
