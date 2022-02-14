
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;

int
FUNC_2(char **VAR_0)
{
 char **VAR_1, *VAR_2;

 for (VAR_1 = VAR_0; *VAR_1 != ((void*)0); VAR_1++) {
  VAR_2 = *VAR_1;
  if ((VAR_2 = FUNC_0(VAR_2)) != ((void*)0)) {
   if (VAR_1 != VAR_0)
    FUNC_1(" ");
   FUNC_1("%s", VAR_2);
  }
 }
 FUNC_1("\n");
 return (0);
}
