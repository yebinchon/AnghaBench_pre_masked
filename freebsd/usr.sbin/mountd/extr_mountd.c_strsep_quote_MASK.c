
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char) ;

__attribute__((used)) static char *
FUNC_1(char **VAR_0, const char *VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4;
 char VAR_5 = 0;

 if (VAR_0 == ((void*)0) || *VAR_0 == ((void*)0))
  return (((void*)0));

 VAR_2 = VAR_3 = VAR_4 = *VAR_0;

 while (*VAR_2) {
  if (*VAR_2 == '\\') {
   VAR_2++;





   if (*VAR_2) {
    *VAR_3++ = *VAR_2++;
   }
   continue;
  }
  if (VAR_5 == 0 && (*VAR_2 == '\'' || *VAR_2 == '"')) {
   VAR_5 = *VAR_2++;
   continue;
  }
  if (VAR_5 && *VAR_2 == VAR_5) {

   VAR_5 = 0;
   VAR_2++;
   continue;
  }
  if (!VAR_5 && FUNC_0(VAR_1, *VAR_2))
   break;
  *VAR_3++ = *VAR_2++;
 }

 *VAR_0 = (*VAR_2 == '\0') ? ((void*)0) : VAR_2 + 1;
 *VAR_3 = 0;
 return (VAR_4);
}
