
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_4 (int VAR_11) {
  switch (VAR_11) {
    case 'D':
      VAR_2 = FUNC_1 (VAR_7);
      FUNC_0 (0 <= VAR_2 && VAR_2 <= 3);
      break;
    case 'm':
      VAR_6 = FUNC_1 (VAR_7);
      if (VAR_6 < 1) {
        VAR_6 = 1;
      }
      VAR_6 *= 1048576;
      break;
    case 'M':
      VAR_3 = VAR_7;
      VAR_5 = 1;
      break;
    case 'i':
      VAR_5 = 1;
      break;
    case 'I':
      VAR_4++;
      VAR_5 = 1;
      break;
    case 'k':
      if (FUNC_3 (VAR_0 | VAR_1) != 0) {
        FUNC_2 (VAR_9, "error: fail to lock paged memory\n");
      }
      break;
    case 'R':
      VAR_8 = 1;
      VAR_5 = 1;
      break;
    case 'w':
      VAR_10 = 1;
      break;
    default:
      return -1;
  }
  return 0;
}
