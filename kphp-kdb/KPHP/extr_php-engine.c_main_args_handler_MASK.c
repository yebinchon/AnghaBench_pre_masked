
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (char*) ;
 char* VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (char*,char*) ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 () ;
 int FUNC_7 (int,char*) ;
 void* VAR_13 ;

int FUNC_8 (int VAR_14) {
  switch (VAR_14) {
  case 'D':
    {
      char *VAR_15 = VAR_7, *VAR_16;
      char *VAR_17 = FUNC_4 (VAR_15, '=');
      if (VAR_17 == ((void*)0)) {
        FUNC_7 (-1, "-D option, can't find '='\n");
        FUNC_6();
        return 2;
      }
      VAR_16 = VAR_17 + 1;
      *VAR_17 = 0;
      FUNC_1 (VAR_15, VAR_16);
    }
    break;
  case 'H':
    VAR_3 = FUNC_0 (VAR_7);
    break;
  case 'r':
    VAR_10 = FUNC_0 (VAR_7);
    break;
  case 'w':
    VAR_8 = VAR_7;
    {
      char *VAR_18 = FUNC_5 ((char *)VAR_8, ':');
      if (VAR_18 == ((void*)0)) {
        FUNC_7 (-1, "-w option, can't find ':'\n");
        FUNC_6();
        return 2;
      }
      *VAR_18++ = 0;
      VAR_9 = FUNC_0 (VAR_18);
    }
    break;
  case 'E':
    FUNC_2 (VAR_7);
    break;
  case 'f':
    VAR_13 = FUNC_0 (VAR_7);
    if (VAR_13 >= 0) {
      if (VAR_13 > VAR_1) {
        VAR_13 = VAR_1;
      }
      VAR_4 = 1;
    }
    break;
  case 'p':
    VAR_5 = FUNC_0 (VAR_7);
    break;
  case 's':
    VAR_2 = VAR_7;
    break;
  case 'T':
    FUNC_3 (VAR_7);
    break;
  case 't':
    VAR_12 = FUNC_0 (VAR_7);
    if (VAR_12 < 1) {
      VAR_12 = 1;
    }
    if (VAR_12 > VAR_0) {
      VAR_12 = VAR_0;
    }
    break;
  case 'o':
    VAR_11 = 1;
    break;
  case 'q':
    VAR_6 = 1;
    break;
  default:
    return 0;
  }
  return 1;
}
