
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int val; scalar_t__ has_arg; scalar_t__ name; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 long long VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char**,char*,struct option*,int*) ;
 struct option* VAR_11 ;
 char** VAR_12 ;
 char* VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 long long VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (void*) ;
 void* VAR_19 ;
 long long FUNC_5 (void*) ;
 int FUNC_6 (char*) ;
 void* VAR_20 ;
 int FUNC_7 (char*,int) ;
 int* VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_8 () ;
 void* VAR_25 ;
 void* VAR_26 ;

int FUNC_9 (int VAR_27, char **VAR_28, int (*VAR_29)(int VAR_30)) {
  int VAR_31 = 0;
  while (VAR_11[VAR_31].name || VAR_11[VAR_31].val) { VAR_31 ++; }
  int VAR_32 = 0;

  int VAR_33;
  for (VAR_33 = 0; VAR_33 < VAR_31; VAR_33++) {
    if (VAR_11[VAR_33].val >= 33 && VAR_11[VAR_33].val <= 127) {
      VAR_13[VAR_32 ++] = VAR_11[VAR_33].val;
      if (VAR_11[VAR_33].has_arg == VAR_22) {
        VAR_13[VAR_32 ++] = ':';
      }
    }
  }
  int VAR_34 = VAR_31;
  for (VAR_33 = 0; VAR_33 < VAR_31; VAR_33++) {
    if (!VAR_11[VAR_33].name) {
      struct option VAR_35 = VAR_11[VAR_31 - 1];
      VAR_11[VAR_31 - 1] = VAR_11[VAR_33];
      VAR_11[VAR_33] = VAR_35;
      char *VAR_36;
      VAR_36 = VAR_12[VAR_33];
      VAR_12[VAR_33] = VAR_12[VAR_31 - 1];
      VAR_12[VAR_31 - 1] = VAR_36;
      VAR_31 --;
    }
  }
  VAR_31 = VAR_34;

  long long VAR_37;
  while (1) {
    int VAR_38 = 0;
    int VAR_39 = FUNC_3 (VAR_27, VAR_28, VAR_13, VAR_11, &VAR_38);
    if (VAR_39 == -1) { break; }
    if (VAR_39 > 0 && VAR_39 < 128 && (VAR_21[VAR_39 / 32] & (1 << (VAR_39 & 31)))) {
      if (VAR_29 (VAR_39) < 0) {
        FUNC_7 ("Unknown option c = %d\n", VAR_39);
        FUNC_8 ();
        FUNC_2 (2);
      }
    } else {
      switch (VAR_39) {
      case 0:
        break;
      case 'v':
        if (!VAR_19) {
          VAR_26++;
        } else {
          VAR_26 = FUNC_1 (VAR_19);
        }
        break;
      case 'h':
        FUNC_8 ();
        FUNC_2 (2);
      case 'b':
        VAR_4 = FUNC_1 (VAR_19);
        if (VAR_4 <= 0) VAR_4 = VAR_0;
        break;
      case 'c':
        VAR_17 = FUNC_1 (VAR_19);
        if (VAR_17 <= 0 || VAR_17 > VAR_1) {
          VAR_17 = VAR_1;
        }
        break;
      case 'p':
        VAR_20 = FUNC_1 (VAR_19);
        break;
      case 'u':
        VAR_25 = VAR_19;
        break;
      case 'l':
        VAR_15 = VAR_19;
        break;
      case 'd':
        if (!VAR_19) {
          VAR_7 ^= 1;
        } else {
          VAR_7 = FUNC_1 (VAR_19) != 0;
        }
        break;
      case 'r':
        if (!VAR_19) {
          VAR_5 ++;;
        } else {
          VAR_5 = FUNC_1 (VAR_19);
        }
        break;
      case 'a':
        VAR_6 = VAR_19;
        break;
      case 'B':
        VAR_37 = FUNC_5 (VAR_19);
        if (VAR_37 >= 1024 && VAR_37 < (1LL << 60)) {
          VAR_16 = VAR_37;
        }
        break;
      case '6':
        VAR_9 = VAR_2;
        break;
      case 200:
        VAR_3 = VAR_19;
        break;
      case 201:
        VAR_24 ++;
        break;
      case 202:
        VAR_10 = 0;
        FUNC_4 (FUNC_1 (VAR_19));
        if (VAR_10) {
          FUNC_6 ("nice");
        }
        break;
      case 203:
        VAR_18 ++;
        break;
      case 204:
        VAR_37 = FUNC_5 (VAR_19);
        if (VAR_37 >= (1LL << 20) && VAR_37 <= (sizeof(long) == 4 ? (3LL << 30) : (100LL << 30))) {
          VAR_8 = VAR_37;
        }
        break;
      case 205:
        VAR_23 = FUNC_0 (VAR_19);
        break;
      case 206:
        VAR_14 = 1;
        break;
      default:
        if (VAR_29 (VAR_39) < 0) {
          FUNC_7 ("Unknown option c = %d\n", VAR_39);
          FUNC_8 ();
          FUNC_2 (2);
        }
        break;
      }
    }
  }
  return 0;
}
