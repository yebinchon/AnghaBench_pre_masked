
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, const char *VAR_1, size_t VAR_2) {
 if (VAR_2 == 0)
  return 1;
 do {
  if (FUNC_0(*VAR_0++) != FUNC_0(*VAR_1++))
   return 0;
 } while (--VAR_2 != 0);
 return 1;
}
