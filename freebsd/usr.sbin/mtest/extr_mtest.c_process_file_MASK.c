
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char) ;
 int FUNC_4 (char*,int,int,int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(char *VAR_0, int VAR_1, int VAR_2)
{
 char VAR_3[80];
 FILE *VAR_4;
 char *VAR_5;

 VAR_4 = FUNC_2(VAR_0, "r");
 if (VAR_4 == ((void*)0)) {
  FUNC_5("fopen");
  return;
 }


 while (FUNC_1(VAR_3, sizeof(VAR_3), VAR_4) != ((void*)0)) {
  VAR_5 = VAR_3;
  while (FUNC_3(*VAR_5))
   VAR_5++;
  if (*VAR_5 != '#' && *VAR_5 != '\n')
   FUNC_4(VAR_5, VAR_1, VAR_2, VAR_4);
 }

 FUNC_0(VAR_4);
}
