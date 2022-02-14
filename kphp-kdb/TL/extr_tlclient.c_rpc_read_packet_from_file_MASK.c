
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4 (const char *VAR_2) {
  FILE *VAR_3 = FUNC_1 (VAR_2, "r");
  if (VAR_3 == ((void*)0)) {
    FUNC_3 ("fopen (\"%s\", \"r\") failed. %m\n", VAR_2);
    return -1;
  }
  int VAR_4 = 0;
  while (VAR_4 < VAR_0 && FUNC_2 (VAR_3, "%x", VAR_1+VAR_4) == 1) {
    VAR_4++;
  }
  FUNC_0 (VAR_3);
  if (VAR_4 == VAR_0) {
    FUNC_3 ("RPC packet is too big.\n");
    return -1;
  }
  return VAR_4;
}
