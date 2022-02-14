
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
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 (int,char**,char*) ;
 int VAR_6 ;
 char* VAR_7 ;
 void* VAR_8 ;
 int FUNC_8 (int,void*) ;
 void* FUNC_9 (int,int ,int ) ;
 void* FUNC_10 (char*,int,...) ;
 char* VAR_9 ;
 int VAR_10 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 char* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 char* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 char* VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_14 () ;
 char* VAR_20 ;
 scalar_t__ VAR_21 ;

int FUNC_15 (int VAR_22, char *VAR_23[]) {
  int VAR_24;
  VAR_11 = VAR_23[0];
  while ((VAR_24 = FUNC_7 (VAR_22, VAR_23, "hvu:")) != -1) {
    switch (VAR_24) {
    case 'v':
      VAR_21 = 1;
      break;
    case 'h':
      FUNC_14();
      return 2;
    case 'u':
      VAR_20 = VAR_9;
      break;
    }
  }

  if (VAR_10 + 1 >= VAR_22 || VAR_10 + 3 < VAR_22) {
    FUNC_14();
    return 2;
  }

  VAR_7 = VAR_23[VAR_10];
  VAR_15 = VAR_23[VAR_10 + 1];

  if (VAR_20 && FUNC_1 (VAR_20) < 0) {
    FUNC_6 (VAR_16, "fatal: cannot change user to %s\n", VAR_20 ? VAR_20 : "(none)");
    return 1;
  }

  VAR_6 = FUNC_10 (VAR_7, VAR_2);
  if (VAR_6 < 0) {
    FUNC_6 (VAR_16, "cannot open index %s: %m\n", VAR_7);
    return 1;
  }

  VAR_8 = FUNC_9 (VAR_6, 0, VAR_4);
  FUNC_9 (VAR_6, 0, VAR_5);

  FUNC_8 (VAR_6, VAR_8);

  VAR_14 = FUNC_10 (VAR_15, VAR_2);
  if (VAR_14 < 0) {
    FUNC_6 (VAR_16, "cannot open %s: %m\n", VAR_15);
    return 1;
  }

  if (VAR_10 + 2 < VAR_22) {
    VAR_18 = VAR_23[VAR_10+2];
    VAR_17 = FUNC_10 (VAR_18, VAR_3 | VAR_0 | VAR_1, 0644);
    if (VAR_17 < 0) {
      FUNC_6 (VAR_16, "cannot create %s: %m\n", VAR_18);
      return 1;
    }
    VAR_19 = FUNC_9 (VAR_17, 0, VAR_4);
    FUNC_0 (VAR_19 > 0);
  } else {
    VAR_18 = "stdout";
    VAR_17 = 1;
  }

  FUNC_12 ();
  for (VAR_24 = 0; VAR_24 <= 2; VAR_24++) {
    if (VAR_12 - VAR_13 >= 4096 && *((int *) VAR_13) == 0x0473664b) {
      VAR_13 += 4096;
    }
  }

  while (FUNC_13() >= 0) { }

  FUNC_5();

  if (VAR_17 != 1) {
    if (FUNC_4(VAR_17) < 0) {
      FUNC_6 (VAR_16, "error syncing %s: %m", VAR_18);
      FUNC_3 (1);
    }
    FUNC_2 (VAR_17);
  }

  if (VAR_21 > 0) {
    FUNC_11();
  }

  return VAR_12 > VAR_13 ? 1 : 0;
}
