
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int,char const*) ;
 int FUNC_1 (char const*,int,char const*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char*,char const**,int*,char const**) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2, *VAR_3;
 int VAR_4;

 if (FUNC_3(VAR_0, "man", &VAR_2, &VAR_4, &VAR_3) < 0 || !VAR_2)
  return 0;

 if (!FUNC_4(VAR_3, "path")) {
  if (!VAR_1)
   return FUNC_2(VAR_0);
  return FUNC_1(VAR_2, VAR_4, VAR_1);
 }
 if (!FUNC_4(VAR_3, "cmd")) {
  if (!VAR_1)
   return FUNC_2(VAR_0);
  return FUNC_0(VAR_2, VAR_4, VAR_1);
 }

 return 0;
}
