
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*,char*) ;
 int FUNC_8 (int,char**,char*) ;
 scalar_t__ FUNC_9 (int,int ,int ) ;
 void* FUNC_10 (char*,int,...) ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 char* VAR_13 ;
 int FUNC_13 (char*,char*,scalar_t__*,scalar_t__*) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 char* VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_15 () ;
 char* VAR_21 ;
 scalar_t__ VAR_22 ;

int FUNC_16 (int VAR_23, char *VAR_24[]) {
  int VAR_25;
  VAR_8 = VAR_24[0];
  while ((VAR_25 = FUNC_8 (VAR_23, VAR_24, "hivt:u:U:")) != -1) {
    switch (VAR_25) {
    case 'v':
      VAR_22 = 1;
      break;
    case 'h':
      FUNC_15();
      return 2;
    case 'u':
      VAR_21 = VAR_6;
      break;
    case 'i':
      VAR_11 = 1;
      break;
    case 't':
      VAR_5 = FUNC_1 (VAR_6);
      break;
    case 'U':
      if (FUNC_13 (VAR_6, "%d..%d", &VAR_20, &VAR_19) < 2 || VAR_20 >= VAR_19 || VAR_20 < 0) {
 FUNC_15();
 return 2;
      }
      break;
    }
  }

  if (VAR_7 >= VAR_23 || VAR_7 + 2 < VAR_23 || (VAR_5 <= 0 && !VAR_20 && !VAR_19)) {
    FUNC_15();
    return 2;
  }

  VAR_15 = (VAR_20 ? VAR_20 : FUNC_14(0) - VAR_5);

  VAR_13 = VAR_24[VAR_7];

  if (VAR_21 && FUNC_2 (VAR_21) < 0) {
    FUNC_7 (VAR_14, "fatal: cannot change user to %s\n", VAR_21 ? VAR_21 : "(none)");
    return 1;
  }

  VAR_12 = FUNC_10 (VAR_13, VAR_2);
  if (VAR_12 < 0) {
    FUNC_7 (VAR_14, "cannot open %s: %m\n", VAR_13);
    return 1;
  }

  if (VAR_7 + 1 < VAR_23) {
    VAR_17 = VAR_24[VAR_7+1];
    VAR_16 = FUNC_10 (VAR_17, VAR_3 | VAR_0 | VAR_1, 0644);
    if (VAR_16 < 0) {
      FUNC_7 (VAR_14, "cannot create %s: %m\n", VAR_17);
      return 1;
    }
    VAR_18 = FUNC_9 (VAR_16, 0, VAR_4);
    FUNC_0 ((VAR_18 > 0) ^ (VAR_20 > 0));
  } else {
    VAR_17 = "stdout";
    VAR_16 = 1;
  }

  while (FUNC_12() >= 0) { }

  FUNC_6();

  if (VAR_16 != 1) {
    if (FUNC_5(VAR_16) < 0) {
      FUNC_7 (VAR_14, "error syncing %s: %m", VAR_17);
      FUNC_4 (1);
    }
    FUNC_3 (VAR_16);
  }

  if (VAR_22 > 0) {
    FUNC_11();
  }

  return VAR_9 > VAR_10 ? 1 : 0;
}
