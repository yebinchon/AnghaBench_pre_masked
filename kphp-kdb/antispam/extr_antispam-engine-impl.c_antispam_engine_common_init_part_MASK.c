
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
struct TYPE_11__ {int file_size; int filename; } ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 TYPE_5__* VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,...) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (scalar_t__,int ,int ) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_4__* FUNC_11 (TYPE_5__*,scalar_t__) ;
 TYPE_3__* FUNC_12 (int ) ;
 int FUNC_13 (int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 char* FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ VAR_18 ;

void FUNC_16 (char const* VAR_19) {
  if (FUNC_5 (VAR_19, VAR_6) < 0) {
    FUNC_7 (VAR_17, "fatal: cannot preload files for binlog: '%s' and index: '%s'\n", VAR_6, VAR_19);
    FUNC_6 (1);
  }

  VAR_2 = FUNC_12 (VAR_9);

  if (VAR_2) {
    VAR_8 = FUNC_14 (VAR_2->info->filename);
    VAR_10 = VAR_2->info->file_size;


    if (VAR_18 > 0) {
      FUNC_7 (VAR_17, "load index file %s (size %d)\n", VAR_8, VAR_10);
    }
  } else {
    VAR_8 = ((void*)0);
    VAR_10 = 0;
  }

  FUNC_9 (VAR_2);
  FUNC_3 (VAR_2, 1);


  VAR_0 = FUNC_11 (VAR_7, VAR_12);
  if (!VAR_0) {
    FUNC_7 (VAR_17, "fatal: cannot find binlog for %s, log position %lld\n", VAR_7->replica_prefix, 0LL);
    FUNC_6 (1);
  }

  VAR_6 = VAR_0->info->filename;

  if (VAR_18 > 0) {
    FUNC_7 (VAR_17, "replaying binlog file %s (size %d)\n", VAR_6, VAR_0->info->file_size);
  }
  VAR_4 = FUNC_8 (VAR_1);

  FUNC_0();

  FUNC_10 (VAR_12, VAR_13, VAR_11);

  if (VAR_18 > 0) {
    FUNC_7 (VAR_17, "jump_log_pos = %ld\nreplay log events started\n", VAR_12);
  }

  int VAR_20 = FUNC_13 (0, 1);

  if (VAR_3 != 1) {
    FUNC_1();
  }

  if (VAR_20 < 0) {
    FUNC_7 (VAR_17, "fatal: error reading binlog\n");
    FUNC_6 (1);
  }
  if (VAR_18 > 0) {
    FUNC_7 (VAR_17, "replay log events finished\n");
  }

  VAR_4 = FUNC_8 (VAR_1) - VAR_4;
  VAR_5 = VAR_15 - VAR_12;

  if (VAR_18 > 0) {
    FUNC_7 (VAR_17, "replay binlog file: done, log_pos=%lld, used_z_memory=%d, time %.6lds\n",
            (long long)VAR_14, FUNC_4 (), VAR_4);
  }

  FUNC_2();

  VAR_16 = FUNC_15 (0);
}
