
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,char**) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_2, const char *VAR_3, const char *VAR_4,
    const char *VAR_5, char **VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_4, VAR_6);
 if (VAR_7 >= 0 || VAR_7 == VAR_1)
  return VAR_7;
 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_6);
 if (VAR_7 >= 0 || VAR_7 == VAR_1)
  return VAR_7;
 if (VAR_5) {
  *VAR_6 = FUNC_1(VAR_5);
  if (*VAR_6 == ((void*)0))
   return VAR_1;
  return FUNC_2(*VAR_6);
 }
 return VAR_0;
}
