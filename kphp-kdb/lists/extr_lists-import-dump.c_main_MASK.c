
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 () ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int,char**,char*) ;
 int VAR_22 ;
 char* VAR_23 ;
 char* VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ FUNC_11 (char*,int,...) ;
 char* VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_12 () ;
 int VAR_30 ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
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
 int FUNC_27 () ;
 int FUNC_28 () ;
 int FUNC_29 () ;
 char* VAR_31 ;
 int FUNC_30 (scalar_t__,scalar_t__,int) ;
 int FUNC_31 () ;
 int FUNC_32 () ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 char* VAR_35 ;
 int FUNC_33 (char*,char*,int*,int*) ;
 int FUNC_34 (int ,char*) ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 char* VAR_39 ;
 int FUNC_35 () ;
 char* VAR_40 ;
 scalar_t__ VAR_41 ;
 int VAR_42 ;
 int FUNC_36 (int,scalar_t__,int) ;
 int VAR_43 ;

int FUNC_37 (int VAR_44, char *VAR_45[]) {
  int VAR_46;
  FUNC_32();
  VAR_31 = VAR_45[0];
  while ((VAR_46 = FUNC_10 (VAR_44, VAR_45, "hvnu:m:f:g:o:")) != -1) {
    switch (VAR_46) {
    case 'v':
      VAR_41++;
      break;
    case 'h':
      FUNC_35();
      return 2;
    case 'n':
      VAR_17 = 1;
      break;
    case 'm':
      FUNC_0 (FUNC_33(VAR_27, "%d,%d", &VAR_33, &VAR_32) == 2);
      FUNC_0 (VAR_32 > 0 && VAR_32 <= 1000 && VAR_33 >= 0 && VAR_33 < VAR_32);
      break;
    case 'f':
      VAR_37 = FUNC_9(VAR_27);
      if (!VAR_37) {
 FUNC_8 (VAR_36, "fatal: unsupported table dump format: %s\n", VAR_27);
 return 2;
      }
      break;
    case 'o':
      VAR_29 = FUNC_1 (VAR_27);
      break;
    case 'g':
      if (VAR_23) {
        VAR_24 = VAR_27;
      } else {
        VAR_23 = VAR_27;
      }
      break;
    case 'u':
      VAR_40 = VAR_27;
      break;
    }
  }

  if (VAR_28 >= VAR_44 || VAR_28 + 2 < VAR_44) {
    FUNC_35();
    return 2;
  }

  VAR_35 = VAR_45[VAR_28];

  if (VAR_40 && FUNC_2 (VAR_40) < 0) {
    FUNC_8 (VAR_36, "fatal: cannot change user to %s\n", VAR_40 ? VAR_40 : "(none)");
    return 1;
  }

  if (VAR_23) {
    VAR_34 = FUNC_11 (VAR_23, VAR_14);
    if (VAR_34 < 0) {
      FUNC_8 (VAR_36, "cannot open %s: %m\n", VAR_23);
      return 1;
    }
    VAR_6 = FUNC_30 (VAR_34, VAR_5, VAR_11);
    if (VAR_41 > 0) {
      FUNC_8 (VAR_36, "read %d bytes from %s\n", VAR_6, VAR_23);
    }
    FUNC_0 (VAR_6 >= 0 && VAR_6 < VAR_11);
    FUNC_3 (VAR_34);
    VAR_34 = 0;
    VAR_1 = VAR_5;
    VAR_4 = VAR_3 = VAR_2 = VAR_1 + ((VAR_6 + 3) & -4);
  }

  if (VAR_24) {
    VAR_34 = FUNC_11 (VAR_24, VAR_14);
    if (VAR_34 < 0) {
      FUNC_8 (VAR_36, "cannot open %s: %m\n", VAR_24);
      return 1;
    }
    VAR_7 = FUNC_30 (VAR_34, VAR_2, VAR_1 + VAR_11 - VAR_2);
    if (VAR_41 > 0) {
      FUNC_8 (VAR_36, "read %d bytes from %s\n", VAR_7, VAR_24);
    }
    FUNC_0 (VAR_7 >= 0 && VAR_7 < VAR_11);
    FUNC_3 (VAR_34);
    VAR_34 = 0;
    VAR_4 = VAR_3 = VAR_2 + ((VAR_7 + 3) & -4);
  }

  VAR_34 = FUNC_11 (VAR_35, VAR_14);
  if (VAR_34 < 0) {
    FUNC_8 (VAR_36, "cannot open %s: %m\n", VAR_35);
    return 1;
  }

  if (!VAR_37) {
    VAR_37 = FUNC_9 (FUNC_7 (VAR_35));
    if (!VAR_37) {
      FUNC_8 (VAR_36, "fatal: cannot determine table type from filename %s\n", VAR_35);
    }
  }

  if (VAR_28 + 1 < VAR_44) {
    VAR_39 = VAR_45[VAR_28+1];
    VAR_38 = FUNC_11 (VAR_39, VAR_15 | VAR_12 | VAR_13, 0644);
    if (VAR_38 < 0) {
      FUNC_8 (VAR_36, "cannot create %s: %m\n", VAR_39);
      return 1;
    }
  } else {
    VAR_39 = "stdout";
    VAR_38 = 1;
  }

  switch (VAR_37) {
  case 132:
    FUNC_0 (VAR_32);
    FUNC_0 (VAR_6 > 0);
    VAR_0 = VAR_22;
    FUNC_34(VAR_9, "");
    while (FUNC_31() > 0) {
      FUNC_24();
    }
    break;
  case 131:
    FUNC_0 (VAR_32);
    FUNC_0 (VAR_6 > 0);
    VAR_0 = VAR_26;
    FUNC_34(VAR_9, "");
    while (FUNC_31() > 0) {
      FUNC_26();
    }
    break;
  case 133:
    VAR_0 = VAR_25;
    while (FUNC_31() > 0) {
      FUNC_25();
    }
    if (VAR_29 == 1 && VAR_6) {
      FUNC_0 (FUNC_36 (VAR_38, VAR_5, VAR_6) == VAR_6);
    }
    break;
  case 137:
    FUNC_0 (VAR_32);
    VAR_17 = 1;
    VAR_0 = VAR_16;
    FUNC_34(VAR_9, "member_apps");
    while (FUNC_31() > 0) {
      FUNC_22();
    }
    break;
  case 145:
    FUNC_0 (VAR_32);
    VAR_0 = VAR_16;
    FUNC_34(VAR_9, "app_members");
    while (FUNC_31() > 0) {
      FUNC_14();
    }
    break;
  case 134:
    FUNC_0 (VAR_32);
    VAR_0 = VAR_19;
    while (FUNC_31() > 0) {
      FUNC_23();
    }
    break;
  case 143:
    FUNC_0 (VAR_32);
    VAR_0 = VAR_19;
    while (FUNC_31() > 0) {
      FUNC_15();
    }
    break;
  case 135:
    FUNC_0 (VAR_32);
    VAR_0 = VAR_18;
    while (FUNC_31() > 0) {
      FUNC_21();
    }
    break;
  case 144:
    FUNC_0 (VAR_32);
    VAR_0 = VAR_18;
    while (FUNC_31() > 0) {
      FUNC_13();
    }
    break;
  case 136:
    FUNC_0 (VAR_32);
    FUNC_34(VAR_9, "member_apps_balance");
    VAR_0 = VAR_19;
    while (FUNC_31() > 0) {
      FUNC_20();
    }
    break;
  case 138:
    FUNC_0 (VAR_32);
    FUNC_34(VAR_8, "family");
    break;
  case 129:
    FUNC_0 (VAR_32);
    VAR_0 = VAR_42;
    FUNC_34 (VAR_10, "\x01\x02\x02\x01");
    while (FUNC_31 () > 0) {
      FUNC_28 ();
    }
    break;
  case 128:
    FUNC_0 (VAR_32);
    VAR_0 = VAR_43;
    FUNC_34 (VAR_9, "");
    while (FUNC_31 () > 0) {
      FUNC_29 ();
    }
    break;
  case 140:
    FUNC_0 (VAR_32);
    VAR_0 = VAR_21;
    FUNC_34 (VAR_9, "");
    while (FUNC_31 () > 0) {
      FUNC_18 ();
    }
    break;
  case 139:
    FUNC_0 (VAR_32);
    VAR_0 = VAR_21;
    FUNC_34 (VAR_9, "");
    while (FUNC_31 () > 0) {
      FUNC_19 ();
    }
    break;
  case 142:
    FUNC_0 (VAR_32);
    VAR_0 = VAR_20;

    while (FUNC_31 () > 0) {
      FUNC_16 ();
    }
    break;
  case 141:
    FUNC_0 (VAR_32);
    VAR_0 = VAR_20;

    while (FUNC_31 () > 0) {
      FUNC_17 ();
    }
    break;
  case 130:
    FUNC_0 (VAR_32);
    VAR_0 = VAR_30;
    FUNC_34 (VAR_10, "\x01\x03\x02\x01");
    while (FUNC_31 () > 0) {
      FUNC_27 ();
    }
    break;
  default:
    FUNC_8 (VAR_36, "unknown table type\n");
    FUNC_4(1);
  }

  FUNC_6();
  if (VAR_38 != 1) {
    if (FUNC_5(VAR_38) < 0) {
      FUNC_8 (VAR_36, "error syncing %s: %m", VAR_39);
      FUNC_4 (1);
    }
    FUNC_3 (VAR_38);
  }

  if (VAR_41 > 0) {
    FUNC_12();
  }

  return 0;
}
