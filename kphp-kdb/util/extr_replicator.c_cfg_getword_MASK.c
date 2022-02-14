
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2 (int VAR_1) {
  if (VAR_1) {
    FUNC_1();
  } else {
    FUNC_0();
  }
  char *VAR_2 = VAR_0;
  while ((*VAR_2 >= 'a' && *VAR_2 <= 'z') || (*VAR_2 >= 'A' && *VAR_2 <= 'Z') || (*VAR_2 >= '0' && *VAR_2 <= '9') || *VAR_2 == '.' || *VAR_2 == '-' || *VAR_2 == '_' || *VAR_2 == ':' || *VAR_2 == '/' || *VAR_2 == '[' || *VAR_2 == ']' || *VAR_2 == '@') {
    VAR_2++;
  }
  return VAR_2 - VAR_0;
}
