
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (void*) ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int,char**,char*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (int ,int,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (void*) ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int FUNC_14 (char*) ;
 int VAR_16 ;
 scalar_t__ FUNC_15 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_16 (int,int ,void*,int ) ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_17 () ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_18 (int *) ;
 void* VAR_24 ;
 void* VAR_25 ;
 int VAR_26 ;

int FUNC_19 (int VAR_27, char *VAR_28[]) {
  int VAR_29;
  VAR_19 = 1;

  while ((VAR_29 = FUNC_7 (VAR_27, VAR_28, "b:c:l:p:U:m:n:dfhu:vrkO:C:")) != -1) {
    switch (VAR_29) {
    case 'v':
      VAR_26++;
      break;
    case 'h':
      FUNC_8();
      return 2;
    case 'b':
      VAR_5 = FUNC_2 (VAR_14);
      if (VAR_5 <= 0) {
        VAR_5 = VAR_0;
      }
      break;
    case 'c':
      VAR_12 = FUNC_2 (VAR_14);
      if (VAR_12 <= 0 || VAR_12 > VAR_2) {
        VAR_12 = VAR_2;
      }
      break;
    case 'm':
      VAR_11 = FUNC_2 (VAR_14);
      VAR_11 -= FUNC_5();
      if (VAR_11 < 1) {
        VAR_11 = 1;
      }
      VAR_11 *= 1048576;
      break;
    case 'n':
      VAR_8 = 0;
      FUNC_13 (FUNC_2 (VAR_14));
      if (VAR_8) {
        FUNC_14 ("nice");
      }
      break;
    case 'p':
      VAR_16 = FUNC_2 (VAR_14);
      break;
    case 'O':
      VAR_13 = FUNC_2 (VAR_14);
      break;
    case 'U':
      VAR_24 = FUNC_2 (VAR_14);
      break;
    case 'u':
      VAR_25 = VAR_14;
      break;
    case 'l':
      VAR_10 = VAR_14;
      break;
    case 'd':
      VAR_6 ^= 1;
      break;
    case 'f':
      VAR_17 = 1;
      break;
    case 'r':

      break;
    case 'C':
      VAR_18 = FUNC_2 (VAR_14);
      VAR_19 = (VAR_18 & 1);
    case 'k':
      break;
      if (FUNC_12 ( VAR_4) != 0) {
        FUNC_4 (VAR_23, "error: fail to lock paged memory\n");
      }
      break;
    }
  }

  if (VAR_27 != VAR_15) {
    FUNC_8();
    return 2;
  }

  if (!VAR_25 && VAR_12 == VAR_2 && FUNC_6()) {
    VAR_12 = 1000;
  }

  if (VAR_7 > VAR_11) {
    VAR_7 = VAR_11;
  }

  if (VAR_3 > 0) {
    FUNC_9();
  }

  FUNC_10();




  if (FUNC_15 (VAR_12 + 16) < 0) {
    FUNC_4 (VAR_23, "fatal: cannot raise open file limit to %d\n", VAR_12 + 16);
    FUNC_3 (1);
  }

  if (VAR_13) {
    FUNC_0 (VAR_13);
  }

  FUNC_1 (0);

  VAR_21 = FUNC_16 (VAR_16, VAR_20, VAR_5, 0);
  if (VAR_21 < 0) {
    FUNC_4 (VAR_23, "cannot open server socket at port %d: %m\n", VAR_16);
    FUNC_3 (1);
  }

  VAR_22 = FUNC_18 (((void*)0));

  FUNC_17();

  return 0;
}
