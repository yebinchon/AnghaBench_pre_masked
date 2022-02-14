
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {char* replica_prefix; } ;
struct TYPE_14__ {TYPE_2__* info; } ;
struct TYPE_13__ {TYPE_1__* info; } ;
struct TYPE_12__ {char* filename; int file_size; } ;
struct TYPE_11__ {scalar_t__ file_size; int filename; } ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_3__* VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 TYPE_5__* VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_9 (int) ;
 int VAR_17 ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int ,scalar_t__) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_17 (TYPE_3__*) ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ FUNC_18 (char*,char*,int) ;
 int VAR_25 ;
 TYPE_4__* FUNC_19 (TYPE_5__*,int ) ;
 TYPE_3__* FUNC_20 (int ) ;
 int VAR_26 ;
 int FUNC_21 (int,char**,int ) ;
 int FUNC_22 (char*,int ,int*,char,char*) ;
 scalar_t__ VAR_27 ;
 char* VAR_28 ;
 scalar_t__ FUNC_23 (int) ;
 int FUNC_24 (int ,int) ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_25 (int ) ;
 scalar_t__ FUNC_26 (scalar_t__,int ,int ,int ) ;
 int FUNC_27 () ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int FUNC_28 (int ,int ) ;
 int VAR_33 ;
 int FUNC_29 () ;
 int VAR_34 ;
 int VAR_35 ;
 char* FUNC_30 (int ) ;
 int FUNC_31 (char*) ;
 int VAR_36 ;
 int FUNC_32 (int ) ;
 scalar_t__ VAR_37 ;
 int FUNC_33 () ;
 char* VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;

int FUNC_34 (int VAR_41, char *VAR_42[]) {
  int VAR_43;

  FUNC_28 (VAR_5, VAR_33);
  FUNC_27 ();

  FUNC_22 ("test-mode", VAR_25, 0, 'T', "test mode");
  FUNC_22 ("ignore-delete-user", VAR_29, 0, 'I', 0);
  FUNC_22 ("dump-lists", VAR_29, 0, 'W', "argument rem,mod. Dumps lists with specified rem mod mod");
  FUNC_22 ("reverse", VAR_25, 0, 'A', "reverse friends mode");
  FUNC_22 ("index", VAR_25, &VAR_19, 'i', "index mode");
  FUNC_22 (0, VAR_29, 0, 'H', "heap size");

  VAR_28 = VAR_42[0];
  FUNC_21 (VAR_41, VAR_42, VAR_17);
  if (VAR_41 != VAR_26 + 1 && VAR_41 != VAR_26 + 2) {
    FUNC_33();
    return 2;
  }

  if (VAR_9 > 1 || VAR_30) {
    VAR_9 = 1;
  }

  if (FUNC_31 (VAR_42[0]) >= 5 && FUNC_18 ( VAR_42[0] + FUNC_31 (VAR_42[0]) - 5, "index" , 5) == 0) {
    VAR_19 = 1;
  }

  if (!VAR_40 && FUNC_23(VAR_24 + 16) < 0 && !VAR_36) {
    FUNC_10 (VAR_35, "fatal: cannot raise open file limit to %d\n", VAR_24+16);
    FUNC_9(1);
  }

  if (!VAR_40 && VAR_27 < VAR_4) {
    VAR_32 = FUNC_26 (VAR_27, VAR_31, VAR_8, 0);
    if (VAR_32 < 0) {
      FUNC_10(VAR_35, "cannot open server socket at port %ld: %m\n", VAR_27);
      FUNC_9(1);
    }
  }

  FUNC_0 (VAR_7);

  if (VAR_40) {
    VAR_9 = 1;
  }

  if (FUNC_1(VAR_38) < 0) {
    FUNC_10 (VAR_35, "fatal: cannot change user to %s\n", VAR_38 ? VAR_38 : "(none)");
    FUNC_9(1);
  }

  FUNC_14();
  if (VAR_37) {
    FUNC_16 (FUNC_11 (), VAR_27);
  }

  if (FUNC_8 (VAR_42[VAR_26], VAR_12) < 0) {
    FUNC_10 (VAR_35, "cannot open binlog files for %s\n", VAR_12 ? VAR_12 : VAR_42[VAR_26]);
    FUNC_9 (1);
  }

  FUNC_13 (0, VAR_19 ? VAR_2 : VAR_1);
  FUNC_6 (VAR_13->replica_prefix);

  VAR_6 = FUNC_20 (VAR_15);

  if (VAR_6) {
    VAR_14 = FUNC_30 (VAR_6->info->filename);
    VAR_16 = VAR_6->info->file_size;

    if (VAR_39) {
      FUNC_10 (VAR_35, "load index file %s (size %ld)\n", VAR_14, VAR_16);
    }
  } else {
    VAR_14 = ((void*)0);
    VAR_16 = 0;
  }

  VAR_18 = -FUNC_12(VAR_3);

  VAR_43 = FUNC_17 (VAR_6);

  VAR_18 += FUNC_12(VAR_3);

  if (VAR_43 < 0) {
    FUNC_10 (VAR_35, "fatal: error %d while loading index file %s\n", VAR_43, VAR_14);
    FUNC_9 (1);
  }

  if (VAR_39) {
    FUNC_10 (VAR_35, "load index: done, jump_log_pos=%d, time %.6ds\n",
       VAR_21, VAR_18);
  }

  FUNC_5 (VAR_6, 1);

  VAR_0 = FUNC_19 (VAR_13, VAR_21);
  if (!VAR_0) {
    FUNC_10 (VAR_35, "fatal: cannot find binlog for %s, log position %lld\n", VAR_13->replica_prefix, 0LL);
    FUNC_9 (1);
  }

  VAR_12 = VAR_0->info->filename;

  if (VAR_39) {
    FUNC_10 (VAR_35, "replaying binlog file %s (size %d)\n", VAR_12, VAR_0->info->file_size);
  }
  VAR_10 = FUNC_12(VAR_3);

  FUNC_2();

  FUNC_15 (VAR_21, VAR_22, VAR_20);

  VAR_43 = FUNC_24 (0, 1);

  if (VAR_43 < 0) {
    FUNC_10 (VAR_35, "fatal: error reading binlog\n");
    FUNC_9 (1);
  }

  VAR_10 = FUNC_12(VAR_3) - VAR_10;
  VAR_11 = VAR_23;
  if (VAR_9 != 1) {
    FUNC_3();
  }

  FUNC_4();
  VAR_34 = FUNC_32(0);

  if (VAR_40) {
    FUNC_7 (VAR_36);
    return 0;
  }

  if (VAR_19) {
    FUNC_25 (0);
  } else {
    FUNC_29();
  }
  return 0;
}
