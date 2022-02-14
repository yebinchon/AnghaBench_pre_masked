
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

long long FUNC_1 (const char *VAR_0) {
  FUNC_0 (VAR_0);
  int VAR_1 = 0;
  if (*VAR_0 == '-') {
    VAR_0 ++;
    VAR_1 = 1;
  }
  long long VAR_2 = 0;
  while (*VAR_0 && *VAR_0 >= '0' && *VAR_0 <= '9') {
    VAR_2 = VAR_2 * 10 + *(VAR_0 ++) - '0';
  }
  return VAR_1 ? -VAR_2 : VAR_2;
}
