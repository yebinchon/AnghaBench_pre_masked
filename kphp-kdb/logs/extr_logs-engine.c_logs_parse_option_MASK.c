
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_3 (int ,char*,...) ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int) ;
 int VAR_13 ;
 int FUNC_6 (void*) ;
 char* VAR_14 ;
 int FUNC_7 (char*) ;
 int VAR_15 ;
 int FUNC_8 (char*,char*,int*,int*) ;
 char* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 int FUNC_9 () ;
 int VAR_20 ;

int FUNC_10 (int VAR_21) {
  switch (VAR_21) {
    case 'D':
      FUNC_0 (!VAR_4);
      VAR_4 = 1;
      VAR_6 = VAR_14;
      break;
    case 'e':
      VAR_12 = FUNC_1 (VAR_14);
      FUNC_0 (VAR_12 > 50 && VAR_12 < 1000);
      break;
    case 'F':
      VAR_9 = FUNC_1 (VAR_14);
      if (VAR_9 < 0) {
        FUNC_9();
        return 2;
      }
      break;
    case 'm':
      VAR_11 = FUNC_2 (VAR_14) * 1048576;
      break;
    case 'N': {
      int VAR_22, VAR_23;
      FUNC_0 (FUNC_8 (VAR_14, "%d%n", &VAR_22, &VAR_23) >= 1 && 0 <= VAR_22 && VAR_22 < VAR_0 && VAR_14[VAR_23] == ',');
      if (!FUNC_4 (VAR_14 + VAR_23 + 1)) {
        FUNC_3 (VAR_17, "Not a valid name: \"%s\"\n", VAR_14 + VAR_23 + 1);
        FUNC_9();
        return 2;
      }
      VAR_8[VAR_22] = VAR_14 + VAR_23 + 1;
      break;
    }
    case 'q':
      VAR_15 = FUNC_2 (VAR_14) * 1048576;
      break;
    case 'R':
      VAR_5 = VAR_14;
      break;
    case 's':
      FUNC_0 (!VAR_4);
      VAR_4 = 2;
      VAR_6 = "0";
      VAR_16 = VAR_14;
      break;
    case 'T':
      VAR_19 = FUNC_1 (VAR_14);
      if (VAR_19 < 0) {
        FUNC_9();
        return 2;
      }
      break;
    case 'i':
      VAR_10 = 1;
      break;
    case 'I':
      VAR_3 = 1;
      break;
    case 'k':
      if (FUNC_5 (VAR_1 | VAR_2) != 0) {
        FUNC_3 (VAR_17, "error: fail to lock paged memory\n");
      }
      break;
    case 'n':
      VAR_7 = 0;
      FUNC_6 (FUNC_1 (VAR_14));
      if (VAR_7) {
        FUNC_7 ("nice");
      }
      break;
    case 't':
      VAR_18 = 1;
      VAR_15 = 500000000;
      break;
    case 'V':
      VAR_13++;
      break;
    case 'w':
      VAR_20 = 1;
      break;
    default:
      return -1;
  }
  return 0;
}
