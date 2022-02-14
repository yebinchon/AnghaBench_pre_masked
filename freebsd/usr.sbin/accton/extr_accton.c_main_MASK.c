
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char**,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 () ;

int
FUNC_5(int VAR_1, char *VAR_2[])
{
 int VAR_3;

 while ((VAR_3 = FUNC_3(VAR_1, VAR_2, "")) != -1)
  switch(VAR_3) {
  case '?':
  default:
   FUNC_4();
  }
 VAR_1 -= VAR_0;
 VAR_2 += VAR_0;

 switch(VAR_1) {
 case 0:
  if (FUNC_0(((void*)0)))
   FUNC_1(1, ((void*)0));
  break;
 case 1:
  if (FUNC_0(*VAR_2))
   FUNC_1(1, "%s", *VAR_2);
  break;
 default:
  FUNC_4();
 }
 FUNC_2(0);
}
