
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0 (const char *VAR_0, long long *VAR_1) {
  int VAR_2 = 1;
  if (VAR_0[0] == '-' || VAR_0[0] == '+') {
    if (VAR_0[0] == '-') {
      VAR_2 = -1;
    }
    VAR_0++;
  }

  const char *VAR_3 = VAR_0;
  unsigned long long VAR_4 = 0;
  while ('0' <= *VAR_0 && *VAR_0 <= '9') {
    VAR_4 = VAR_4 * 10 + (*VAR_0++ - '0');
  }

  *VAR_1 = VAR_4 * VAR_2;

  return VAR_0 > VAR_3;
}
