
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char const*,int) ;

const char *FUNC_2(const char *VAR_0, const char *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);

 do {
  if (!FUNC_1(VAR_0, VAR_1, VAR_2) && VAR_0[VAR_2] == '=')
   return VAR_0 + VAR_2 + 1;

  VAR_0 += FUNC_0(VAR_0) + 1;
 } while (FUNC_0(VAR_0) != 0);

 return ((void*)0);
}
