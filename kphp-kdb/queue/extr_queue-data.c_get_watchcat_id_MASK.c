
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 long long FUNC_1 (char) ;

long long FUNC_2 (char *VAR_0) {
  long long VAR_1 = 0, VAR_2 = 1;
  FUNC_0 (VAR_0[0] == 'w');
  FUNC_0 (VAR_0[1] == '_');
  VAR_0 += 2;
  while (*VAR_0) {
    VAR_1 += FUNC_1 (*VAR_0) * VAR_2;
    VAR_2 *= 62;
    VAR_0++;
  }

  return VAR_1;
}
