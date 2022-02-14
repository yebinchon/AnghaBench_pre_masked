
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_3 (int VAR_7) {
  switch (VAR_7) {
    case 'm':
      VAR_2 = FUNC_0 (VAR_3);
      if (VAR_2 < 1) {
        VAR_2 = 1;
      }
      VAR_2 *= 1048576;
      break;
    case 'P':
      VAR_4 = FUNC_0 (VAR_3);
      break;
    case 'k':
      if (FUNC_2 (VAR_0 | VAR_1) != 0) {
        FUNC_1 (VAR_5, "error: fail to lock paged memory\n");
      }
      break;
    case 'S':
      VAR_6 = 1;
      break;
    default:
      return -1;
  }
  return 0;
}
