
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(char *VAR_2[], char *VAR_3)
{
 char **VAR_4;

 for (VAR_4 = VAR_2; *VAR_4 && *VAR_4 != VAR_1; VAR_4++);
 if (VAR_4 >= VAR_2 + VAR_0) {
  FUNC_1("memory overflow in unit reduction");
  return 1;
 }
 if (!*VAR_4)
  *(VAR_4 + 1) = ((void*)0);
 *VAR_4 = FUNC_0(VAR_3);
 return 0;
}
