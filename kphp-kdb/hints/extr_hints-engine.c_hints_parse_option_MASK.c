
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rating ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 void* VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int* VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_5 (int ,char*,int*,int*) ;
 int VAR_22 ;
 int FUNC_6 () ;
 int VAR_23 ;

int FUNC_7 (int VAR_24) {
  switch (VAR_24) {
    case 'D': {
      VAR_9 = 1;
      int VAR_25 = FUNC_1 (VAR_20);
      if (!FUNC_2 (VAR_25)) {
        FUNC_6 ();
        return 2;
      }



      VAR_10[VAR_25]++;
      break;
    }
    case 'e':
      VAR_11 = FUNC_1 (VAR_20);
      break;
    case 'F':
      VAR_8 = FUNC_1 (VAR_20);
      break;
    case 'L': {
      int VAR_26, VAR_27;
      FUNC_0 (FUNC_5 (VAR_20, "%d,%d", &VAR_26, &VAR_27) >= 2);
      FUNC_0 (FUNC_2 (VAR_26));
      VAR_16[VAR_26] = VAR_27;
      break;
    }
    case 'm':
      VAR_17 = FUNC_1 (VAR_20);
      if (VAR_17 < 1) {
        VAR_17 = 1;
      }
      VAR_17 <<= 20;
      break;
    case 'M':
      VAR_0 = FUNC_1 (VAR_20);
      FUNC_0 (1 <= VAR_0 && (VAR_0 + 1) * (long long)sizeof (rating) * (long long)VAR_3 <= 2000000000);
      break;
    case 'N':
      VAR_6 = FUNC_1 (VAR_20);
      FUNC_0 (1 <= VAR_6 && VAR_6 <= VAR_2);
      VAR_6 *= 60 * 60;
      break;
    case 'o':
      VAR_14 = 1;
      VAR_18 = VAR_20;
      break;
    case 'q':
      VAR_1 = FUNC_1 (VAR_20);
      break;
    case 'R':
      VAR_21 = FUNC_1 (VAR_20);
      FUNC_0 (1 <= VAR_21 && VAR_21 <= VAR_3);
      break;
    case 'A':
      VAR_15 = 1;
      break;
    case 'f':
      VAR_19 = 1;
      break;





    case 'I':
      VAR_13 = 1;
      break;
    case 'i':
      VAR_14 = 1;
      break;
    case 'k':
      if (FUNC_4 (VAR_4 | VAR_5) != 0) {
        FUNC_3 (VAR_22, "error: fail to lock paged memory\n");
      }
      break;
    case 'w':
      VAR_23 = 1;
      break;
    case 'z':
      VAR_12 = 0;
      break;
    default:
      return -1;
  }
  return 0;
}
