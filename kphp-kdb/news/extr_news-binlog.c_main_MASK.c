
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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 () ;
 TYPE_2__* FUNC_7 (TYPE_3__*,long long) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_8 (int ,int) ;
 int VAR_16 ;
 int FUNC_9 (int ,char*,int*,int*) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_10 () ;
 int VAR_19 ;

int FUNC_11 (int VAR_20, char *VAR_21[]) {
  int VAR_22, VAR_23, VAR_24;
  long long VAR_25 = 0;
  VAR_15 = VAR_18;
  VAR_16 = VAR_5;
  while ((VAR_22 = FUNC_4 (VAR_20, VAR_21, "tphvT:")) != -1) {
    switch (VAR_22) {
    case 'p':
      VAR_4 = 1;
      break;
    case 't':
      VAR_6 = 1;
      break;
    case 'v':
      VAR_19++;
      break;
    case 'h':
      FUNC_10();
      return 2;
    case 'T':
      if (2 == FUNC_9(VAR_13, "%d,%d", &VAR_23, &VAR_24)) {
        VAR_12 = VAR_23;
        VAR_11 = VAR_24;
      }
      break;
    }
  }

  if (VAR_14 >= VAR_20) {
    FUNC_10();
    return 2;
  }

  if (FUNC_1 ( VAR_21[VAR_14], VAR_3) < 0) {
    FUNC_3 (VAR_17, "cannot open binlog files for %s\n", VAR_3 ? VAR_3 : VAR_21[VAR_14]);
    FUNC_2 (1);
  }

  if (VAR_19>=3){
    FUNC_3 (VAR_17, "engine_preload_filelist done\n");
  }

  VAR_0 = FUNC_7 (VAR_7, VAR_25);
  if (!VAR_0) {
    FUNC_3 (VAR_17, "fatal: cannot find binlog for %s, log position %lld\n", VAR_7->replica_prefix, VAR_25);
    FUNC_2 (1);
  }

  VAR_3 = VAR_0->info->filename;

  if (VAR_19) {
    FUNC_3 (VAR_17, "replaying binlog file %s (size %d)\n", VAR_3, VAR_0->info->file_size);
  }
  VAR_1 = -FUNC_6();
  FUNC_0();
  FUNC_5 (VAR_25, VAR_9, VAR_8);
  if (VAR_19) {
    FUNC_3 (VAR_17, "replay log events started\n");
  }

  VAR_22 = FUNC_8 (0, 1);

  if (VAR_19) {
    FUNC_3 (VAR_17, "replay log events finished\n");
  }

  VAR_1 += FUNC_6();
  VAR_2 = VAR_10 - VAR_25;

  return 0;

}
