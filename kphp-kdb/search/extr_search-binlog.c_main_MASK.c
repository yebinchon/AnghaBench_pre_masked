
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
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 TYPE_3__* VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 (long long,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 () ;
 TYPE_2__* FUNC_7 (TYPE_3__*,long long) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_9 () ;
 int VAR_16 ;

int FUNC_10 (int VAR_17, char *VAR_18[]) {
  int VAR_19;
  long long VAR_20 = 0;
  VAR_12 = VAR_15;
  VAR_13 = VAR_5;
  while ((VAR_19 = FUNC_4 (VAR_17, VAR_18, "tphv")) != -1) {
    switch (VAR_19) {
    case 'p':
      VAR_4 = 1;
      break;
    case 't':
      VAR_6 = 1;
      break;
    case 'v':
      VAR_16++;
      break;
    case 'h':
      FUNC_9();
      return 2;
    }
  }

  if (VAR_11 >= VAR_17) {
    FUNC_9();
    return 2;
  }

  if (FUNC_1 ( VAR_18[VAR_11], VAR_3) < 0) {
    FUNC_3 (VAR_14, "cannot open binlog files for %s\n", VAR_3 ? VAR_3 : VAR_18[VAR_11]);
    FUNC_2 (1);
  }

  if (VAR_16>=3){
    FUNC_3 (VAR_14, "engine_preload_filelist done\n");
  }

  VAR_0 = FUNC_7 (VAR_7, VAR_20);
  if (!VAR_0) {
    FUNC_3 (VAR_14, "fatal: cannot find binlog for %s, log position %lld\n", VAR_7->replica_prefix, VAR_20);
    FUNC_2 (1);
  }

  VAR_3 = VAR_0->info->filename;

  if (VAR_16) {
    FUNC_3 (VAR_14, "replaying binlog file %s (size %d)\n", VAR_3, VAR_0->info->file_size);
  }
  VAR_1 = -FUNC_6();
  FUNC_0();
  FUNC_5 (VAR_20, VAR_9, VAR_8);
  if (VAR_16) {
    FUNC_3 (VAR_14, "replay log events started\n");
  }

  VAR_19 = FUNC_8 (0, 1);

  if (VAR_16) {
    FUNC_3 (VAR_14, "replay log events finished\n");
  }

  VAR_1 += FUNC_6();
  VAR_2 = VAR_10 - VAR_20;

  return 0;

}
