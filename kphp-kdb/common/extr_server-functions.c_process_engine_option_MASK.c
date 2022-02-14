
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (void*) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_2 () ;
 void* VAR_9 ;
 int VAR_10 ;

int FUNC_3 (int VAR_11) {
  switch (VAR_11) {
  case 'v':
    VAR_10++;
    break;
  case 'h':
    FUNC_2 ();
    return 2;
  case 'b':
    VAR_2 = FUNC_0 (VAR_7);
    if (VAR_2 <= 0) VAR_2 = VAR_0;
    break;
  case 'c':
    VAR_6 = FUNC_0 (VAR_7);
    if (VAR_6 <= 0 || VAR_6 > VAR_1) {
      VAR_6 = VAR_1;
    }
    break;
  case 'p':
    VAR_8 = FUNC_0 (VAR_7);
    break;
  case 'u':
    VAR_9 = VAR_7;
    break;
  case 'l':
    VAR_5 = VAR_7;
    break;
  case 'd':
    VAR_4 ^= 1;
    break;
  case 'r':
    VAR_3++;
    break;
  default:
    FUNC_2 ();
    FUNC_1 (1);
  }
  return 0;
}
