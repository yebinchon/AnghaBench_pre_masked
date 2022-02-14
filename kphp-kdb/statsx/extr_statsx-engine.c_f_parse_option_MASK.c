
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long long FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long long VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,int ) ;
 double VAR_7 ;
 int VAR_8 ;
 long long VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ,char*,double*) ;
 int VAR_13 ;

int FUNC_4 (int VAR_14) {
  switch (VAR_14) {
  case 'f':
    VAR_8 ++;
    break;
  case 'T':
    VAR_13 ++;
    break;
  case 'm':
    VAR_10 = 1;
    break;
  case 'i':
    VAR_6 = 1;
    break;
  case 'M':
    VAR_9 = FUNC_0(VAR_12) * (long long) 1024 * 1024;
    break;
  case 'y':
    VAR_0 = 0;
    break;
  case 'x':
    VAR_3 = 1;
    VAR_0 = 0;
    break;
  case 'E':
    VAR_11 ++;
    break;
  case 't':
    VAR_5 ++;
    break;
  case 'D':
    VAR_2 ++;
    break;
  case 'P':
    if ((FUNC_3 (VAR_12, "%lf", &VAR_7) != 1) || VAR_7 < 0.1) {
      FUNC_2 ("Illegal -P option: %s\n", VAR_12);
      FUNC_1 (1);
    }
    break;
  case 'S':
    VAR_4 = FUNC_0 (VAR_12);
    break;
  case 1000:
    VAR_1 = 1;
    break;
  default:
    return -1;
  }
  return 0;
}
