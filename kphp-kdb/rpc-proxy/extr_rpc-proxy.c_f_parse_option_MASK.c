
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long long VAR_4 ;
 int VAR_5 ;
 long long VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (char*) ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ,char*,long long*,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;

int FUNC_6 (int VAR_15) {
  char VAR_16;
  long long VAR_17;
  switch (VAR_15) {
  case 'f':
    VAR_7 ++;
    return 0;
  case 'T':
    ++VAR_13;
    return 0;
  case 'N':
    VAR_12 ++;
    return 0;
  case 'C':
    VAR_10 = FUNC_2 (VAR_8);
    VAR_11 = (VAR_10 & 1);
    return 0;
  case 'H': case 'S':
    VAR_16 = 0;
    FUNC_0 (FUNC_5 (VAR_8, "%lld%c", &VAR_17, &VAR_16) >= 1);
    switch (VAR_16 | 0x20) {
      case 'k': VAR_17 <<= 10; break;
      case 'm': VAR_17 <<= 20; break;
      case 'g': VAR_17 <<= 30; break;
      case 't': VAR_17 <<= 40; break;
      default: FUNC_0 (VAR_16 == 0x20);
    }
    if (VAR_15 == 'H') {
      if (VAR_17 >= (1LL << 20) && VAR_17 <= (sizeof(long) == 4 ? (3LL << 30) : (100LL << 30))) {
        VAR_4 = VAR_17;
      }
    } else if (VAR_15 == 'S') {
      VAR_6 = VAR_17;
    }
    break;
  case 'y':
    VAR_9 = FUNC_1 (VAR_8);
    if (VAR_9 <= 0) { VAR_9 = VAR_0; }
    break;
  case 'B':
    VAR_3 = VAR_8;
    VAR_1 = 1;
    VAR_2 |= 1;

    break;
  case 'F':
    VAR_2 |= 2;
    break;
  case 'Q':
    VAR_14 = FUNC_1 (VAR_8);
    break;
  case 'n':
    VAR_5 = 0;
    FUNC_3 (FUNC_2 (VAR_8));
    if (VAR_5) {
      FUNC_4 ("nice");
    }
    break;
  default:
    return -1;
  }
  return 0;
}
