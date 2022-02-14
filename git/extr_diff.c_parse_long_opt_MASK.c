
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*,char const*,char const**) ;

int FUNC_2(const char *VAR_0, const char **VAR_1,
     const char **VAR_2)
{
 const char *VAR_3 = VAR_1[0];
 if (!FUNC_1(VAR_3, "--", &VAR_3))
  return 0;
 if (!FUNC_1(VAR_3, VAR_0, &VAR_3))
  return 0;
 if (*VAR_3 == '=') {
  *VAR_2 = VAR_3 + 1;
  return 1;
 }
 if (*VAR_3 != '\0')
  return 0;

 if (!VAR_1[1])
  FUNC_0("Option '--%s' requires a value", VAR_0);
 *VAR_2 = VAR_1[1];
 return 2;
}
