
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
 scalar_t__ FUNC_4 (char*,char*) ;
 TYPE_3__* VAR_8 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int,char**,char*) ;
 int FUNC_10 (scalar_t__,int ,int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_12 (int,int ,int ) ;
 int FUNC_13 (char*,int,int) ;
 TYPE_2__* FUNC_14 (TYPE_3__*,scalar_t__) ;
 char* VAR_12 ;
 int VAR_13 ;
 int FUNC_15 () ;
 char* VAR_14 ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (char*,char*,int *,int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 char* VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_18 () ;
 char* VAR_20 ;
 scalar_t__ VAR_21 ;

int FUNC_19 (int VAR_22, char *VAR_23[]) {
  int VAR_24;
  VAR_14 = VAR_23[0];
  while ((VAR_24 = FUNC_9 (VAR_22, VAR_23, "hvu:m:s:t:")) != -1) {
    switch (VAR_24) {
    case 'v':
      VAR_21 = 1;
      break;
    case 'h':
      FUNC_18();
      return 2;
    case 'u':
      VAR_20 = VAR_12;
      break;
    case 'm':
      if (FUNC_17 (VAR_12, "%d,%d", &VAR_7, &VAR_6) != 2 || VAR_7 < 0 || VAR_7 >= VAR_6) {
 FUNC_18();
 return 2;
      }
      break;
    case 's':
      VAR_9 = FUNC_0 (VAR_12);
      break;
    case 't':
      VAR_10 = FUNC_0 (VAR_12);
      break;
    }
  }

  if (VAR_13 >= VAR_22 || VAR_13 + 2 < VAR_22) {
    FUNC_18();
    return 2;
  }

  if (VAR_10 >= 0) {
    if (VAR_9 > VAR_10) {
      FUNC_8 (VAR_15, "fatal: log start position %ld after stop position %ld\n", VAR_9, VAR_10);
      return 2;
    }
  }

  if (VAR_20 && FUNC_1 (VAR_20) < 0) {
    FUNC_8 (VAR_15, "fatal: cannot change user to %s\n", VAR_20 ? VAR_20 : "(none)");
    return 1;
  }

  if (FUNC_4 (VAR_23[VAR_13], VAR_5) < 0) {
    FUNC_8 (VAR_15, "cannot open binlog files for %s\n", VAR_5 ? VAR_5 : VAR_23[VAR_13]);
    FUNC_5 (1);
  }

  VAR_0 = FUNC_14 (VAR_8, VAR_9);
  if (!VAR_0) {
    FUNC_8 (VAR_15, "fatal: cannot find binlog for %s, log position %lld\n", VAR_8->replica_prefix, 0LL);
    FUNC_5 (1);
  }

  VAR_5 = VAR_0->info->filename;

  if (VAR_21) {
    FUNC_8 (VAR_15, "replaying binlog file %s (size %d)\n", VAR_5, VAR_0->info->file_size);
  }

  FUNC_2();

  FUNC_10 (VAR_9, 0, 0);

  if (VAR_9 > 0) {
    FUNC_11 (0);
  }

  if (VAR_13 + 1 < VAR_22) {
    VAR_18 = VAR_23[VAR_13+1];
    VAR_17 = FUNC_13 (VAR_18, VAR_3 | VAR_1 | VAR_2, 0644);
    if (VAR_17 < 0) {
      FUNC_8 (VAR_15, "cannot create %s: %m\n", VAR_18);
      return 1;
    }
    VAR_19 = FUNC_12 (VAR_17, 0, VAR_4);
    VAR_16 = (VAR_19 > 0);
  } else {
    VAR_18 = "stdout";
    VAR_17 = 1;
  }

  VAR_24 = FUNC_16 (0, 1);

  if (VAR_24 < 0) {
    FUNC_8 (VAR_15, "fatal: error reading binlog\n");
    FUNC_5 (1);
  }

  if (VAR_10 >= 0 && VAR_11 != VAR_10) {
    FUNC_8 (VAR_15, "fatal: binlog read up to position %ld instead of %ld\n", VAR_11, VAR_10);
    FUNC_5 (1);
  }

  FUNC_7 ();

  if (VAR_17 != 1) {
    if (FUNC_6 (VAR_17) < 0) {
      FUNC_8 (VAR_15, "error syncing %s: %m", VAR_18);
      FUNC_5 (1);
    }
    FUNC_3 (VAR_17);
  }

  if (VAR_21 > 0) {
    FUNC_15 ();
  }

  return 0;
}
