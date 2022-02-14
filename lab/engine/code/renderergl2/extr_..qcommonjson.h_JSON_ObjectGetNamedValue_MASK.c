
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char const*) ;
 char* FUNC_1 (char const*,char const*) ;
 char* FUNC_2 (char const*,char const*) ;
 char* FUNC_3 (char const*,char const*) ;
 unsigned int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char const*,unsigned int) ;

const char *FUNC_6(const char *VAR_0, const char *VAR_1, const char *VAR_2)
{
 unsigned int VAR_3 = FUNC_4(VAR_2);

 for (VAR_0 = FUNC_0(VAR_0, VAR_1); VAR_0; VAR_0 = FUNC_1(VAR_0, VAR_1))
 {
  if (*VAR_0 == '"')
  {
   const char *VAR_4, *VAR_5;

   VAR_4 = VAR_0 + 1;
   VAR_0 = FUNC_3(VAR_0, VAR_1);
   VAR_5 = VAR_0 - 1;
   VAR_0 = FUNC_2(VAR_0, VAR_1);

   if ((unsigned int)(VAR_5 - VAR_4) == VAR_3)
    if (FUNC_5(VAR_4, VAR_2, VAR_3) == 0)
     return VAR_0;
  }
 }

 return ((void*)0);
}
