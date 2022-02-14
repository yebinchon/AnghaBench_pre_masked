
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,char**,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 () ;

int
FUNC_8(int VAR_1, char **VAR_2)
{
 char *VAR_3;
 int VAR_4;

 if (FUNC_1() < 0 || FUNC_0() < 0)
  FUNC_3(1, "capsicum");

 while ((VAR_4 = FUNC_5(VAR_1, VAR_2, "")) != -1)
  switch(VAR_4) {
  case '?':
  default:
   FUNC_7();
  }
 VAR_1 -= VAR_0;
 VAR_2 += VAR_0;

 if (VAR_1 < 1)
  FUNC_7();

 while (VAR_1--) {
  if ((VAR_3 = FUNC_2(*VAR_2)) == ((void*)0))
   FUNC_3(1, "%s", *VAR_2);
  VAR_2++;
  (void)FUNC_6("%s\n", VAR_3);
 }
 FUNC_4(0);
}
