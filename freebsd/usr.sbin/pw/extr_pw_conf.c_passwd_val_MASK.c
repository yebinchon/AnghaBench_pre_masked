
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char** VAR_4 ;
 char** VAR_5 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 char* FUNC_2 (char const*) ;

int
FUNC_3(char const * VAR_6, int VAR_7)
{
 if ((VAR_6 = FUNC_2(VAR_6)) != ((void*)0)) {
  int VAR_8;

  for (VAR_8 = 0; VAR_5[VAR_8]; VAR_8++)
   if (FUNC_1(VAR_6, VAR_5[VAR_8]) == 0)
    return VAR_3;
  for (VAR_8 = 0; VAR_4[VAR_8]; VAR_8++)
   if (FUNC_1(VAR_6, VAR_4[VAR_8]) == 0)
    return VAR_0;




  if (FUNC_1(VAR_6, "random") == 0)
   return VAR_2;
  if (FUNC_1(VAR_6, "none") == 0)
   return VAR_1;

  FUNC_0(1, "Invalid value for default password");
 }
 return VAR_7;
}
