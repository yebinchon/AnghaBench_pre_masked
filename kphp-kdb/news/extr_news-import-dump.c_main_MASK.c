
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char**,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 int FUNC_4 () ;
 int VAR_9 ;

int FUNC_5 (int VAR_10, char *VAR_11[]) {
  VAR_7 = VAR_11[0];
  int VAR_12;
  int VAR_13 = 0;
  while ((VAR_12 = FUNC_1 (VAR_10, VAR_11, "m:vn:oxz")) != -1) {
    switch (VAR_12) {
    case 'v':
      VAR_9++;
      break;
    case 'm':
      VAR_3 = FUNC_0 (VAR_5);
      break;
    case 'n':
      VAR_2 = VAR_5;
      break;
    case 'o':
      VAR_8 = VAR_0;
      break;
    case 'x':
      VAR_8 = VAR_1;
      break;
    case 'z':
      VAR_13 = 1;
      break;
    case 'h':
    default:
      FUNC_4 ();
      return 2;
    }
  }
  if (VAR_10 != VAR_6 + 1 || !VAR_2 || !VAR_3) {
    FUNC_4();
    return 2;
  }
  VAR_4 = VAR_11[VAR_6];
  if (VAR_13 == 0) {
    FUNC_2 ();
  } else {
    FUNC_3 ();
  }
  return 0;
}
