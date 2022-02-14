
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
struct TYPE_11__ {char* filename; scalar_t__ file_size; } ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 char* VAR_11 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_12 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 TYPE_5__* VAR_13 ;
 char* VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_7 (int) ;
 int VAR_17 ;
 int FUNC_8 (int ,char*,...) ;
 scalar_t__ FUNC_9 (TYPE_5__*,int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_12 () ;
 int FUNC_13 (scalar_t__,int ,int ) ;
 int FUNC_14 (int ,scalar_t__) ;
 scalar_t__ FUNC_15 (int ) ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_16 (TYPE_3__*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 TYPE_4__* FUNC_17 (TYPE_5__*,scalar_t__) ;
 TYPE_3__* FUNC_18 (int ) ;
 int VAR_29 ;
 int FUNC_19 (int,char**,int ) ;
 int FUNC_20 (char*,int ,int ,int,char*,...) ;
 scalar_t__ VAR_30 ;
 char* VAR_31 ;
 scalar_t__ FUNC_21 (int) ;
 int FUNC_22 (int ,int) ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 int FUNC_23 () ;
 scalar_t__ FUNC_24 (scalar_t__,int ,int ,int ) ;
 int FUNC_25 () ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 int FUNC_26 () ;
 void* VAR_37 ;
 int VAR_38 ;
 int * FUNC_27 (char*,char*) ;
 int VAR_39 ;
 void* FUNC_28 (int ) ;
 int VAR_40 ;
 scalar_t__ VAR_41 ;
 int FUNC_29 () ;
 char* VAR_42 ;
 int VAR_43 ;

int FUNC_30 (int VAR_44, char *VAR_45[]) {
  int VAR_46;




  FUNC_25 ();
  VAR_31 = VAR_45[0];

  VAR_19 = 0;
  if (FUNC_27 (VAR_31, "statsx-index") != ((void*)0)) {
    VAR_19 = 1;
  }

  VAR_6 = 1;

  FUNC_20 (0, VAR_27, 0, 'f', "=memcache_auto_answer_mode");
  FUNC_20 ("test", VAR_27, 0, 'T', "test mode");
  FUNC_20 ("no-user-id", VAR_27, 0, 'm', "ignore user id");
  FUNC_20 ("index", VAR_27, 0, 'i', "reindex");
  FUNC_20 ("high-memory", VAR_27, 0, 'M', "memory usage to reindex");
  FUNC_20 ("no-version", VAR_27, 0, 'y', "counters are valid until disabled by hands");
  FUNC_20 ("custom-version", VAR_27, 0, 'x', "use yyyymmdd as counter version. Includes [--no-version]");
  FUNC_20 ("monthly", VAR_27, 0, 'E', "enable monthly stat");
  FUNC_20 ("no-set-timezone", VAR_27, 0, 't', "ignore all set timezone events");
  FUNC_20 ("day-start-version", VAR_27, 0, 'D', "use unixtime at 0:00 as counter version");
  FUNC_20 ("counter-growth", VAR_32, 0, 'P', "counter hash table growth in percents (default %lf)", VAR_25);
  FUNC_20 ("default-timezone", VAR_32, 0, 'S', "default timezone (hours offset from GMT)");
  FUNC_20 ("cyclic-binlog", VAR_32, 0, 1000, "use binlog in cyclic mode");

  FUNC_19 (VAR_44, VAR_45, VAR_17);
  if (VAR_44 != VAR_29 + 1 && VAR_44 != VAR_29 + 2) {
    FUNC_29 ();
    return 2;
  }

  if (VAR_43 >= 3) {
    if (VAR_19) {
      FUNC_8 (VAR_38, "Starting in index mode...\n");
    }
  }





  if (FUNC_21(VAR_26 + 16) < 0 && !VAR_39) {
    FUNC_8 (VAR_38, "fatal: cannot raise open file limit to %d\n", VAR_26+16);
    FUNC_7(1);
  }

  if (VAR_30 < VAR_3) {
    VAR_36 = FUNC_24 (VAR_30, VAR_35, VAR_7, 0);
    if (VAR_36 < 0) {
      FUNC_8(VAR_38, "cannot open server socket at port %ld: %m\n", VAR_30);
      FUNC_7(1);
    }
  }

  FUNC_0 (0);

  if (FUNC_2(VAR_42) < 0 && !VAR_39) {
    FUNC_8 (VAR_38, "fatal: cannot change user to %s\n", VAR_42 ? VAR_42 : "(none)");
    FUNC_7(1);
  }

  if (VAR_2 > 0) {
  } else {
    VAR_12 = (1 << 23);
  }
  FUNC_12();
  if (VAR_41) {
    FUNC_14 (FUNC_10 (), VAR_30);
  }




  if (FUNC_6 (VAR_45[VAR_29], VAR_11) < 0) {
    FUNC_8 (VAR_38, "cannot open binlog files for %s\n", VAR_11 ? VAR_11 : VAR_45[VAR_29]);
    FUNC_7 (1);
  }


  VAR_24 = 10;
  int VAR_47;
  VAR_40 = VAR_47 = FUNC_28(0);
  VAR_40 -= VAR_47 % 86400;


  VAR_5 = FUNC_18 (VAR_15);

  if (VAR_5) {
    VAR_14 = VAR_5->info->filename;
    VAR_16 = VAR_5->info->file_size;

    if (VAR_43) {
      FUNC_8 (VAR_38, "load index file %s (size %ld)\n", VAR_14, VAR_16);
    }
  } else {
    VAR_14 = ((void*)0);
    VAR_16 = 0;
  }

  VAR_18 = -FUNC_11(VAR_1);

  VAR_46 = FUNC_16 (VAR_5);

  VAR_18 += FUNC_11(VAR_1);

  if (VAR_46 < 0) {
    FUNC_8 (VAR_38, "fatal: error %d while loading index file %s\n", VAR_46, VAR_14);
    FUNC_7 (1);
  }


  if (VAR_43) {
    FUNC_8 (VAR_38, "Reading binlog from position %ld\n", VAR_21);
  }

  if (VAR_33) {
    FUNC_1 (FUNC_15 (VAR_4) >= 0);
    if (VAR_34) {
      VAR_21 = VAR_34;
    } else {
      VAR_21 = FUNC_9 (VAR_13, 0, 0) + 36;
    }
  }

  VAR_24 = 10;
  VAR_40 = VAR_28 = FUNC_28(0);
  VAR_40 -= VAR_28 % 86400;
  VAR_0 = FUNC_17 (VAR_13, VAR_21);
  if (!VAR_0) {
    FUNC_8 (VAR_38, "fatal: cannot find binlog for %s, log position %ld\n", VAR_13->replica_prefix, VAR_21);
    FUNC_7 (1);
  }

  VAR_11 = VAR_0->info->filename;

  if (VAR_43) {
    FUNC_8 (VAR_38, "replaying binlog file %s (size %d)\n", VAR_11, VAR_0->info->file_size);
  }
  VAR_9 = FUNC_11(VAR_1);

  FUNC_3();

  FUNC_13 (VAR_21, VAR_22, VAR_20);

  VAR_46 = FUNC_22 (0, 1);

  if (VAR_46 < 0) {
    FUNC_8 (VAR_38, "fatal: error reading binlog\n");
    FUNC_7 (1);
  }

  VAR_9 = FUNC_11(VAR_1) - VAR_9;
  VAR_10 = VAR_23 - VAR_21;

  if (!VAR_8) {
    FUNC_4();
  }


  if (VAR_19) {
    if (VAR_43 >= 1) {
      FUNC_8 (VAR_38, "Saving index...\n");
    }
    if (!VAR_33) {
      FUNC_23 ();
    } else {
      FUNC_1 (0);
    }
  } else {
    FUNC_5();
    VAR_37 = FUNC_28(0);

    FUNC_26();
  }

  return 0;
}
