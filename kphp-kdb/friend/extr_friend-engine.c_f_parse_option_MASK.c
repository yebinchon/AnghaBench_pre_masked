
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 long long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_3 (int VAR_8) {
  long long VAR_9;
  char VAR_10;
  switch (VAR_8) {
  case 'I':
    VAR_2 = FUNC_1(VAR_4);
    break;
  case 'W':
    FUNC_0 (FUNC_2(VAR_4, "%d,%d", &VAR_7, &VAR_6) == 2);
    FUNC_0 (VAR_6 > 0 && VAR_6 <= 10000 && VAR_7 >= 0 && VAR_7 < VAR_6);
    break;
  case 'A':
    VAR_5 = 1;
    VAR_0 ++;
    break;
  case 'H':
    VAR_10 = 0;
    FUNC_0 (FUNC_2 (VAR_4, "%lld%c", &VAR_9, &VAR_10) >= 1);
    switch (VAR_10 | 0x20) {
      case 'k': VAR_9 <<= 10; break;
      case 'm': VAR_9 <<= 20; break;
      case 'g': VAR_9 <<= 30; break;
      case 't': VAR_9 <<= 40; break;
      default: FUNC_0 (VAR_10 == 0x20);
    }
    if (VAR_8 == 'H' && VAR_9 >= (1LL << 20) && VAR_9 <= (sizeof(long) == 4 ? (3LL << 30) : (100LL << 30))) {
      VAR_1 = VAR_9;
    }
    break;
  case 'i':
    VAR_3 ++;
    break;
  default:
    return -1;
  }
  return 0;
}
