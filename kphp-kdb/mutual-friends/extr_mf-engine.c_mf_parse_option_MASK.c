
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;

int FUNC_3 (int VAR_10) {
  switch (VAR_10) {
    case 'm':
      VAR_5 = FUNC_0 (VAR_7);
      if (VAR_5 < 1) {
        VAR_5 = 1;
      }
      VAR_5 *= 1048576;
      break;
    case 's':
      VAR_9 = VAR_7;
      break;
    case 'w':
      VAR_6 = VAR_7;
      break;
    case 'D':
      VAR_2 = 3;
      break;
    case 'e':
      VAR_3 = 1;
      VAR_4 = 1;
      break;
    case 'i':
      VAR_4 = 1;
      break;
    case 'k':
      if (FUNC_2 (VAR_0 | VAR_1) != 0) {
        FUNC_1 (VAR_8, "error: fail to lock paged memory\n");
      }
      break;
    default:
      return -1;
  }
  return 0;
}
