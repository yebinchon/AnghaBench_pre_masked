
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*) ;

int FUNC_2 (const char *VAR_0) {
  const int VAR_1 = FUNC_1 (VAR_0);
  if (VAR_1 > 7 && !FUNC_0 (VAR_0 + VAR_1 - 7, ".bin.bz")) {
    return 1;
  }
  if (VAR_1 > 4 && !FUNC_0 (VAR_0 + VAR_1 - 4, ".bin")) {
    return 0;
  }
  return -1;
}
