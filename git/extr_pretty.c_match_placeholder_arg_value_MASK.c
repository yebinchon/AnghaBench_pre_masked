
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*,char const**) ;
 size_t FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, const char *VAR_1,
           const char **VAR_2, const char **VAR_3,
           size_t *VAR_4)
{
 const char *VAR_5;

 if (!(FUNC_0(VAR_0, VAR_1, &VAR_5)))
  return 0;
 if (VAR_3) {
  if (*VAR_5 == '=') {
   *VAR_3 = VAR_5 + 1;
   *VAR_4 = FUNC_1(*VAR_3, ",)");
   VAR_5 = *VAR_3 + *VAR_4;
  } else {
   if (*VAR_5 != ',' && *VAR_5 != ')')
    return 0;
   *VAR_3 = ((void*)0);
   *VAR_4 = 0;
  }
 }
 if (*VAR_5 == ',') {
  *VAR_2 = VAR_5 + 1;
  return 1;
 }
 if (*VAR_5 == ')') {
  *VAR_2 = VAR_5;
  return 1;
 }
 return 0;
}
