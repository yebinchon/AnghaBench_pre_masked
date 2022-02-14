
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
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (char*,char*) ;
 TYPE_3__* VAR_9 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_10 ;
 int * VAR_11 ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int,char**,char*) ;
 int VAR_12 ;
 int FUNC_11 (scalar_t__,int ,int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_13 (int,int ,int ) ;
 int FUNC_14 (char*,int,int) ;
 TYPE_2__* FUNC_15 (TYPE_3__*,scalar_t__) ;
 char* VAR_16 ;
 int VAR_17 ;
 int FUNC_16 () ;
 char* VAR_18 ;
 int FUNC_17 (int ,int) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_18 (char*,char*,scalar_t__*,scalar_t__*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 char* VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_19 () ;
 char* VAR_26 ;
 scalar_t__ VAR_27 ;

int FUNC_20 (int VAR_28, char *VAR_29[]) {
  int VAR_30;
  VAR_18 = VAR_29[0];
  while ((VAR_30 = FUNC_10 (VAR_28, VAR_29, "hfvu:m:s:t:z:")) != -1) {
    switch (VAR_30) {
    case 'v':
      VAR_27 = 1;
      break;
    case 'f':
      VAR_19 = 1;
      break;
    case 'h':
      FUNC_19();
      return 2;
    case 'u':
      VAR_26 = VAR_16;
      break;
    case 'm':
      if (FUNC_18 (VAR_16, "%d,%d", &VAR_7, &VAR_6) != 2 || VAR_7 < 0 || VAR_7 >= VAR_6) {
 FUNC_19();
 return 2;
      }
      break;
    case 's':
      VAR_13 = FUNC_0 (VAR_16);
      break;
    case 't':
      VAR_14 = FUNC_0 (VAR_16);
      break;
    case 'z':
      VAR_20 = FUNC_9(VAR_16);
      switch (VAR_20) {
      case 128:
        FUNC_8 (VAR_21, "fatal: unsupported split mode: %s\n", VAR_16);
        return 2;
      case 129:
        VAR_11 = &VAR_12;
        break;
      case 130:
        VAR_11 = &VAR_10;
        break;
      case 131:
        VAR_11 = &VAR_8;
        break;
      }
      break;
    }
  }

  if (VAR_6 < 0) {
    FUNC_19 ();
    return 2;
  }


  if (VAR_17 >= VAR_28 || VAR_17 + 2 < VAR_28) {
    FUNC_19();
    return 2;
  }

  if (VAR_14 >= 0) {
    if (VAR_13 > VAR_14) {
      FUNC_8 (VAR_21, "fatal: log start position %ld after stop position %ld\n", VAR_13, VAR_14);
      return 2;
    }
  }

  if (VAR_26 && FUNC_1 (VAR_26) < 0) {
    FUNC_8 (VAR_21, "fatal: cannot change user to %s\n", VAR_26 ? VAR_26 : "(none)");
    return 1;
  }

  if (FUNC_4 (VAR_29[VAR_17], VAR_5) < 0) {
    FUNC_8 (VAR_21, "cannot open binlog files for %s\n", VAR_5 ? VAR_5 : VAR_29[VAR_17]);
    FUNC_5 (1);
  }

  VAR_0 = FUNC_15 (VAR_9, VAR_13);
  if (!VAR_0) {
    FUNC_8 (VAR_21, "fatal: cannot find binlog for %s, log position %lld\n", VAR_9->replica_prefix, 0LL);
    FUNC_5 (1);
  }

  VAR_5 = VAR_0->info->filename;

  if (VAR_27) {
    FUNC_8 (VAR_21, "replaying binlog file %s (size %d)\n", VAR_5, VAR_0->info->file_size);
  }

  FUNC_2();

  FUNC_11 (VAR_13, 0, 0);

  if (VAR_13 > 0) {
    FUNC_12 (0);
  }

  if (VAR_17 + 1 < VAR_28) {
    VAR_24 = VAR_29[VAR_17+1];
    VAR_23 = FUNC_14 (VAR_24, VAR_3 | VAR_1 | VAR_2, 0644);
    if (VAR_23 < 0) {
      FUNC_8 (VAR_21, "cannot create %s: %m\n", VAR_24);
      return 1;
    }
    VAR_25 = FUNC_13 (VAR_23, 0, VAR_4);
    VAR_22 = (VAR_25 > 0);
  } else {
    VAR_24 = "stdout";
    VAR_23 = 1;
  }

  VAR_30 = FUNC_17 (0, 1);

  if (VAR_30 < 0) {
    FUNC_8 (VAR_21, "fatal: error reading binlog\n");
    FUNC_5 (1);
  }

  if (VAR_14 >= 0 && VAR_15 != VAR_14) {
    FUNC_8 (VAR_21, "fatal: binlog read up to position %ld instead of %ld\n", VAR_15, VAR_14);
    FUNC_5 (1);
  }

  FUNC_7 ();

  if (VAR_23 != 1) {
    if (FUNC_6 (VAR_23) < 0) {
      FUNC_8 (VAR_21, "error syncing %s: %m", VAR_24);
      FUNC_5 (1);
    }
    FUNC_3 (VAR_23);
  }

  if (VAR_27 > 0) {
    FUNC_16 ();
  }

  return 0;
}
