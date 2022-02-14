
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 char* VAR_0 ;
 int FUNC_2 (char*,char*) ;

int
FUNC_3(void *VAR_1)
{
 char **VAR_2 = VAR_1;
 char *VAR_3;

 if (*VAR_2 == ((void*)0)) {
  if (VAR_0 == ((void*)0))
   return (1);
  VAR_3 = VAR_0;
 } else
  if ((VAR_3 = FUNC_1(*VAR_2)) == ((void*)0))
   return (1);
 if (FUNC_0(VAR_3) < 0) {
  FUNC_2("%s", VAR_3);
  return (1);
 }
 return (0);
}
