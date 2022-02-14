
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,size_t*) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int * VAR_0 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*,size_t) ;

void
FUNC_7(char *VAR_1)
{
 FILE *VAR_2;
 char *VAR_3, *VAR_4;
 size_t VAR_5;

 if (FUNC_5(VAR_1, "-") == 0)
  VAR_2 = VAR_0;
 else if ((VAR_2 = FUNC_3(VAR_1, "r")) == ((void*)0))
  FUNC_0(2, "%s", VAR_1);
 while ((VAR_3 = FUNC_2(VAR_2, &VAR_5)) != ((void*)0)) {
  if (VAR_3[VAR_5 - 1] == '\n')
   VAR_5--;
  if ((VAR_4 = FUNC_6(VAR_3, VAR_5)) == ((void*)0))
   FUNC_0(2, "xstrndup");
  FUNC_4(VAR_4);
 }
 if (FUNC_5(VAR_1, "-") != 0)
  FUNC_1(VAR_2);
}
