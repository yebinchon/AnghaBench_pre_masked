
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char*) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int,char**,char*) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 (char*) ;

int
FUNC_15(int VAR_3, char *VAR_4[])
{
 int VAR_5, VAR_6;

 if ((VAR_0 = FUNC_5()) != 0)
  FUNC_14("need root permissions to function properly, check setuid bit");
 if (FUNC_11(FUNC_8()) < 0)
  FUNC_2(1, "seteuid");

 if ((VAR_2 = FUNC_7(FUNC_8())) == ((void*)0))
  FUNC_3(1, "unknown user");

 VAR_6 = 0;
 while ((VAR_5 = FUNC_6(VAR_3, VAR_4, "-l")) != -1) {
  switch (VAR_5) {
  case '-':
  case 'l':
   VAR_6 = 1;
   break;
  default:
   FUNC_13();
  }
 }
 VAR_3 -= VAR_1;
 VAR_4 += VAR_1;

 switch (VAR_3) {
 case 0:
  FUNC_10();
  break;
 case 1:
  FUNC_0(*VAR_4);
  break;
 default:
  FUNC_13();
 }

 if (FUNC_11(VAR_0) < 0)
  FUNC_2(1, "seteuid");
 if (FUNC_12(FUNC_8()) < 0)
  FUNC_2(1, "setuid");

 if (VAR_6)
  FUNC_9();
 else
  FUNC_1();


 FUNC_4(1);
}
