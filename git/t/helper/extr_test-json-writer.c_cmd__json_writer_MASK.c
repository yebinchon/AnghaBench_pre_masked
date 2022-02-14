
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 () ;

int FUNC_3(int VAR_1, const char **VAR_2)
{
 VAR_1--;
 VAR_2++;

 if (VAR_1 > 0 && VAR_2[0][0] == '-') {
  if (!FUNC_1(VAR_2[0], "-u") || !FUNC_1(VAR_2[0], "--unit"))
   return FUNC_2();

  if (!FUNC_1(VAR_2[0], "-p") || !FUNC_1(VAR_2[0], "--pretty"))
   VAR_0 = 1;
 }

 return FUNC_0();
}
