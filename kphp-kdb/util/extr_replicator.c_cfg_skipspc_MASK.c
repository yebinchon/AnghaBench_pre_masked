
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0 (void) {
  while (*VAR_0 == ' ' || *VAR_0 == 9 || *VAR_0 == 13 || *VAR_0 == 10 || *VAR_0 == '#') {
    if (*VAR_0 == '#') {
      do VAR_0++; while (*VAR_0 && *VAR_0 != 10);
      continue;
    }
    if (*VAR_0 == 10) {
      VAR_1++;
    }
    VAR_0++;
  }
  return (unsigned char) *VAR_0;
}
