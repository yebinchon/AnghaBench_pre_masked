
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;

void
FUNC_3(int VAR_1, short VAR_2, void *VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_1) {
 case 128:
 case 129:
  VAR_4 = 1;

 case 131:
  if (FUNC_0(VAR_0, "ldap client")) {
   VAR_0 = 0;
   VAR_4 = 1;
  }
  if (VAR_4)
   FUNC_2();
  break;
 case 130:

  break;
 default:
  FUNC_1("unexpected signal");
 }
}
