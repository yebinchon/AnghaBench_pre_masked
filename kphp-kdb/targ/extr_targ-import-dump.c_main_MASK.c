
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int,char**,char*) ;
 char* VAR_18 ;
 char* VAR_19 ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_15 (char*,int,...) ;
 char* VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 int FUNC_26 () ;
 char* VAR_25 ;
 int FUNC_27 (scalar_t__,scalar_t__,int) ;
 int FUNC_28 () ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 char* VAR_29 ;
 int FUNC_29 (char*,char*,int*,int*) ;
 int FUNC_30 (int ,char*) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 char* VAR_33 ;
 int FUNC_31 () ;
 char* VAR_34 ;
 scalar_t__ VAR_35 ;
 int FUNC_32 (int,scalar_t__,int) ;

int FUNC_33 (int VAR_36, char *VAR_37[]) {
  int VAR_38;
  VAR_25 = VAR_37[0];
  FUNC_13();
  while ((VAR_38 = FUNC_12 (VAR_36, VAR_37, "hvu:m:f:g:o:")) != -1) {
    switch (VAR_38) {
    case 'v':
      VAR_35 = 1;
      break;
    case 'h':
      FUNC_31();
      return 2;
    case 'm':
      FUNC_0 (FUNC_29(VAR_22, "%d,%d", &VAR_27, &VAR_26) == 2);
      FUNC_0 (VAR_26 > 0 && VAR_26 <= 1000 && VAR_27 >= 0 && VAR_27 < VAR_26);
      break;
    case 'f':
      VAR_31 = FUNC_11(VAR_22);
      if (!VAR_31) {
 FUNC_10 (VAR_30, "fatal: unsupported table dump format: %s\n", VAR_22);
 return 2;
      }
      break;
    case 'o':
      VAR_24 = FUNC_1 (VAR_22);
      break;
    case 'g':
      if (VAR_18) {
        VAR_19 = VAR_22;
      } else {
        VAR_18 = VAR_22;
      }
      break;
    case 'u':
      VAR_34 = VAR_22;
      break;
    }
  }

  if (VAR_23 >= VAR_36 || VAR_23 + 2 < VAR_36) {
    FUNC_31();
    return 2;
  }

  VAR_29 = VAR_37[VAR_23];

  if (VAR_34 && FUNC_2 (VAR_34) < 0) {
    FUNC_10 (VAR_30, "fatal: cannot change user to %s\n", VAR_34 ? VAR_34 : "(none)");
    return 1;
  }

  if (VAR_18) {
    VAR_28 = FUNC_15 (VAR_18, VAR_12);
    if (VAR_28 < 0) {
      FUNC_10 (VAR_30, "cannot open %s: %m\n", VAR_18);
      return 1;
    }
    VAR_5 = FUNC_27 (VAR_28, VAR_4, VAR_9);
    if (VAR_35 > 0) {
      FUNC_10 (VAR_30, "read %d bytes from %s\n", VAR_5, VAR_18);
    }
    FUNC_0 (VAR_5 >= 0 && VAR_5 < VAR_9);
    FUNC_3 (VAR_28);
    VAR_28 = 0;
    VAR_1 = VAR_4;
    VAR_3 = VAR_2 = VAR_1 + ((VAR_5 + 3) & -4);
  }

  if (VAR_19) {
    VAR_28 = FUNC_15 (VAR_19, VAR_12);
    if (VAR_28 < 0) {
      FUNC_10 (VAR_30, "cannot open %s: %m\n", VAR_19);
      return 1;
    }
    VAR_6 = FUNC_27 (VAR_28, VAR_2, VAR_1 + VAR_9 - VAR_2);
    if (VAR_35 > 0) {
      FUNC_10 (VAR_30, "read %d bytes from %s\n", VAR_6, VAR_19);
    }
    FUNC_0 (VAR_6 >= 0 && VAR_6 < VAR_9);
    FUNC_3 (VAR_28);
    VAR_28 = 0;
    VAR_3 = VAR_2 + ((VAR_6 + 3) & -4);
  }

  VAR_28 = FUNC_15 (VAR_29, VAR_12);
  if (VAR_28 < 0) {
    FUNC_10 (VAR_30, "cannot open %s: %m\n", VAR_29);
    return 1;
  }

  if (!VAR_31) {
    VAR_31 = FUNC_11 (FUNC_9 (VAR_29));
    if (!VAR_31) {
      FUNC_10 (VAR_30, "fatal: cannot determine table type from filename %s\n", VAR_29);
    }
  }

  if (VAR_23 + 1 < VAR_36) {
    VAR_33 = VAR_37[VAR_23+1];
    VAR_32 = FUNC_15 (VAR_33, VAR_13 | VAR_10 | VAR_11, 0644);
    if (VAR_32 < 0) {
      FUNC_10 (VAR_30, "cannot create %s: %m\n", VAR_33);
      return 1;
    }
  } else {
    VAR_33 = "stdout";
    VAR_32 = 1;
  }

  switch (VAR_31) {
  case 131:
    VAR_0 = 27;
    FUNC_30(VAR_14, "");
    while (FUNC_28() > 0) {
      FUNC_23();
    }
    break;
  case 136:
    VAR_0 = 11;
    FUNC_30(VAR_14, "");
    while (FUNC_28() > 0) {
      FUNC_18();
    }
    break;
  case 130:
    VAR_0 = VAR_21;
    FUNC_30(VAR_14, "");
    while (FUNC_28() > 0) {
      FUNC_24();
    }
    break;
  case 133:
    VAR_0 = 3;
    if (VAR_24 != 1) {
      FUNC_30(VAR_14, "");
    }
    VAR_17 = VAR_15 = FUNC_14 (VAR_7);
    FUNC_0 (VAR_15);
    while (FUNC_28() > 0) {
      FUNC_21();
    }
    if (VAR_16) { FUNC_8(); }
    break;
  case 137:
    VAR_0 = 15;
    FUNC_30(VAR_14, "");
    while (FUNC_28() > 0) {
      FUNC_17();
    }
    break;
  case 135:
    VAR_0 = 3;
    while (FUNC_28() > 0) {
      FUNC_19();
    }
    if (VAR_24 == 1 && VAR_5) {
      FUNC_0 (FUNC_32 (VAR_32, VAR_4, VAR_5) == VAR_5);
    }
    break;
  case 132:
    FUNC_0 (VAR_5 > 0);
    VAR_0 = 5;
    FUNC_30(VAR_14, "");
    while (FUNC_28() > 0) {
      FUNC_22();
    }
    FUNC_6 ();
    break;
  case 129:
    VAR_0 = 6;
    FUNC_30(VAR_14, "");
    while (FUNC_28() > 0) {
      FUNC_25();
    }
    break;
  case 128:
    VAR_0 = 2;
    VAR_5 = VAR_8 * 4;
    while (FUNC_28() > 0) {
      FUNC_26();
    }
    if (VAR_24 == 1 && VAR_5) {
      FUNC_0 (FUNC_32 (VAR_32, VAR_4, VAR_5) == VAR_5);
    }
    break;
  case 134:
    VAR_0 = VAR_20;
    FUNC_30(VAR_14, "");
    while (FUNC_28() > 0) {
      FUNC_20();
    }
    break;
  default:
    FUNC_10 (VAR_30, "unknown table type\n");
    FUNC_4(1);
  }

  FUNC_7();
  if (VAR_32 != 1) {
    if (FUNC_5(VAR_32) < 0) {
      FUNC_10 (VAR_30, "error syncing %s: %m", VAR_33);
      FUNC_4 (1);
    }
    FUNC_3 (VAR_32);
  }

  if (VAR_35 > 0) {
    FUNC_16();
  }

  return 0;
}
