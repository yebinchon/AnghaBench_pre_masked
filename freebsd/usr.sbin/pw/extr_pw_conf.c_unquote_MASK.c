
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char const) ;

__attribute__((used)) static char *
FUNC_1(char const * VAR_0)
{
 if (VAR_0 && (*VAR_0 == '"' || *VAR_0 == '\'')) {
  char *VAR_1 = FUNC_0(VAR_0 + 1, *VAR_0);

  if (VAR_1 != ((void*)0))
   *VAR_1 = '\0';
  return (char *) (*++VAR_0 ? VAR_0 : ((void*)0));
 }
 return (char *) VAR_0;
}
