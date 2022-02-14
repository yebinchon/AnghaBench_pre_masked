
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int dummy; } ;


 long long FUNC_0 (struct item const*) ;

int FUNC_1 (const void *VAR_0, const void *VAR_1) {
  long long VAR_2 = FUNC_0 (* ((const struct item **) VAR_0));
  long long VAR_3 = FUNC_0 (* ((const struct item **) VAR_1));
  if (VAR_2 < VAR_3) { return -1; }
  if (VAR_2 > VAR_3) { return 1; }
  return 0;
}
