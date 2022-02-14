
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;

char *FUNC_0 (char *VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_4 = 0;
 VAR_1[0] = 0;

 if (!VAR_2)
  return ((void*)0);


skipwhite:
 while ( (VAR_3 = *VAR_2) <= ' ')
 {
  if (VAR_3 == 0)
  {
   VAR_0 = 1;
   return ((void*)0);
  }
  VAR_2++;
 }


 if (VAR_3=='/' && VAR_2[1] == '/')
 {
  while (*VAR_2 && *VAR_2 != '\n')
   VAR_2++;
  goto skipwhite;
 }



 if (VAR_3 == '\"')
 {
  VAR_2++;
  do
  {
   VAR_3 = *VAR_2++;
   if (VAR_3=='\"')
   {
    VAR_1[VAR_4] = 0;
    return VAR_2;
   }
   VAR_1[VAR_4] = VAR_3;
   VAR_4++;
  } while (1);
 }


 if (VAR_3=='{' || VAR_3=='}'|| VAR_3==')'|| VAR_3=='(' || VAR_3=='\'' || VAR_3==':')
 {
  VAR_1[VAR_4] = VAR_3;
  VAR_4++;
  VAR_1[VAR_4] = 0;
  return VAR_2+1;
 }


 do
 {
  VAR_1[VAR_4] = VAR_3;
  VAR_2++;
  VAR_4++;
  VAR_3 = *VAR_2;
 if (VAR_3=='{' || VAR_3=='}'|| VAR_3==')'|| VAR_3=='(' || VAR_3=='\'' || VAR_3==':')
   break;
 } while (VAR_3>32);

 VAR_1[VAR_4] = 0;
 return VAR_2;
}
