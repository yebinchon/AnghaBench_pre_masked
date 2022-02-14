
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char) ;

int FUNC_3(char *VAR_0, char *VAR_1, int VAR_2)
{
 char VAR_3[1024];
 char *VAR_4;
 int VAR_5, VAR_6;

 while(*VAR_0)
 {
  if (*VAR_0 == '*')
  {
   VAR_0++;
   for (VAR_5 = 0; *VAR_0; VAR_5++)
   {
    if (*VAR_0 == '*' || *VAR_0 == '?') break;
    VAR_3[VAR_5] = *VAR_0;
    VAR_0++;
   }
   VAR_3[VAR_5] = '\0';
   if (FUNC_1(VAR_3))
   {
    VAR_4 = FUNC_0(VAR_1, VAR_3, VAR_2);
    if (!VAR_4) return 0;
    VAR_1 = VAR_4 + FUNC_1(VAR_3);
   }
  }
  else if (*VAR_0 == '?')
  {
   VAR_0++;
   VAR_1++;
  }
  else if (*VAR_0 == '[' && *(VAR_0+1) == '[')
  {
   VAR_0++;
  }
  else if (*VAR_0 == '[')
  {
   VAR_0++;
   VAR_6 = 0;
   while(*VAR_0 && !VAR_6)
   {
    if (*VAR_0 == ']' && *(VAR_0+1) != ']') break;
    if (*(VAR_0+1) == '-' && *(VAR_0+2) && (*(VAR_0+2) != ']' || *(VAR_0+3) == ']'))
    {
     if (VAR_2)
     {
      if (*VAR_1 >= *VAR_0 && *VAR_1 <= *(VAR_0+2)) VAR_6 = 1;
     }
     else
     {
      if (FUNC_2(*VAR_1) >= FUNC_2(*VAR_0) &&
       FUNC_2(*VAR_1) <= FUNC_2(*(VAR_0+2))) VAR_6 = 1;
     }
     VAR_0 += 3;
    }
    else
    {
     if (VAR_2)
     {
      if (*VAR_0 == *VAR_1) VAR_6 = 1;
     }
     else
     {
      if (FUNC_2(*VAR_0) == FUNC_2(*VAR_1)) VAR_6 = 1;
     }
     VAR_0++;
    }
   }
   if (!VAR_6) return 0;
   while(*VAR_0)
   {
    if (*VAR_0 == ']' && *(VAR_0+1) != ']') break;
    VAR_0++;
   }
   VAR_0++;
   VAR_1++;
  }
  else
  {
   if (VAR_2)
   {
    if (*VAR_0 != *VAR_1) return 0;
   }
   else
   {
    if (FUNC_2(*VAR_0) != FUNC_2(*VAR_1)) return 0;
   }
   VAR_0++;
   VAR_1++;
  }
 }
 return 1;
}
