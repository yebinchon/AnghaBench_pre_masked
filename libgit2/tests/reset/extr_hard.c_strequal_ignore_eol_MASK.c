
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const char *VAR_0, const char *VAR_1)
{
 while (*VAR_0 && *VAR_1) {
  if (*VAR_0 != *VAR_1) {
   while (*VAR_0 == '\r' || *VAR_0 == '\n') ++VAR_0;
   while (*VAR_1 == '\r' || *VAR_1 == '\n') ++VAR_1;
   if (*VAR_0 != *VAR_1)
    return 0;
  } else {
   VAR_0++; VAR_1++;
  }
 }
 return (!*VAR_0 && !*VAR_1);
}
