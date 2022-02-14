
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const**) ;
 char* VAR_0 ;
 int* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (char const*,char*) ;
 char** VAR_3 ;
 size_t VAR_4 ;

int
FUNC_2(char *VAR_5, char *VAR_6)
{
 int *VAR_7, VAR_8;
 char **VAR_9;
 const char *VAR_10;

 if (VAR_4 == 0 && VAR_2 == 0)
  return(1);



 for (VAR_9 = VAR_3; VAR_9 < &VAR_3[VAR_4]; VAR_9++)
  if (!FUNC_1(*VAR_9, VAR_5))
   return(1);



 VAR_8 = FUNC_0(VAR_6, &VAR_10);
 for (VAR_7 = VAR_1; VAR_7 < &VAR_1[VAR_2]; VAR_7++)
  if (*VAR_7 == VAR_8 && !FUNC_1(VAR_10, VAR_0))
   return(1);
 return(0);
}
