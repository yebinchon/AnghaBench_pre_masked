
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 long long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 long long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 long long VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,char*,long long*,char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

int FUNC_3 (int VAR_18) {
  long long VAR_19;
  char VAR_20;
  int VAR_21;
  switch (VAR_18) {
  case 'Z': case 'm':
    VAR_20 = 0;
    FUNC_0 (FUNC_2 (VAR_10, "%lld%c", &VAR_19, &VAR_20) >= 1);
    switch (VAR_20 | 0x20) {
      case 'k': VAR_19 <<= 10; break;
      case 'm': VAR_19 <<= 20; break;
      case 'g': VAR_19 <<= 30; break;
      case 't': VAR_19 <<= 40; break;
      default: FUNC_0 (VAR_20 == 0x20);
    }
    if (VAR_18 == 'Z' && VAR_19 >= (1LL << 20) && VAR_19 <= (sizeof(long) == 4 ? (3LL << 30) : (20LL << 30))) {
      VAR_3 = VAR_19;
    } else if (VAR_18 == 'm' && VAR_19 >= VAR_1 && VAR_19 < (1LL << 34)) {
      VAR_9 = VAR_19;
    }
    break;
  case 'H':
    VAR_7 = FUNC_1 (VAR_10);
    break;
  case 'T':
    VAR_14 = 1;
    break;
  case 'U':
    VAR_17 = VAR_16 = 1;
    break;
  case 'M':
    VAR_4 = 1;
    break;
  case 'L':
    VAR_8 = 1;
    break;
  case 'i':
    VAR_12 = 1;
    break;
  case 'y':
    VAR_11 = 1;
    break;
  case 'S':
    VAR_15 = 1;
    break;
  case 't':
    VAR_5 = 1;
    break;
  case 'q':
    VAR_13 = 1;
    break;
  case 'o':
    VAR_21 = FUNC_1 (VAR_10);
    if (VAR_21 >= VAR_2 && VAR_21 <= VAR_0) {
      VAR_6 = VAR_21;
    }
    break;
  default:
    return -1;
  }
  return 0;
}
