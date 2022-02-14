
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int,char**,char*) ;
 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*,...) ;

int
FUNC_5(int VAR_2, char *VAR_3[])
{
 int VAR_4;
 int VAR_5 = 0;

 if (FUNC_1() < 0 || FUNC_0() < 0)
  FUNC_2(1, "capsicum");

 VAR_1 = 2;
 while ((VAR_4 = FUNC_3(VAR_2, VAR_3, VAR_3[1])) != -1)
  switch (VAR_4) {
  case '?':
   VAR_5 = 1;
   break;
  default:
   if (VAR_0 != ((void*)0))
    FUNC_4(" -%c %s", VAR_4, VAR_0);
   else
    FUNC_4(" -%c", VAR_4);
   break;
  }
 FUNC_4(" --");
 for (; VAR_1 < VAR_2; VAR_1++)
  FUNC_4(" %s", VAR_3[VAR_1]);
 FUNC_4("\n");
 return VAR_5;
}
