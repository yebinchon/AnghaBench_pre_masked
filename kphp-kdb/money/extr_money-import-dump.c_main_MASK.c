
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
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
 int VAR_18 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int ,char*,...) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int,char**,char*) ;
 char* VAR_19 ;
 char* VAR_20 ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int,int ) ;
 int FUNC_14 (int,int ,int ) ;
 scalar_t__ FUNC_15 (char*,int,...) ;
 char* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 char* VAR_24 ;
 int FUNC_18 () ;
 int FUNC_19 (scalar_t__,scalar_t__,int) ;
 int FUNC_20 () ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 char* VAR_30 ;
 int FUNC_21 (char*,char*,scalar_t__*,int*) ;
 int FUNC_22 (int ,char*) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 char* VAR_35 ;
 int FUNC_23 () ;
 char* VAR_36 ;
 scalar_t__ VAR_37 ;
 int FUNC_24 () ;

int FUNC_25 (int VAR_38, char *VAR_39[]) {
  int VAR_40;
  VAR_24 = VAR_39[0];
  while ((VAR_40 = FUNC_11 (VAR_38, VAR_39, "hvu:m:f:g:o:")) != -1) {
    switch (VAR_40) {
    case 'v':
      VAR_37++;
      break;
    case 'h':
      FUNC_23();
      return 2;
    case 'm':
      FUNC_0 (FUNC_21(VAR_21, "%d,%d", &VAR_28, &VAR_27) == 2);
      FUNC_0 (VAR_27 > 0 && VAR_27 <= 1000 && VAR_28 >= 0 && VAR_28 < VAR_27);
      break;
    case 'f':
      VAR_33 = FUNC_10(VAR_21);
      if (!VAR_33) {
 FUNC_7 (VAR_31, "fatal: unsupported table dump format: %s\n", VAR_21);
 return 2;
      }
      break;
    case 'o':
      VAR_23 = FUNC_1 (VAR_21);
      break;
    case 'g':
      if (VAR_19) {
        VAR_20 = VAR_21;
      } else {
        VAR_19 = VAR_21;
      }
      break;
    case 'u':
      VAR_36 = VAR_21;
      break;
    }
  }

  VAR_26 = VAR_28;
  VAR_25 = VAR_28 + 1;

  if (VAR_22 >= VAR_38 || VAR_22 + 2 < VAR_38) {
    FUNC_23();
    return 2;
  }

  VAR_30 = VAR_39[VAR_22];

  if (VAR_36 && FUNC_2 (VAR_36) < 0) {
    FUNC_7 (VAR_31, "fatal: cannot change user to %s\n", VAR_36 ? VAR_36 : "(none)");
    return 1;
  }

  if (VAR_19) {
    VAR_29 = FUNC_15 (VAR_19, VAR_13);
    if (VAR_29 < 0) {
      FUNC_7 (VAR_31, "cannot open %s: %m\n", VAR_19);
      return 1;
    }
    VAR_7 = FUNC_19 (VAR_29, VAR_6, VAR_9);
    if (VAR_37 > 0) {
      FUNC_7 (VAR_31, "read %d bytes from %s\n", VAR_7, VAR_19);
    }
    FUNC_0 (VAR_7 >= 0 && VAR_7 < VAR_9);
    FUNC_3 (VAR_29);
    VAR_29 = 0;
    VAR_2 = VAR_6;
    VAR_5 = VAR_4 = VAR_3 = VAR_2 + ((VAR_7 + 3) & -4);
  }

  if (VAR_20) {
    VAR_29 = FUNC_15 (VAR_20, VAR_13);
    if (VAR_29 < 0) {
      FUNC_7 (VAR_31, "cannot open %s: %m\n", VAR_20);
      return 1;
    }
    VAR_8 = FUNC_19 (VAR_29, VAR_3, VAR_2 + VAR_9 - VAR_3);
    if (VAR_37 > 0) {
      FUNC_7 (VAR_31, "read %d bytes from %s\n", VAR_8, VAR_20);
    }
    FUNC_0 (VAR_8 >= 0 && VAR_8 < VAR_9);
    FUNC_3 (VAR_29);
    VAR_29 = 0;
    VAR_5 = VAR_4 = VAR_3 + ((VAR_8 + 3) & -4);
  }

  VAR_29 = FUNC_15 (VAR_30, VAR_13);
  if (VAR_29 < 0) {
    FUNC_7 (VAR_31, "cannot open %s: %m\n", VAR_30);
    return 1;
  }

  if (!VAR_33) {
    VAR_33 = FUNC_10 (FUNC_6 (VAR_30));
    if (!VAR_33) {
      FUNC_7 (VAR_31, "fatal: cannot determine table type from filename %s\n", VAR_30);
    }
  }

  if (VAR_22 + 1 < VAR_38) {
    VAR_35 = VAR_39[VAR_22+1];
    VAR_34 = FUNC_15 (VAR_35, VAR_14);
    if (VAR_34 >= 0) {
      FUNC_0 (FUNC_13 (VAR_34, VAR_1) > 0);
      if (FUNC_12 (VAR_34) < 0) {
        FUNC_7 (VAR_31, "fatal: bad binlog headers of %s\n", VAR_35);
      }
      FUNC_14 (VAR_34, 0, VAR_16);
    } else {
      VAR_34 = FUNC_15 (VAR_35, VAR_15 | VAR_11 | VAR_12, 0644);
      if (VAR_34 < 0) {
        FUNC_7 (VAR_31, "cannot create %s: %m\n", VAR_35);
        return 1;
      }
      FUNC_0 (FUNC_13 (VAR_34, VAR_1) > 0);
      FUNC_9 (VAR_34, 0);
      FUNC_14 (VAR_34, 0, VAR_17);
    }
  } else {
    VAR_35 = "stdout";
    VAR_34 = 1;
    VAR_32 = 1;
  }

  FUNC_18 ();

  switch (VAR_33) {
  case 128:
    FUNC_22(VAR_10, "money");
    VAR_0 = VAR_18;
    while (FUNC_20() > 0) {
      FUNC_17();
    }
    break;
  case 129:
  default:
    FUNC_7 (VAR_31, "unknown table type\n");
    FUNC_4(1);
  }

  FUNC_5();
  if (VAR_34 != 1) {
    FUNC_24 ();
    if (FUNC_8(VAR_34) < 0) {
      FUNC_7 (VAR_31, "error syncing %s: %m", VAR_35);
      FUNC_4 (1);
    }
    FUNC_3 (VAR_34);
  }

  if (VAR_37 > 0) {
    FUNC_16();
  }

  return 0;
}
