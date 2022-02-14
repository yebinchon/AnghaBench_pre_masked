
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_3 (int VAR_7) {
  switch (VAR_7) {
    case 'm':
      VAR_4 = FUNC_0 (VAR_5);
      if (VAR_4 < 1) {
        VAR_4 = 1;
      }
      VAR_4 *= 1048576;
      break;
    case 'D':
      VAR_2 = 3;
      break;
    case 'i':
      VAR_3 = 1;
      break;
    case 'k':
      if (FUNC_2 (VAR_0 | VAR_1) != 0) {
        FUNC_1 (VAR_6, "error: fail to lock paged memory\n");
      }
      break;
    default:
      return -1;
  }
  return 0;
}
