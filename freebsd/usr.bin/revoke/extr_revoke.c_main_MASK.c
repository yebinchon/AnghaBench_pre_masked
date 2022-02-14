
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 () ;

int
FUNC_3(int VAR_0, char *VAR_1[])
{
 char **VAR_2;
 int VAR_3 = 0;

 if (VAR_0 == 1)
  FUNC_2();

 for (VAR_2 = &VAR_1[1]; *VAR_2 != ((void*)0); VAR_2++) {
  if (FUNC_1(*VAR_2) != 0) {
   FUNC_0(*VAR_2);
   VAR_3 = 1;
  }
 }

 return (VAR_3);
}
