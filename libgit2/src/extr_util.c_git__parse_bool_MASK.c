
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*) ;

int FUNC_1(int *VAR_0, const char *VAR_1)
{

 if (VAR_1 == ((void*)0) ||
  !FUNC_0(VAR_1, "true") ||
  !FUNC_0(VAR_1, "yes") ||
  !FUNC_0(VAR_1, "on")) {
  *VAR_0 = 1;
  return 0;
 }
 if (!FUNC_0(VAR_1, "false") ||
  !FUNC_0(VAR_1, "no") ||
  !FUNC_0(VAR_1, "off") ||
  VAR_1[0] == '\0') {
  *VAR_0 = 0;
  return 0;
 }

 return -1;
}
