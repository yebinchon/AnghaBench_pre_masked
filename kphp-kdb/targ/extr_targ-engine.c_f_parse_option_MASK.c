
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 long long VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (void*,char*,long long*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;

int FUNC_2 (int VAR_9) {
  long long VAR_10;
  char VAR_11;
  switch (VAR_9) {
  case 'i':
    VAR_6 = 1;
    break;
  case 'I':
    VAR_3 = 1;
    break;
  case 'C':
    VAR_0++;
    break;
  case 'S':
    VAR_7 ^= 1;
    break;
  case 'D':
    VAR_1 = 0;
    break;
  case 'R':
    VAR_5 = VAR_4;
    break;
  case 'W':
    VAR_8 = VAR_4;
    break;
  case 'H':
    VAR_11 = 0;
    FUNC_0 (FUNC_1 (VAR_4, "%lld%c", &VAR_10, &VAR_11) >= 1);
    switch (VAR_11 | 0x20) {
      case 'k': VAR_10 <<= 10; break;
      case 'm': VAR_10 <<= 20; break;
      case 'g': VAR_10 <<= 30; break;
      case 't': VAR_10 <<= 40; break;
      default: FUNC_0 (VAR_11 == 0x20);
    }
    if (VAR_9 == 'H' && VAR_10 >= (1LL << 20) && VAR_10 <= (sizeof(long) == 4 ? (3LL << 30) : (100LL << 30))) {
      VAR_2 = VAR_10;
    }
    break;
  default:
    return -1;
  }
  return 0;
}
