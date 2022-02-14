
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char) ;

char *FUNC_2(char *VAR_0, char *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 VAR_3 = FUNC_0(VAR_0) - FUNC_0(VAR_1);
 for (VAR_4 = 0; VAR_4 <= VAR_3; VAR_4++, VAR_0++)
 {

  if (VAR_4)
  {

   while(*VAR_0 && *VAR_0 != ' ' && *VAR_0 != '.' && *VAR_0 != ',' && *VAR_0 != '!') VAR_0++;
   if (!*VAR_0) break;
   VAR_0++;
  }

  for (VAR_5 = 0; VAR_1[VAR_5]; VAR_5++)
  {
   if (VAR_2)
   {
    if (VAR_0[VAR_5] != VAR_1[VAR_5]) break;
   }
   else
   {
    if (FUNC_1(VAR_0[VAR_5]) != FUNC_1(VAR_1[VAR_5])) break;
   }
  }

  if (!VAR_1[VAR_5])
  {

   if (!VAR_0[VAR_5] || VAR_0[VAR_5] == ' ' || VAR_0[VAR_5] == '.' || VAR_0[VAR_5] == ',' || VAR_0[VAR_5] == '!') return VAR_0;
  }
 }
 return ((void*)0);
}
