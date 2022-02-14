
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {char* replica_prefix; } ;
struct TYPE_8__ {TYPE_1__* info; } ;
struct TYPE_7__ {char* filename; int file_size; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* VAR_7 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 TYPE_3__* VAR_11 ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int,char**,char*) ;
 int VAR_12 ;
 int FUNC_13 (int,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_14 (int,int ,int ) ;
 int FUNC_15 (char*,int,int) ;
 TYPE_2__* FUNC_16 (TYPE_3__*,int) ;
 char* VAR_17 ;
 int VAR_18 ;
 int FUNC_17 () ;
 char* VAR_19 ;
 int FUNC_18 (int ,int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_19 (char*,char*,int*,int*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 char* VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_20 () ;
 char* VAR_28 ;
 scalar_t__ VAR_29 ;

int FUNC_21 (int VAR_30, char *VAR_31[]) {
  int VAR_32;
  VAR_19 = VAR_31[0];
  while ((VAR_32 = FUNC_12 (VAR_30, VAR_31, "fhvu:m:s:t:q:")) != -1) {
    switch (VAR_32) {
    case 'v':
      VAR_29 += 1;
      break;
    case 'f':

      VAR_20 = 1;
      break;
    case 'h':
      FUNC_20();
      return 2;
    case 'u':
      VAR_28 = VAR_17;
      break;
    case 'q':
      VAR_22 = FUNC_0 (VAR_17);
      break;
    case 'm':
      if (FUNC_19 (VAR_17, "%d,%d", &VAR_9, &VAR_8) != 2 || VAR_9 < 0 || VAR_9 >= VAR_8) {
 FUNC_20();
 return 2;
      }
      break;
    case 's':
      VAR_13 = FUNC_1 (VAR_17);
      break;
    case 't':
      VAR_14 = VAR_15 = FUNC_1 (VAR_17);
      break;
    }
  }

  if (VAR_18 >= VAR_30 || VAR_18 + 2 < VAR_30 || !VAR_8) {
    FUNC_20 ();
    return 2;
  }

  if (VAR_22 > 0 && VAR_8 % VAR_22 != 0) {
    FUNC_20 ();
    return 2;
  }

  if (VAR_15 >= 0) {
    if (VAR_13 > VAR_15) {
      FUNC_11 (VAR_23, "fatal: log start position %d after stop position %d\n", VAR_13, VAR_15);
      return 2;
    }
  }

  if (VAR_28 && FUNC_2 (VAR_28) < 0) {
    FUNC_11 (VAR_23, "fatal: cannot change user to %s\n", VAR_28 ? VAR_28 : "(none)");
    return 1;
  }

  if (FUNC_6 (VAR_31[VAR_18], VAR_7) < 0) {
    FUNC_11 (VAR_23, "cannot open binlog files for %s\n", VAR_7 ? VAR_7 : VAR_31[VAR_18]);
    FUNC_7 (1);
  }

  VAR_0 = FUNC_16 (VAR_11, 0);
  if (!VAR_0) {
    FUNC_11 (VAR_23, "fatal: cannot find binlog for %s, log position %lld\n", VAR_11->replica_prefix, 0LL);
    FUNC_7 (1);
  }

  VAR_7 = VAR_0->info->filename;

  if (VAR_29) {
    FUNC_11 (VAR_23, "replaying binlog file %s (size %d)\n", VAR_7, VAR_0->info->file_size);
  }

  FUNC_3 ();

  FUNC_13 (0, 0, 0);

  if (VAR_18 + 1 < VAR_30) {
    VAR_26 = VAR_31[VAR_18+1];
    VAR_25 = FUNC_15 (VAR_26, VAR_4 | VAR_2 | VAR_3, 0644);
    if (VAR_25 < 0) {
      FUNC_11 (VAR_23, "cannot create %s: %m\n", VAR_26);
      return 1;
    }
    VAR_27 = FUNC_14 (VAR_25, 0, VAR_5);
    VAR_24 = (VAR_27 > 0);
  } else {
    VAR_26 = "stdout";
    VAR_25 = 1;
  }

  if (VAR_13 > 0) {

    VAR_15 = 256;
    VAR_12 = 1;
    VAR_10 = 3;

    VAR_32 = FUNC_18 (0, 1);

    if (!VAR_21) {
      FUNC_11 (VAR_23, "fatal: cannot parse first LEV_START entry");
      FUNC_7 (1);
    }

    VAR_15 = VAR_14;
    VAR_12 = 0;

    FUNC_3 ();

    FUNC_5 (VAR_0, 1);
    VAR_0 = 0;

    VAR_0 = FUNC_16 (VAR_11, VAR_13);
    if (!VAR_0) {
      FUNC_11 (VAR_23, "fatal: cannot find binlog for %s, log position %d\n", VAR_11->replica_prefix, VAR_13);
      FUNC_7 (1);
    }

    VAR_7 = VAR_0->info->filename;

    if (VAR_29) {
      FUNC_11 (VAR_23, "replaying binlog file %s (size %d) from log position %d\n", VAR_7, VAR_0->info->file_size, VAR_13);
    }

    FUNC_13 (VAR_13, 0, 0);
  }

  VAR_10 = 3;

  VAR_32 = FUNC_18 (0, 1);

  if (VAR_32 < 0) {
    FUNC_11 (VAR_23, "fatal: error reading binlog\n");
    FUNC_7 (1);
  }

  if (VAR_15 >= 0 && VAR_16 != VAR_15) {
    FUNC_11 (VAR_23, "fatal: binlog read up to position %d instead of %d\n", VAR_16, VAR_15);
    FUNC_7 (1);
  }

  for (VAR_32 = 0; VAR_32 < VAR_1; VAR_32++) {
    if (VAR_6[VAR_32]) {
      FUNC_10 (VAR_32);
    }
  }

  FUNC_9 ();

  if (VAR_25 != 1) {
    if (FUNC_8 (VAR_25) < 0) {
      FUNC_11 (VAR_23, "error syncing %s: %m", VAR_26);
      FUNC_7 (1);
    }
    FUNC_4 (VAR_25);
  }

  if (VAR_29 > 0) {
    FUNC_17 ();
  }

  return 0;
}
