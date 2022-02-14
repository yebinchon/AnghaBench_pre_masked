
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_2 (int) ;
 int VAR_8 ;
 int FUNC_3 () ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int,char*) ;

int FUNC_5 (int VAR_11) {
  switch (VAR_11) {
  case 'b':
    VAR_4 = FUNC_0 (VAR_8);
    if (VAR_4 <= 0) {
      VAR_4 = VAR_0;
    }
    break;
  case 'c':
    VAR_7 = FUNC_0 (VAR_8);
    if (VAR_7 <= 0 || VAR_7 > VAR_1) {
      VAR_7 = VAR_1;
    }
    break;
  case 'l':
    FUNC_1 (VAR_8);
    break;
  case 'm':
    VAR_6 = FUNC_0 (VAR_8);
    if (VAR_6 < 1) {
      VAR_6 = 1;
    }
    if (VAR_6 > 2047) {
      VAR_6 = 2047;
    }
    VAR_6 *= 1048576;
    break;
  case 'u':
    VAR_9 = VAR_8;
    break;
  case 'd':
    VAR_5 ^= 1;
    break;
  case 'h':
    FUNC_3();
    return 2;
  case 'k':
    if (FUNC_2 (VAR_2 | VAR_3) != 0) {
      FUNC_4 (-1, "error: fail to lock paged memory\n");
    }
    break;
  case 'v':
    VAR_10++;
    break;
  default:
    return 0;
  }
  return 1;
}
