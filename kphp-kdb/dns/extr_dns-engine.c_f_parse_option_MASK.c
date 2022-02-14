
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char,int) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_4 (int VAR_8) {
  int VAR_9;
  switch (VAR_8) {
  case 'E':
    VAR_4 = VAR_3;
    break;
  case 'M':
    VAR_7 = FUNC_0 (VAR_3);
    if (VAR_7 < 0) {
      VAR_7 = 0;
    }
    if (VAR_7 > 16) {
      FUNC_3 ("Too many additional workers\n");
      FUNC_1 (1);
    }
    break;
  case 'P':
    VAR_5 = FUNC_0 (VAR_3);
    break;
  case 'R':
    VAR_9 = FUNC_0 (VAR_3);
    if (VAR_9 >= 1 && VAR_9 <= VAR_0) {
      VAR_1 = VAR_9;
    }
    break;
  case 'k':
    VAR_2 = 1;
    break;
  default:
    FUNC_2 (VAR_6, "Unimplemented option '%c' (%d)\n", (char) VAR_8, VAR_8);
    return -1;
  }
  return 0;
}
