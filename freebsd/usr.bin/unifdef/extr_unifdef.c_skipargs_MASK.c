
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;

__attribute__((used)) static const char *
FUNC_1(const char *VAR_0)
{
 const char *VAR_1 = VAR_0;
 int VAR_2 = 0;
 VAR_0 = FUNC_0(VAR_0);
 if (*VAR_0 != '(')
  return (VAR_0);
 do {
  if (*VAR_0 == '(')
   VAR_2++;
  if (*VAR_0 == ')')
   VAR_2--;
  VAR_0 = FUNC_0(VAR_0+1);
 } while (VAR_2 != 0 && *VAR_0 != '\0');
 if (VAR_2 == 0)
  return (VAR_0);
 else

  return (VAR_1);
}
