
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char*) ;

int FUNC_2(const char *VAR_1, const char *VAR_2)
{
 if (VAR_2) {
  if (!FUNC_1(VAR_2, "never"))
   return 0;
  if (!FUNC_1(VAR_2, "always"))
   return 1;
  if (!FUNC_1(VAR_2, "auto"))
   return VAR_0;
 }

 if (!VAR_1)
  return -1;


 if (!FUNC_0(VAR_1, VAR_2))
  return 0;


 return VAR_0;
}
