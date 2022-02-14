
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1 (void) {
  FUNC_0();
  char *VAR_1 = VAR_0;
  while ((*VAR_1 >= 'a' && *VAR_1 <= 'z') || (*VAR_1 >= 'A' && *VAR_1 <= 'Z') || (*VAR_1 >= '0' && *VAR_1 <= '9') || *VAR_1 == '.' || *VAR_1 == '-' || *VAR_1 == '_') {
    VAR_1++;
  }
  return VAR_1 - VAR_0;
}
