
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;

int FUNC_4 (int VAR_7) {
  switch (VAR_7) {






    case 'm':
      VAR_3 = FUNC_1 (VAR_4);
      if (VAR_3 < 1) {
        VAR_3 = 1;
      }
      VAR_3 *= 1048576;
      break;
    case 'T': {
      int VAR_8 = FUNC_1 (VAR_4);
      FUNC_0 (0 < VAR_8 && VAR_8 < 256);
      VAR_6[VAR_8]++;
      break;
    }
    case 'i':
      VAR_2 = 1;
      break;
    case 'k':
      if (FUNC_3 (VAR_0 | VAR_1) != 0) {
        FUNC_2 (VAR_5, "error: fail to lock paged memory\n");
      }
      break;
    default:
      return -1;
  }
  return 0;
}
