
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static long long FUNC_1 (void) {
  FUNC_0();
  char *VAR_1 = VAR_0;
  long long VAR_2 = 0;
  while (*VAR_1 >= '0' && *VAR_1 <= '9') {
    VAR_2 = VAR_2*10 + (*VAR_1++ - '0');
  }
  VAR_0 = VAR_1;
  return VAR_2;
}
