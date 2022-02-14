
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long long* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

int FUNC_0 (const void *VAR_6, const void *VAR_7) {
  int VAR_8 = *(int *)VAR_6, VAR_9 = *(int *)VAR_7;

  if (VAR_4 == VAR_5) {
    double VAR_10 = *(double *)&VAR_0[VAR_8 + VAR_1 * VAR_3],
           VAR_11 = *(double *)&VAR_0[VAR_9 + VAR_1 * VAR_3];
    if (VAR_10 != VAR_11) {
      return (2 * (VAR_10 > VAR_11) - 1) * VAR_2;
    }
    if (VAR_8 != VAR_9) {
      return (2 * (VAR_8 > VAR_9) - 1) * VAR_2;
    }
    return 0;
  }
  long long VAR_12 = VAR_0[VAR_8 + VAR_1 * VAR_3],
            VAR_13 = VAR_0[VAR_9 + VAR_1 * VAR_3];
  if (VAR_12 != VAR_13) {
    return (2 * (VAR_12 > VAR_13) - 1) * VAR_2;
  }
  if (VAR_8 != VAR_9) {
    return (2 * (VAR_8 > VAR_9) - 1) * VAR_2;
  }
  return 0;
}
