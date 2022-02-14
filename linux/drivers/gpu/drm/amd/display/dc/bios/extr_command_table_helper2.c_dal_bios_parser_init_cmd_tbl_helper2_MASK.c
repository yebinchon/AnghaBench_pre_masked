
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command_table_helper {int dummy; } ;
typedef enum dce_version { ____Placeholder_dce_version } dce_version ;


 int FUNC_0 () ;
 struct command_table_helper* FUNC_1 () ;
 struct command_table_helper* FUNC_2 () ;
 struct command_table_helper* FUNC_3 () ;

bool FUNC_4(
 const struct command_table_helper **VAR_0,
 enum dce_version VAR_1)
{
 switch (VAR_1) {
 case 134:
 case 133:
 case 132:
  *VAR_0 = FUNC_3();
  return 1;

 case 140:
  *VAR_0 = FUNC_1();
  return 1;

 case 139:
  *VAR_0 = FUNC_1();
  return 1;

 case 138:
 case 137:
  *VAR_0 = FUNC_2();
  return 1;
 case 136:
 case 135:
  *VAR_0 = FUNC_2();
  return 1;

 default:

  FUNC_0();
  return 0;
 }
}
