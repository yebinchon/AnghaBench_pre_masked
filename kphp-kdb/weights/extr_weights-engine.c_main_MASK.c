
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int replica_prefix; } ;
struct TYPE_12__ {TYPE_2__* info; } ;
struct TYPE_11__ {TYPE_1__* info; } ;
struct TYPE_10__ {char* filename; int file_size; } ;
struct TYPE_9__ {scalar_t__ file_size; int filename; } ;


 TYPE_4__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 TYPE_5__* VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_16 ;
 TYPE_4__* FUNC_10 (TYPE_5__*,int ) ;
 TYPE_3__* FUNC_11 (int ) ;
 int VAR_17 ;
 int FUNC_12 (int,char**,int ) ;
 int FUNC_13 (char*,int ,int ,unsigned char,char*) ;
 char* VAR_18 ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int VAR_19 ;
 int * FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 () ;
 int FUNC_22 (int,char*,...) ;
 int VAR_20 ;

int FUNC_23 (int VAR_21, char *VAR_22[]) {
  int VAR_23;
  FUNC_17 ();
  FUNC_13 ("index", VAR_16, 0, 'i', "reindex");
  FUNC_14 (201);
  FUNC_13 ("udp", VAR_16, 0, 'U', "enables udp message support");
  FUNC_12 (VAR_21, VAR_22, VAR_10);

  VAR_18 = VAR_22[0];

  if (VAR_21 != VAR_17 + 1) {
    FUNC_21();
    return 2;
  }

  FUNC_3 (&VAR_20, VAR_2, VAR_12);

  if (FUNC_4 (VAR_22[VAR_17], VAR_5) < 0) {
    FUNC_7 ("cannot open binlog files for %s\n", VAR_5 ? VAR_5 : VAR_22[VAR_17]);
    FUNC_5 (1);
  }

  FUNC_22 (3, "engine_preload_filelist done\n");


  VAR_1 = FUNC_11 (VAR_8);

  if (VAR_1) {
    VAR_7 = FUNC_19 (VAR_1->info->filename);
    VAR_9 = VAR_1->info->file_size;
    FUNC_22 (1, "load index file %s (size %lld)\n", VAR_7, VAR_9);

    VAR_11 = -FUNC_9();

    VAR_23 = FUNC_8 ();

    if (VAR_23 < 0) {
      FUNC_7 ("load_index returned fail code %d.\n", VAR_23);
      FUNC_5 (1);
    }
    VAR_11 += FUNC_9();
  } else {
    VAR_7 = ((void*)0);
    VAR_9 = 0;
    VAR_11 = 0;
  }


  VAR_0 = FUNC_10 (VAR_6, VAR_14);
  if (!VAR_0) {
    FUNC_7 ("fatal: cannot find binlog for %s, log position %lld\n", VAR_6->replica_prefix, VAR_14);
    FUNC_5 (1);
  }

  VAR_5 = VAR_0->info->filename;

  FUNC_22 (1, "replaying binlog file %s (size %lld) from position %lld\n", VAR_5, VAR_0->info->file_size, VAR_14);

  VAR_4 = -FUNC_9();

  FUNC_0 ();

  FUNC_6 (VAR_14, VAR_15, VAR_13);

  FUNC_22 (1, "replay log events started\n");
  VAR_23 = FUNC_15 (0, 1);
  FUNC_22 (1, "replay log events finished\n");

  VAR_4 += FUNC_9();

  if (!VAR_3) {
    FUNC_1();
  }

  if (VAR_23 < 0) {
    FUNC_7 ("fatal: error reading binlog\n");
    FUNC_5 (1);
  }

  FUNC_2 ();
  VAR_19 = FUNC_20 (0);

  if (VAR_12) {
    FUNC_16 (0);
  } else {
    FUNC_18 ();
  }

  return 0;
}
