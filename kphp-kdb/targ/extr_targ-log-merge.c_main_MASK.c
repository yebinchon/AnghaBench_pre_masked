
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int VAR_10 ;
 char* VAR_11 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int,char**,char*) ;
 scalar_t__ FUNC_9 (int,scalar_t__,int ) ;
 int VAR_12 ;
 void* FUNC_10 (char*,int,...) ;
 char* VAR_13 ;
 int VAR_14 ;
 int FUNC_11 () ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_12 () ;
 char* VAR_16 ;
 int FUNC_13 (int,int ,int ) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 char* VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 char* VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ FUNC_14 (int ) ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_15 () ;
 char* VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_16 (int,int ,int) ;

int FUNC_17 (int VAR_29, char *VAR_30[]) {
  int VAR_31;
  VAR_16 = VAR_30[0];
  while ((VAR_31 = FUNC_8 (VAR_29, VAR_30, "hviu:t:")) != -1) {
    switch (VAR_31) {
    case 'v':
      VAR_28 = 1;
      break;
    case 'h':
      FUNC_15();
      return 2;
    case 'u':
      VAR_27 = VAR_13;
      break;
    case 't':
      VAR_25 = FUNC_1 (VAR_13);
      break;
    case 'i':
      VAR_9 = 29;
      break;
    }
  }

  if (VAR_14 >= VAR_29 || VAR_14 + 3 < VAR_29) {
    FUNC_15();
    return 2;
  }

  if (VAR_25 <= 0) {
    VAR_25 = 86400;
  }
  VAR_26 = FUNC_14(0) - VAR_25;

  VAR_20 = VAR_30[VAR_14];

  if (VAR_27 && FUNC_2 (VAR_27) < 0) {
    FUNC_7 (VAR_21, "fatal: cannot change user to %s\n", VAR_27 ? VAR_27 : "(none)");
    return 1;
  }

  VAR_19 = FUNC_10 (VAR_20, VAR_2);
  if (VAR_19 < 0) {
    FUNC_7 (VAR_21, "cannot open %s: %m\n", VAR_20);
    return 1;
  }

  if (VAR_14 + 2 < VAR_29) {
    VAR_11 = VAR_30[VAR_14+2];
    VAR_10 = FUNC_10 (VAR_11, VAR_2);
    VAR_12 = 1;
    if (VAR_10 < 0) {
      FUNC_7 (VAR_21, "cannot open %s: %m\n", VAR_11);
      return 1;
    }
  }

  if (VAR_14 + 1 < VAR_29) {
    VAR_23 = VAR_30[VAR_14+1];
    VAR_22 = FUNC_10 (VAR_23, VAR_3 | VAR_0 | VAR_1, 0644);
    if (VAR_22 < 0) {
      FUNC_7 (VAR_21, "cannot create %s: %m\n", VAR_23);
      return 1;
    }
    VAR_24 = FUNC_9 (VAR_22, 0, VAR_5);
    FUNC_0 (VAR_24 > 0);
  } else {
    VAR_23 = "stdout";
    VAR_22 = 1;
  }

  while (FUNC_12() >= 0) { }

  FUNC_6();

  if (VAR_12 == 2 && VAR_17 == VAR_18) {
    FUNC_0 (VAR_15 > 0);
    VAR_15 += VAR_24;
    if (VAR_28 > 0) {
      FUNC_7 (VAR_21, "copying from position %ld of file %s\n", VAR_15, VAR_11);
    }
    FUNC_0 (FUNC_9 (VAR_10, VAR_15, VAR_6) == VAR_15);
    while (1) {
      int VAR_32 = FUNC_13 (VAR_10, VAR_7, VAR_8);
      if (VAR_32 <= 0) { FUNC_0 (!VAR_32); break; }
      int VAR_33 = FUNC_16 (VAR_22, VAR_7, VAR_32);
      FUNC_0 (VAR_33 == VAR_32);
    }
    if (VAR_28 > 0) {
      FUNC_7 (VAR_21, "transferred %ld bytes from %s\n", FUNC_9(VAR_10, 0, VAR_4) - VAR_15, VAR_11);
    }
  }

  if (VAR_22 != 1) {
    if (FUNC_5(VAR_22) < 0) {
      FUNC_7 (VAR_21, "error syncing %s: %m", VAR_23);
      FUNC_4 (1);
    }
    FUNC_3 (VAR_22);
  }

  if (VAR_28 > 0) {
    FUNC_11();
  }

  return VAR_17 > VAR_18 ? 1 : 0;
}
