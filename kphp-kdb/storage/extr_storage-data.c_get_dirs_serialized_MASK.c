
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,char*,...) ;

int FUNC_2 (char *VAR_2) {
  int VAR_3;
  char *VAR_4 = VAR_2;
  VAR_4 += FUNC_1 (VAR_4, "a:%d:{", VAR_1);
  for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
    VAR_4 += FUNC_1 (VAR_4, "i:%d;", VAR_3);
    VAR_4 += FUNC_0 (VAR_4, VAR_0 + VAR_3);
  }
  VAR_4 += FUNC_1 (VAR_4, "}");
  return 0;
}
