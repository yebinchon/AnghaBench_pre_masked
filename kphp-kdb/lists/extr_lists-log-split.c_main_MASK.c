
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lev_crc32 {int pos; int crc32; int timestamp; int type; } ;
struct TYPE_9__ {char* replica_prefix; } ;
struct TYPE_8__ {TYPE_1__* info; } ;
struct TYPE_7__ {char* filename; int file_size; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 char* VAR_8 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 TYPE_3__* VAR_11 ;
 int FUNC_7 (int) ;
 int VAR_12 ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_13 ;
 int FUNC_9 () ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int,char**,char*) ;
 int VAR_14 ;
 int FUNC_12 (int,int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_13 (char*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_14 (int,int ,int ) ;
 int VAR_21 ;
 int FUNC_15 (char*,int,int) ;
 TYPE_2__* FUNC_16 (TYPE_3__*,int) ;
 char* VAR_22 ;
 int VAR_23 ;
 int FUNC_17 () ;
 char* VAR_24 ;
 int FUNC_18 (int ,int) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_19 (char*,char*,int *,int *) ;
 int VAR_27 ;
 int FUNC_20 (char*,char*,int) ;
 char* FUNC_21 (char*,char) ;
 int VAR_28 ;
 int VAR_29 ;
 char* VAR_30 ;
 scalar_t__ VAR_31 ;
 int FUNC_22 () ;
 char* VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_23 (int,char*) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 struct lev_crc32* FUNC_24 (int) ;

int FUNC_25 (int VAR_38, char *VAR_39[]) {
  int VAR_40;
  VAR_24 = VAR_39[0];
  while ((VAR_40 = FUNC_11 (VAR_38, VAR_39, "fhvu:m:s:t:M:F")) != -1) {
    switch (VAR_40) {
    case 'F':
      VAR_13 = 1;
      break;
    case 'v':
      VAR_33 += 1;
      break;
    case 'f':

      VAR_25 = 1;
      break;
    case 'h':
      FUNC_22 ();
      return 2;
    case 'u':
      VAR_32 = VAR_22;
      break;
    case 'm':
      if (FUNC_19 (VAR_22, "%d,%d", &VAR_10, &VAR_9) != 2 || VAR_10 < 0 || VAR_10 >= VAR_9) {
 FUNC_22();
 return 2;
      }
      break;
    case 's':
      VAR_15 = FUNC_1 (VAR_22);
      break;
    case 't':
      VAR_16 = VAR_19 = FUNC_1 (VAR_22);
      break;
    case 'M':
      if (!FUNC_20(VAR_22, "firstint", 9)) {
        VAR_26 = VAR_6;
      } else if (!FUNC_20(VAR_22, "liked", 6)) {
        VAR_26 = VAR_7;
      } else {
        FUNC_22();
        return 2;
      }
      break;
    default:
      FUNC_0 (0);
      return 2;
    }
  }

  if (VAR_23 >= VAR_38 || VAR_23 + 2 < VAR_38) {
    FUNC_22();
    return 2;
  }

  if (VAR_13) {
    FUNC_23 (1, "fix member_fans, fan_members mode\n");
    char *VAR_41 = FUNC_21 (VAR_39[VAR_23], '/');
    VAR_41 = (VAR_41 == ((void*)0)) ? VAR_39[VAR_23] : (VAR_41 + 1);
    if (!FUNC_20 (VAR_41, "member_fans", 11)) {
      VAR_34 = VAR_21;
    } else if (!FUNC_20 (VAR_41, "fan_members", 11)) {
      VAR_34 = VAR_12;
    } else {
      FUNC_13 ("binlogname should starts from member_fans of fan_members when command line switch -F used.\n");
      FUNC_7 (1);
    }
  }

  if (VAR_19 >= 0) {
    if (VAR_15 > VAR_19) {
      FUNC_10 (VAR_27, "fatal: log start position %d after stop position %d\n", VAR_15, VAR_19);
      return 2;
    }
  }

  if (VAR_32 && FUNC_2 (VAR_32) < 0) {
    FUNC_10 (VAR_27, "fatal: cannot change user to %s\n", VAR_32 ? VAR_32 : "(none)");
    return 1;
  }

  if (FUNC_6 (VAR_39[VAR_23], VAR_8) < 0) {
    FUNC_10 (VAR_27, "cannot open binlog files for %s\n", VAR_8 ? VAR_8 : VAR_39[VAR_23]);
    FUNC_7 (1);
  }

  VAR_0 = FUNC_16 (VAR_11, 0);
  if (!VAR_0) {
    FUNC_10 (VAR_27, "fatal: cannot find binlog for %s, log position %lld\n", VAR_11->replica_prefix, 0LL);
    FUNC_7 (1);
  }

  VAR_8 = VAR_0->info->filename;

  if (VAR_33) {
    FUNC_10 (VAR_27, "replaying binlog file %s (size %d)\n", VAR_8, VAR_0->info->file_size);
  }

  FUNC_3();

  FUNC_12 (0, 0, 0);

  if (VAR_23 + 1 < VAR_38) {
    VAR_30 = VAR_39[VAR_23+1];
    VAR_29 = FUNC_15 (VAR_30, VAR_4 | VAR_2 | VAR_3, 0644);
    if (VAR_29 < 0) {
      FUNC_10 (VAR_27, "cannot create %s: %m\n", VAR_30);
      return 1;
    }
    VAR_31 = FUNC_14 (VAR_29, 0, VAR_5);
    VAR_28 = (VAR_31 > 0);
  } else {
    VAR_30 = "stdout";
    VAR_29 = 1;
  }

  if (VAR_15 > 0) {

    VAR_19 = 256;
    VAR_14 = 1;

    VAR_40 = FUNC_18 (0, 1);

    if (!VAR_18) {
      FUNC_10 (VAR_27, "fatal: cannot parse first LEV_START entry");
      FUNC_7 (1);
    }

    VAR_19 = VAR_16;
    VAR_14 = 0;

    FUNC_3 ();

    FUNC_5 (VAR_0, 1);
    VAR_0 = 0;

    VAR_0 = FUNC_16 (VAR_11, VAR_15);
    if (!VAR_0) {
      FUNC_10 (VAR_27, "fatal: cannot find binlog for %s, log position %d\n", VAR_11->replica_prefix, VAR_15);
      FUNC_7 (1);
    }

    VAR_8 = VAR_0->info->filename;

    if (VAR_33) {
      FUNC_10 (VAR_27, "replaying binlog file %s (size %d) from log position %d\n", VAR_8, VAR_0->info->file_size, VAR_15);
    }

    FUNC_12 (VAR_15, 0, 0);
  }

  VAR_40 = FUNC_18 (0, 1);

  if (VAR_40 < 0) {
    FUNC_10 (VAR_27, "fatal: error reading binlog\n");
    FUNC_7 (1);
  }

  if (VAR_19 >= 0 && VAR_20 != VAR_19) {
    FUNC_10 (VAR_27, "fatal: binlog read up to position %d instead of %d\n", VAR_20, VAR_19);
    FUNC_7 (1);
  }

  if (!VAR_31 && !VAR_15) {
    FUNC_23 (1, "Writing CRC32 to the end of target binlog.\n");
    struct lev_crc32 *VAR_42 = FUNC_24 (20);
    VAR_42->type = VAR_1;
    VAR_42->timestamp = VAR_17;
    VAR_42->pos = VAR_35;
    VAR_42->crc32 = ~VAR_36;
    VAR_35 += 20;
    VAR_37++;
  }

  FUNC_9 ();

  if (VAR_29 != 1) {
    if (FUNC_8 (VAR_29) < 0) {
      FUNC_10 (VAR_27, "error syncing %s: %m", VAR_30);
      FUNC_7 (1);
    }
    FUNC_4 (VAR_29);
  }

  if (VAR_33 > 0) {
    FUNC_17 ();
  }

  return 0;
}
