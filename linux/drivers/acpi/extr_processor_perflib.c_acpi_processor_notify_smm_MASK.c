
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (struct module*) ;
 int FUNC_3 (struct module*) ;

int FUNC_4(struct module *VAR_6)
{
 static int VAR_7 = 0;
 int VAR_8;

 if (!VAR_4)
  return -VAR_1;

 if (!FUNC_3(VAR_6))
  return -VAR_2;






 if (VAR_7 > 0) {
  FUNC_2(VAR_6);
  return 0;
 } else if (VAR_7 < 0) {
  FUNC_2(VAR_6);
  return VAR_7;
 }

 VAR_7 = -VAR_3;

 VAR_8 = FUNC_1();
 if (!VAR_8) {
  FUNC_0((VAR_0, "No SMI port or pstate_control\n"));
  FUNC_2(VAR_6);
  return 0;
 }
 if (VAR_8 < 0) {
  FUNC_2(VAR_6);
  return VAR_8;
 }



 VAR_7 = 1;

 if (!VAR_5)
  FUNC_2(VAR_6);

 return 0;
}
