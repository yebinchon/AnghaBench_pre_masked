
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 char FUNC_0 (char) ;

int
FUNC_1(register char *VAR_1, register char *VAR_2, register int VAR_3)
{
 if (VAR_0) {
     do
  if (*VAR_2 - FUNC_0(*VAR_1))
   return (*VAR_2 - FUNC_0(*VAR_1));
  else {
   VAR_2++;
   VAR_1++;
  }
     while (--VAR_3);
 } else {
     do
  if (*VAR_2 - *VAR_1)
   return (*VAR_2 - *VAR_1);
  else {
   VAR_2++;
   VAR_1++;
  }
     while (--VAR_3);
 }
 return(0);
}
