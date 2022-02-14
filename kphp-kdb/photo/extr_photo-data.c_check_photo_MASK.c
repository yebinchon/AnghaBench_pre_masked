
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;

int FUNC_1 (char *VAR_1, int VAR_2) {
  if (VAR_2 >= 126) {
    return 0;
  }
  FUNC_0 (VAR_2 >= 0);

  switch (VAR_0) {
    case 129:
      return 1;
    case 128:
      return 1;
    case 130:
      return 1;
    default:
      FUNC_0 ("Unsupported mode" && 0);
  }
}
