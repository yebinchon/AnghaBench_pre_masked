
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

int FUNC_1 (int VAR_13) {
  int VAR_14;
  switch (VAR_13) {
  case 'A':
    VAR_9 = 1;
    break;
  case 'C':
    VAR_2 = 1;
    break;
  case 'D':
    VAR_3 = 0;
    break;
  case 'F':
    VAR_7 = 0;
    break;
  case 'I':
    VAR_5 = 1;
    break;
  case 'M':
    VAR_14 = FUNC_0 (VAR_6);
    if (VAR_14 >= 1 && VAR_14 <= 5) {
      VAR_0 = VAR_14;
    }
    break;
  case 'O':
    VAR_8 = 1;
    break;
  case 'R':
    VAR_1 = VAR_6;
    break;
  case 'S':
    VAR_10 = 1;
    break;
  case 'U':
    VAR_11 = 1;
    break;
  case 'W':
    VAR_12 = 1;
    break;
  case 't':
    VAR_4 = 1;
    break;
  default:
    return -1;
  }
  return 0;
}
