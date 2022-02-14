
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,char const*) ;

int FUNC_2(phandle VAR_0, const char *VAR_1)
{
 char VAR_2 [32];

 *VAR_2 = 0;
 do {
  FUNC_0(VAR_0, VAR_2, VAR_2);
  if (!FUNC_1(VAR_2, VAR_1))
   return 1;
 } while (*VAR_2);
 return 0;
}
