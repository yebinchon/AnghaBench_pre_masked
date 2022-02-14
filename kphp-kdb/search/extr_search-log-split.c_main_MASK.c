
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char* replica_prefix; } ;
struct TYPE_7__ {TYPE_1__* info; } ;
struct TYPE_6__ {char* filename; int file_size; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*) ;
 char* VAR_5 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 TYPE_3__* VAR_9 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int,char**,char*) ;
 int FUNC_10 (scalar_t__,int ,int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_12 () ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_13 (int,int ,int ) ;
 int FUNC_14 (char*,int,int) ;
 TYPE_2__* FUNC_15 (TYPE_3__*,scalar_t__) ;
 char* VAR_14 ;
 int VAR_15 ;
 int FUNC_16 () ;
 int FUNC_17 (char*,int ) ;
 char* VAR_16 ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (char*,char*,int *,int *) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 char* VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_20 () ;
 char* VAR_22 ;
 scalar_t__ VAR_23 ;

int FUNC_21 (int VAR_24, char *VAR_25[]) {
  int VAR_26;
  VAR_16 = VAR_25[0];
  while ((VAR_26 = FUNC_9 (VAR_24, VAR_25, "hvu:m:s:t:D")) != -1) {
    switch (VAR_26) {
    case 'v':
      VAR_23 = 1;
      break;
    case 'h':
      FUNC_20();
      return 2;
    case 'u':
      VAR_22 = VAR_14;
      break;
    case 'm':
      if (FUNC_19 (VAR_14, "%d,%d", &VAR_7, &VAR_6) != 2 || VAR_7 < 0 || VAR_7 >= VAR_6) {
 FUNC_20();
 return 2;
      }
      break;
    case 's':
      VAR_10 = FUNC_0 (VAR_14);
      break;
    case 't':
      VAR_11 = VAR_12 = FUNC_0 (VAR_14);
      break;
    case 'D':
      VAR_8 = 3;
      break;
    }
  }

  if (VAR_15 >= VAR_24 || VAR_15 + 2 < VAR_24) {
    FUNC_20();
    return 2;
  }

  if (VAR_12 >= 0) {
    if (VAR_10 > VAR_12) {
      FUNC_8 (VAR_17, "fatal: log start position %ld after stop position %ld\n", VAR_10, VAR_12);
      return 2;
    }
  }

  if (FUNC_1 (VAR_22) < 0) {
    FUNC_8 (VAR_17, "fatal: cannot change user to %s\n", VAR_22 ? VAR_22 : "(none)");
    return 1;
  }

  if (FUNC_4 (VAR_25[VAR_15], VAR_5) < 0) {
    FUNC_8 (VAR_17, "cannot open binlog files for %s\n", VAR_5 ? VAR_5 : VAR_25[VAR_15]);
    FUNC_5 (1);
  }

  VAR_0 = FUNC_15 (VAR_9, VAR_10);
  if (!VAR_0) {
    FUNC_8 (VAR_17, "fatal: cannot find binlog for %s, log position %ld\n", VAR_9->replica_prefix, VAR_10);
    FUNC_5 (1);
  }

  VAR_5 = VAR_0->info->filename;

  if (VAR_23) {
    FUNC_8 (VAR_17, "replaying binlog file %s (size %d)\n", VAR_5, VAR_0->info->file_size);
  }

  FUNC_2();

  FUNC_10 (VAR_10, 0, 0);

  if (VAR_10 > 0) {
    FUNC_11 (0);
  }

  if (VAR_15 + 1 < VAR_24) {
    VAR_20 = VAR_25[VAR_15+1];
    VAR_19 = FUNC_14 (VAR_20, VAR_3 | VAR_1 | VAR_2, 0644);
    if (VAR_19 < 0) {
      FUNC_8 (VAR_17, "cannot create %s: %m\n", VAR_20);
      return 1;
    }
    VAR_21 = FUNC_13 (VAR_19, 0, VAR_4);
    VAR_18 = (VAR_21 > 0);
  } else {
    VAR_20 = "stdout";
    VAR_19 = 1;
  }

  VAR_26 = FUNC_18 (0, 1);

  if (VAR_26 < 0) {
    FUNC_8 (VAR_17, "fatal: error reading binlog\n");
    FUNC_5 (1);
  }

  if (VAR_12 >= 0 && VAR_13 != VAR_12) {
    FUNC_8 (VAR_17, "fatal: binlog read up to position %ld instead of %ld\n", VAR_13, VAR_12);
    FUNC_5 (1);
  }

  FUNC_7 ();

  if (VAR_19 != 1) {
    if (FUNC_6 (VAR_19) < 0) {
      FUNC_8 (VAR_17, "error syncing %s: %m", VAR_20);
      FUNC_5 (1);
    }
    FUNC_3 (VAR_19);
  }

  if (VAR_23 > 0) {
    FUNC_16 ();
  }

  FUNC_17 ("%lld\n", FUNC_12());

  return 0;
}
