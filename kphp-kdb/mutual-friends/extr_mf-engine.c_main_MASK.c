
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int) ;
 int* VAR_12 ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 () ;
 scalar_t__* VAR_13 ;
 scalar_t__ FUNC_9 () ;
 int VAR_14 ;
 int VAR_15 ;
 char* VAR_16 ;
 int FUNC_10 (char*) ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_13 (int *) ;
 int VAR_21 ;
 int FUNC_14 (int,int ,int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 char* VAR_25 ;
 char* VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 int FUNC_17 (int,char*,int) ;
 int VAR_29 ;
 int FUNC_18 (int,char**,int ) ;
 int FUNC_19 (char*,int ,int *,char,char*) ;
 int VAR_30 ;
 char* VAR_31 ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int ,int) ;
 int VAR_32 ;
 int FUNC_23 (char*) ;
 scalar_t__ FUNC_24 (int,int ,int ,int ) ;
 int FUNC_25 () ;
 int FUNC_26 (int,scalar_t__) ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 int FUNC_27 (char*,char*,char*,char*) ;
 int FUNC_28 () ;
 void* VAR_35 ;
 char* VAR_36 ;
 int VAR_37 ;
 int FUNC_29 (char*) ;
 int * FUNC_30 (char*,char*) ;
 int * VAR_38 ;
 void* FUNC_31 (int *) ;
 int FUNC_32 () ;
 char* VAR_39 ;
 scalar_t__ VAR_40 ;

int FUNC_33 (int VAR_41, char *VAR_42[]) {
  int VAR_43;

  FUNC_25 ();
  VAR_31 = VAR_42[0];
  VAR_28 = FUNC_31 (((void*)0));

  VAR_15 = 0;
  if (FUNC_30 (VAR_31, "mf-index") != ((void*)0)) {
    VAR_15 = 1;
  }
  VAR_6 = 0;

  FUNC_21 ('B');
  FUNC_21 (204);
  FUNC_19 ("memory-limit", VAR_32, ((void*)0), 'm', "<memory-limit> sets maximal size of used memory not including zmemory in mebibytes");
  FUNC_19 ("suggestions-file-name", VAR_32, ((void*)0), 's', "<suggestions-file-name> name of file with precalculated suggestions");
  FUNC_19 ("new-index-name", VAR_32, ((void*)0), 'w', "<new-index-name> new name for index");
  FUNC_19 ("disable-crc32", VAR_27, ((void*)0), 'D', "sets disable_crc32 to 3");
  FUNC_19 ("generate-dump", VAR_27, ((void*)0), 'e', "generate dump to use in mf-merge-files");
  if (!VAR_15) {
    FUNC_19 ("index-mode", VAR_27, ((void*)0), 'i', "run in index mode");
  }
  FUNC_19 ("lock-memory", VAR_27, ((void*)0), 'k', "lock paged memory");

  FUNC_18 (VAR_41, VAR_42, VAR_24);
  if (VAR_41 != VAR_29 + 1) {
    FUNC_32();
    return 2;
  }

  FUNC_12 (5);

  if (VAR_40 > 0) {
    FUNC_7 (VAR_37, "index_mode = %d\n", VAR_15);
  }

  VAR_11 = (1 << 16);

  FUNC_11();

  if (!VAR_39 && VAR_23 == VAR_0 && FUNC_9()) {
    VAR_23 = 1000;
  }

  VAR_16 = VAR_42[VAR_29];

  VAR_14 = -FUNC_16();
  FUNC_10 (VAR_16);
  VAR_14 += FUNC_16();

  if (FUNC_20 (VAR_23 + 16) < 0) {
    FUNC_7 (VAR_37, "fatal: cannot raise open file limit to %d\n", VAR_23+16);
    FUNC_6 (1);
  }

  if (!VAR_15) {
    VAR_34 = FUNC_24 (VAR_30, VAR_33, VAR_1, 0);
    if (VAR_34 < 0) {
      FUNC_7 (VAR_37, "cannot open server socket at port %d: %m\n", VAR_30);
      FUNC_6 (1);
    }
  }

  FUNC_0 (((void*)0));

  if (FUNC_1 (VAR_39) < 0 && !VAR_17) {
    FUNC_7 (VAR_37, "fatal: cannot change user to %s\n", VAR_39 ? VAR_39 : "(none)");
    FUNC_6 (1);
  }

  if (!VAR_7) {
    VAR_7 = ".bin";
  }

  if (!VAR_26) {
    VAR_26 = ".tmp";
  }

  if (VAR_7[0] == '.' && VAR_29 < VAR_41 && FUNC_29 (VAR_7) + FUNC_29 (VAR_42[VAR_29]) < 250) {
    FUNC_27 (VAR_3, "%s%s", VAR_42[VAR_29], VAR_7);
    VAR_7 = VAR_3;
  }

  if (VAR_26[0] == '.' && VAR_29 < VAR_41 && FUNC_29 (VAR_26) + FUNC_29 (VAR_42[VAR_29]) < 250) {
    FUNC_27 (VAR_25, "%s%s", VAR_42[VAR_29], VAR_26);
    VAR_26 = VAR_25;
  }

  if (VAR_40 > 0) {
    FUNC_7 (VAR_37, "opening binlog file %s\n", VAR_7);
  }
  FUNC_17 (2, VAR_7, -1);
  if (VAR_40 > 0) {
    FUNC_7 (VAR_37, "binlog file %s opened %ld %d\n", VAR_7, VAR_13[2], VAR_12[2]);
  }

  VAR_22 = 3;

  if (VAR_13[2] && VAR_12[2] >= 0) {
    if (VAR_40) {
      FUNC_7 (VAR_37, "replaying binlog file %s (size %ld)\n", VAR_7, VAR_13[2]);
    }
    VAR_4 = FUNC_16();

    FUNC_2();
    FUNC_26 (VAR_12[2], VAR_13[2]);

    if (VAR_19) {
      if (VAR_40) {
        FUNC_7 (VAR_37, "log seek (jump_log_pos = %d, jump_log_ts = %d, jump_log_crc32 = %u)\n",
                VAR_19, VAR_20, VAR_18);
      }

      FUNC_14 (VAR_19, VAR_20, VAR_18);
    }

    if (VAR_40) {
      FUNC_7 (VAR_37, "replay log events started\n");
    }

    VAR_43 = FUNC_22 (0, 1);

    if (VAR_40) {
      FUNC_7 (VAR_37, "replay log events finished\n");
    }

    VAR_4 = FUNC_16() - VAR_4;
    VAR_5 = VAR_13[2];

    if (VAR_43 < 0) {
      FUNC_7 (VAR_37, "fatal: error reading binlog\n");
      FUNC_6 (1);
    }

    if (VAR_40) {
      FUNC_7 (VAR_37, "replay binlog file: done, pos=%d, alloc_mem=%ld out of %ld, time %.6ds\n",
         VAR_21, (long) (VAR_8 - VAR_9), (long) (VAR_10 - VAR_9), VAR_4);
    }

    if (VAR_15) {
      FUNC_23 (VAR_26);

      if (VAR_40) {
        int VAR_44 = FUNC_15();
        VAR_36[VAR_44] = 0;
        FUNC_7 (VAR_37, "%s\n", VAR_36);
      }

      FUNC_8();
      return 0;
    }

    if (!VAR_2) {
      FUNC_3();
      FUNC_5 (VAR_12[2]);
      VAR_12[2] = -1;
    }
  }

  VAR_6 = 1;


  FUNC_4();
  VAR_35 = FUNC_31 (((void*)0));

  if (VAR_38 != ((void*)0)) {
    FUNC_13 (VAR_38);
  }

  FUNC_28();

  FUNC_8();
  return 0;
}
