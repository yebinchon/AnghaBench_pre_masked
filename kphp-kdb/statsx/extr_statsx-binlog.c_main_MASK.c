
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
struct TYPE_13__ {TYPE_2__* info; } ;
struct TYPE_12__ {TYPE_1__* info; } ;
struct TYPE_11__ {char* filename; int file_size; } ;
struct TYPE_10__ {char* filename; scalar_t__ file_size; } ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 () ;
 int VAR_7 ;
 int FUNC_1 () ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 TYPE_5__* VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 (scalar_t__,int ,int ) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_8 (TYPE_3__*) ;
 int VAR_18 ;
 int FUNC_9 () ;
 TYPE_4__* FUNC_10 (TYPE_5__*,scalar_t__) ;
 TYPE_3__* FUNC_11 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_12 (int ,int) ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_13 (int ,char*,int*) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_14 () ;
 int VAR_27 ;
 int FUNC_15 (int,char*,...) ;

int FUNC_16 (int VAR_28, char *VAR_29[]) {
  int VAR_30 = 0;
  int VAR_31;
  VAR_21 = VAR_26;
  VAR_22 = VAR_8;
  while ((VAR_31 = FUNC_6 (VAR_28, VAR_29, "c:hvlS:T:ui")) != -1) {
    switch (VAR_31) {
    case 'i':
      VAR_30 = 1;
      break;
    case 'S':
      if (1 == FUNC_13(VAR_19, "%d", &VAR_31)) {
        VAR_24 = VAR_31;
      }
      break;
    case 'T':
      if (1 == FUNC_13(VAR_19, "%d", &VAR_31)) {
        VAR_10 = VAR_31;
      }
      break;
    case 'c':
      if (1 == FUNC_13(VAR_19, "%d", &VAR_31)) {
        VAR_7 = VAR_31;
      }
      break;
    case 'v':
      VAR_27++;
      break;
    case 'h':
      FUNC_14();
      return 2;
    case 'l':
      VAR_22 = VAR_9;
      break;
    case 'u':
      VAR_22 = VAR_3;
      break;
    }
  }

  if (VAR_20 >= VAR_28) {
    FUNC_14();
    return 2;
  }

  if (FUNC_2 ( VAR_29[VAR_20], VAR_6) < 0) {
    FUNC_4 (VAR_25, "cannot open binlog files for %s\n", VAR_6 ? VAR_6 : VAR_29[VAR_20]);
    FUNC_3 (1);
  }

  if (VAR_30) {
    FUNC_15 (1, "Use index\n");

    VAR_2 = FUNC_11 (VAR_13);

    if (VAR_2) {
      VAR_12 = VAR_2->info->filename;
      VAR_14 = VAR_2->info->file_size;
      FUNC_15 (1, "load index file %s (size %lld)\n", VAR_12, VAR_14);
    } else {
      VAR_12 = ((void*)0);
      VAR_14 = 0;
    }

    VAR_23 = -FUNC_5(VAR_1);
    VAR_31 = FUNC_8 (VAR_2);
    VAR_23 += FUNC_5(VAR_1);
    if (VAR_31 < 0) {
      FUNC_4 (VAR_25, "fatal: error %d while loading index file %s\n", VAR_31, VAR_12);
      FUNC_3 (1);
    }
  }


  if (VAR_27>=3){
    FUNC_4 (VAR_25, "engine_preload_filelist done\n");
  }
  FUNC_15 (3, "jump_log_pos = %lld\n", VAR_16);
  VAR_0 = FUNC_10 (VAR_11, VAR_16);
  if (!VAR_0) {
    FUNC_4 (VAR_25, "fatal: cannot find binlog for %s, log position %ld\n", VAR_11->replica_prefix, VAR_16);
    FUNC_3 (1);
  }

  VAR_6 = VAR_0->info->filename;

  if (VAR_27) {
    FUNC_4 (VAR_25, "replaying binlog file %s (size %d)\n", VAR_6, VAR_0->info->file_size);
  }
  VAR_4 = -FUNC_9();
  FUNC_0();
  FUNC_7 (VAR_16, VAR_17, VAR_15);
  if (VAR_27) {
    FUNC_4 (VAR_25, "replay log events started\n");
  }

  VAR_31 = FUNC_12 (0, 1);

  if (VAR_27) {
    FUNC_4 (VAR_25, "replay log events finished\n");
  }

  VAR_4 += FUNC_9();
  VAR_5 = VAR_18 - VAR_16;

  if (VAR_22 == VAR_3 || VAR_22 == VAR_9) {
    FUNC_1 ();
  }

  return 0;
}
