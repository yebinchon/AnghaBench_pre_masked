
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int replica_prefix; } ;
struct TYPE_7__ {TYPE_1__* info; } ;
struct TYPE_6__ {char* filename; int file_size; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 char* VAR_5 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (char*,char*) ;
 TYPE_3__* VAR_8 ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,char*,char) ;
 int FUNC_10 (int,char**,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_13 (char*,...) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_14 (int,int ,int ) ;
 int FUNC_15 (char*,int,int) ;
 TYPE_2__* FUNC_16 (TYPE_3__*,scalar_t__) ;
 char* VAR_12 ;
 int VAR_13 ;
 char* VAR_14 ;
 int FUNC_17 () ;
 char* VAR_15 ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (char*,char*,int *,int *) ;
 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 char* VAR_20 ;
 scalar_t__ VAR_21 ;
 void* FUNC_20 (int *) ;
 int FUNC_21 () ;
 char* VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_22 (int,char*,char*,int ) ;
 int VAR_24 ;

int FUNC_23 (int VAR_25, char *VAR_26[]) {
  int VAR_27;
  VAR_15 = VAR_26[0];
  while ((VAR_27 = FUNC_10 (VAR_25, VAR_26, "C:LS:hm:s:t:u:v")) != -1) {
    switch (VAR_27) {
    case 'C':
      VAR_14 = FUNC_0 (VAR_12);
      break;
    case 'L':
      VAR_24 = 0;
      break;
    case 'S':
      VAR_16 = FUNC_0 (VAR_12);
      if (VAR_16 > FUNC_20 (((void*)0))) {
        FUNC_13 ("start_timestamps could be after current time\n");
        FUNC_6 (1);
      }
      break;
    case 'h':
      FUNC_21 ();
      return 2;
    case 'm':
      if (FUNC_19 (VAR_12, "%d,%d", &VAR_7, &VAR_6) != 2 || VAR_7 < 0 || VAR_7 >= VAR_6) {
       FUNC_21();
      }
      break;
    case 's':
      VAR_9 = FUNC_1 (VAR_12);
      break;
    case 't':
      VAR_10 = FUNC_1 (VAR_12);
      break;
    case 'u':
      VAR_22 = VAR_12;
      break;
    case 'v':
      VAR_23 = 1;
      break;
    default:
      FUNC_9 (VAR_17, "Unimplemented option -%c\n", (char) VAR_27);
      FUNC_6 (1);
    }
  }

  if (VAR_13 >= VAR_25 || VAR_13 + 2 < VAR_25) {
    FUNC_21 ();
  }

  if (VAR_10 >= 0) {
    if (VAR_9 > VAR_10) {
      FUNC_13 ("fatal: log start position %lld after stop position %lld\n", VAR_9, VAR_10);
      return 2;
    }
  }

  if (FUNC_2 (VAR_22) < 0) {
    FUNC_13 ("fatal: cannot change user to %s\n", VAR_22 ? VAR_22 : "(none)");
    return 1;
  }

  if (FUNC_5 (VAR_26[VAR_13], VAR_5) < 0) {
    FUNC_13 ("cannot open binlog files for %s\n", VAR_5 ? VAR_5 : VAR_26[VAR_13]);
    FUNC_6 (1);
  }

  VAR_0 = FUNC_16 (VAR_8, VAR_9);
  if (!VAR_0) {
    FUNC_13 ("fatal: cannot find binlog for %s, log position %lld\n", VAR_8->replica_prefix, 0LL);
    FUNC_6 (1);
  }

  VAR_5 = VAR_0->info->filename;

  FUNC_22 (1, "replaying binlog file %s (size %lld)\n", VAR_5, VAR_0->info->file_size);

  FUNC_3 ();

  FUNC_12 (VAR_9, 0, 0);

  if (VAR_9 > 0) {
    FUNC_11 (0);
  }

  if (VAR_13 + 1 < VAR_25) {
    VAR_20 = VAR_26[VAR_13+1];
    VAR_19 = FUNC_15 (VAR_20, VAR_3 | VAR_1 | VAR_2, 0644);
    if (VAR_19 < 0) {
      FUNC_13 ("cannot create %s: %m\n", VAR_20);
      return 1;
    }
    VAR_21 = FUNC_14 (VAR_19, 0, VAR_4);
    VAR_18 = (VAR_21 > 0);
  } else {
    VAR_20 = "stdout";
    VAR_19 = 1;
  }

  if (VAR_14 > 0 && VAR_18) {
    FUNC_13 ("You couldn't specify '-C %d' and existed target together.\n", VAR_14);
    FUNC_6 (1);
  }

  VAR_27 = FUNC_18 (0, 1);

  if (VAR_27 < 0) {
    FUNC_13 ("fatal: error reading binlog\n");
    FUNC_6 (1);
  }

  if (VAR_10 >= 0 && VAR_11 != VAR_10) {
    FUNC_13 ("fatal: binlog read up to position %lld instead of %lld\n", VAR_11, VAR_10);
    FUNC_6 (1);
  }

  FUNC_8 ();

  if (VAR_19 != 1) {
    if (FUNC_7 (VAR_19) < 0) {
      FUNC_13 ("error syncing %s: %m", VAR_20);
      FUNC_6 (1);
    }
    FUNC_4 (VAR_19);
  }

  if (VAR_23 > 0) {
    FUNC_17 ();
  }

  return 0;
}
