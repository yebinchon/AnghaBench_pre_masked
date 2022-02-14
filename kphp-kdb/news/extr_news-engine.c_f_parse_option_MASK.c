
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long long VAR_0 ;
 long long VAR_1 ;
 long long FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 long long VAR_4 ;
 long long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_1 (int VAR_8) {
  switch (VAR_8) {
  case 't':
    VAR_5 = FUNC_0(VAR_6);
    break;
  case 'i':
    VAR_3++;
    break;
  case 'C':
    VAR_4 = FUNC_0 (VAR_6) * (long long) 1024 * 1024;
    if (VAR_4 < VAR_1) {
     VAR_4 = VAR_0;
    }
    break;
  case 'L':
    VAR_2 ++;
    break;
  case 'R':
    VAR_7 ++;
    break;
  default:
    return -1;
  }
  return 0;
}
