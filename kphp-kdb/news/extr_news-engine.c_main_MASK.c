
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {char* replica_prefix; } ;
struct TYPE_13__ {long long offset; TYPE_2__* info; } ;
struct TYPE_12__ {TYPE_1__* info; } ;
struct TYPE_11__ {char* filename; int log_pos; int file_size; } ;
struct TYPE_10__ {char* filename; scalar_t__ file_size; } ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 TYPE_5__* VAR_14 ;
 char* VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_6 (int) ;
 int VAR_18 ;
 int FUNC_7 (int ,char*,...) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (long long,int ,int ) ;
 int VAR_21 ;
 long long VAR_22 ;
 int VAR_23 ;
 void* VAR_24 ;
 int FUNC_10 (TYPE_3__*) ;
 long long VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_11 (char*,char*,int) ;
 void* VAR_28 ;
 int FUNC_12 () ;
 int VAR_29 ;
 int VAR_30 ;
 TYPE_4__* FUNC_13 (TYPE_5__*,long long) ;
 TYPE_3__* FUNC_14 (int ) ;
 int VAR_31 ;
 int FUNC_15 (int,char**,int ) ;
 int FUNC_16 (char*,int ,int ,char,char*,...) ;
 int FUNC_17 (char*) ;
 char* VAR_32 ;
 scalar_t__ VAR_33 ;
 int FUNC_18 (int ,int) ;
 int VAR_34 ;
 int FUNC_19 (int ) ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 void* VAR_35 ;
 int VAR_36 ;
 int FUNC_22 (char*) ;
 void* FUNC_23 (int ) ;
 scalar_t__ FUNC_24 (char*,long long) ;
 int FUNC_25 () ;
 scalar_t__ VAR_37 ;

int FUNC_26 (int VAR_38, char *VAR_39[]) {
  int VAR_40;
  FUNC_20 ();
  VAR_32 = VAR_39[0];

  FUNC_16 ("days", VAR_34, 0, 't', "Number of days to keep news (default %d)", VAR_4);
  FUNC_16 ("index", VAR_30, 0, 'i', "reindex");
  FUNC_16 ("metafiles-memory", VAR_34, 0, 'C', "memory for metafiles cache (default %lld)", (long long)VAR_3);
  FUNC_16 ("check-index", VAR_30, 0, 'L', "check index mode");
  FUNC_16 ("regenerate-index", VAR_30, 0, 'R', "regenerate index mode");

  FUNC_15 (VAR_38, VAR_39, VAR_18);
  if (VAR_38 != VAR_31 + 1 && VAR_38 != VAR_31 + 2) {
    FUNC_25();
    return 2;
  }

  if (VAR_33) {
    VAR_13 = 0;
  }

  if (FUNC_22 (VAR_39[0]) >= 5 && FUNC_11 ( VAR_39[0] + FUNC_22 (VAR_39[0]) - 5, "index" , 5) == 0) {
    VAR_20++;
  }

  FUNC_4 (&VAR_29, VAR_6, VAR_20);

  if (FUNC_5 (VAR_39[VAR_31], VAR_12) < 0) {
    FUNC_7 (VAR_36, "cannot open binlog files for %s\n", VAR_12 ? VAR_12 : VAR_39[VAR_31]);
    FUNC_6 (1);
  }

  VAR_26 = 0;


  VAR_5 = FUNC_14 (VAR_16);

  if (VAR_5) {
    VAR_15 = VAR_5->info->filename;
    VAR_17 = VAR_5->info->file_size;

    if (VAR_37) {
      FUNC_7 (VAR_36, "load index file %s (size %ld)\n", VAR_15, VAR_17);
    }
  } else {
    VAR_15 = ((void*)0);
    VAR_17 = 0;
  }

  VAR_19 = -FUNC_12();

  VAR_40 = FUNC_10 (VAR_5);

  VAR_19 += FUNC_12();

  if (VAR_40 < 0) {
    FUNC_7 (VAR_36, "fatal: error %d while loading index file %s\n", VAR_40, VAR_15);
    FUNC_6 (1);
  }



  if (VAR_37) {
    FUNC_7 (VAR_36, "load index: done, jump_log_pos=%lld, time %.6ds\n",
       VAR_22, VAR_19);
  }


  VAR_0 = FUNC_13 (VAR_14, VAR_22);
  if (!VAR_0) {
    FUNC_7 (VAR_36, "fatal: cannot find binlog for %s, log position %lld\n", VAR_14->replica_prefix, VAR_22);
    FUNC_6 (1);
  }
  VAR_12 = VAR_0->info->filename;

  FUNC_8 (0, VAR_20 ? VAR_2 : VAR_1);
  FUNC_3 (VAR_14->replica_prefix);

  if (VAR_37) {
    FUNC_7 (VAR_36, "replaying binlog file %s (size %d) from position %lld (crc32=%u, ts=%d)\n", VAR_12, VAR_0->info->file_size, VAR_22, VAR_21, VAR_23);
  }

  VAR_9 = -FUNC_12();

  FUNC_0();

  FUNC_9 (VAR_22, VAR_23, VAR_21);

  if (VAR_37) { FUNC_7 (VAR_36, "replay log events started\n");}

  VAR_28 = FUNC_23(0) - (VAR_27 + 1) * 86400;
  VAR_40 = FUNC_18 (0, 1);
  if (VAR_37) { FUNC_7 (VAR_36, "replay log events finished\n");}

  VAR_9 += FUNC_12();
  VAR_10 = VAR_25 - VAR_22;

  if (!VAR_8) {
    FUNC_1();
  }

  if (VAR_40 == -2) {
    long long VAR_41 = VAR_25 - VAR_0->info->log_pos + VAR_0->offset;
    FUNC_7 (VAR_36, "REPAIR: truncating %s at log position %lld (file position %lld)\n", VAR_0->info->filename, VAR_25, VAR_41);
    if (FUNC_24 (VAR_0->info->filename, VAR_41) < 0) {
      FUNC_17 ("truncate()");
      FUNC_6 (2);
    }
  } else if (VAR_40 < 0) {
    FUNC_7 (VAR_36, "fatal: error reading binlog\n");
    FUNC_6 (1);
  }
  VAR_11 = 1;
  VAR_7 = 5;







  FUNC_2();
  VAR_24 = VAR_35 = FUNC_23(0);
  VAR_13 = 0;

  if (VAR_20) {
    FUNC_19 (0);
  } else {
    FUNC_21 ();
  }

  return 0;
}
