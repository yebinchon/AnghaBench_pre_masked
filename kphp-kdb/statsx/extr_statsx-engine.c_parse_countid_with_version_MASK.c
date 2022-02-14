
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*,long long*,...) ;
 scalar_t__ FUNC_1 (char const*,char) ;

int FUNC_2(const char *VAR_0, long long *VAR_1, int *VAR_2) {
  *VAR_2 = -1;
  if (FUNC_1(VAR_0, '@') != 0) {
    return FUNC_0(VAR_0, "%lld@%d", VAR_1, VAR_2) == 2;
  }
  return FUNC_0(VAR_0, "%lld", VAR_1) == 1;
}
