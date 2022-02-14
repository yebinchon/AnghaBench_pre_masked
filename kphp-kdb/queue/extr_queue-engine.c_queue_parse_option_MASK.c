
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_1 (int ,char*) ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;

int FUNC_3 (int VAR_12) {
  switch (VAR_12) {
    case 'C':
      VAR_2 = VAR_8;
      break;
    case 'e':
      VAR_4 = FUNC_0 (VAR_8);
      break;
    case 'H':
      VAR_5 = FUNC_0 (VAR_8);
      break;
    case 'm':
      VAR_6 = FUNC_0 (VAR_8);
      if (VAR_6 < 1) {
        VAR_6 = 1;
      }
      VAR_6 *= 1048576;
      break;
    case 'N':
      VAR_7 = FUNC_0 (VAR_8);
      break;
    case 'P':
      VAR_11 = FUNC_0 (VAR_8);
      break;
    case 'q':
      VAR_3 = FUNC_0 (VAR_8);
      break;
    case 'k':
      if (FUNC_2 (VAR_0 | VAR_1) != 0) {
        FUNC_1 (VAR_9, "error: fail to lock paged memory\n");
      }
      break;
    case 'S':
      VAR_10 = 1;
      break;
    default:
      return -1;
  }
  return 0;
}
