
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 void* FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,...) ;
 char* VAR_1 ;
 int FUNC_3 (char*) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;

int FUNC_5 (int VAR_5) {
  switch (VAR_5) {
  case 'B':
    VAR_0 = FUNC_1 (VAR_1);
    FUNC_0 (VAR_0 >= 8 && VAR_0 <= 65464);
    break;
  case 'P':
    VAR_2 = FUNC_1 (VAR_1);
    break;
  case 'R':
    if (FUNC_3 (VAR_1) < 0) {
      FUNC_2 (VAR_3, "Illegal -R %s option\n", VAR_1);
      FUNC_4 ();
      break;
    }
  case 'T':
    VAR_4 = FUNC_1 (VAR_1);
    FUNC_0 (VAR_4 >= 1 && VAR_4 <= 255);
    break;
  default:
    FUNC_2 (VAR_3, "Unimplemented option '%c' (%d)\n", (char) VAR_5, VAR_5);
    return -1;
  }
  return 0;
}
