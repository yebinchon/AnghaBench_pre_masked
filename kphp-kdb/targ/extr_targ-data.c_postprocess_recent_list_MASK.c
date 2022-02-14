
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long VAR_0 ;
 int* VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (int*,long) ;
 int FUNC_1 (long long*,long) ;

int FUNC_2 (int VAR_3) {
  VAR_2 = 0;
  if (!VAR_3 || VAR_0 < 0) {
    return 0;
  }
  if (!VAR_0) {
    return VAR_3;
  }
  FUNC_1 ((long long *)VAR_1, VAR_3 - 1);
  long VAR_4, VAR_5 = 0;
  VAR_1[1] = 1;
  for (VAR_4 = 1; VAR_4 < VAR_3; VAR_4++) {
    if (VAR_1[VAR_4 * 2] == VAR_1[VAR_5 * 2]) {
      ++VAR_1[VAR_5 * 2 + 1];
    } else {
      ++VAR_5;
      VAR_1[VAR_5 * 2] = VAR_1[VAR_4 * 2];
      VAR_1[VAR_5 * 2 + 1] = 1;
    }
  }
  ++VAR_5;
  FUNC_0 (VAR_1, VAR_5);
  FUNC_1 ((long long *)VAR_1, VAR_5 - 1);
  FUNC_0 (VAR_1, VAR_5);
  if (VAR_0 > VAR_5) {
    VAR_0 = VAR_5;
  }
  VAR_2 = VAR_0 * 2;
  return VAR_3;
}
