
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 long long FUNC_1 () ;
 int FUNC_2 (int ,char*,long long) ;

long long FUNC_3 (int *VAR_1) {
  if (FUNC_0()) {
    return 0;
  }
  long long VAR_2 = FUNC_1();
  if (VAR_2 >= 0) {
    *VAR_1 = (VAR_2 >> 29) & 1;
    VAR_2 -= (*VAR_1 << 29);

    if (VAR_2 & (1 << 30)) {
      long long VAR_3 = FUNC_1();
      if (VAR_3 >= 0) {
        return (VAR_2 - (1 << 30)) + (VAR_3 << 29);
      }
    } else {
      return VAR_2;
    }
  }
  FUNC_2 (VAR_0, "Wrong mask %lld", VAR_2);
  return 0;
}
