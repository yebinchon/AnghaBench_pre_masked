
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int replica_prefix; } ;
struct TYPE_7__ {TYPE_1__* info; } ;
struct TYPE_6__ {char* filename; int file_size; } ;


 TYPE_2__* VAR_0 ;
 void* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 TYPE_3__* VAR_8 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 (long long,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 (char*,char*,...) ;
 scalar_t__ VAR_11 ;
 int FUNC_9 () ;
 TYPE_2__* FUNC_10 (TYPE_3__*,long long) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (int ,int) ;
 void* VAR_15 ;
 int VAR_16 ;
 int FUNC_12 () ;
 int VAR_17 ;
 int FUNC_13 (int,char*,...) ;

int FUNC_14 (int VAR_18, char *VAR_19[]) {
  int VAR_20;
  long long VAR_21 = 0;
  VAR_14 = VAR_16;
  while ((VAR_20 = FUNC_6 (VAR_18, VAR_19, "tphvCS:T:")) != -1) {
    switch (VAR_20) {
    case 'C':
      VAR_6 = 1;
      break;
    case 'S':
      VAR_15 = FUNC_0 (VAR_12);
      break;
    case 'T':
      VAR_7 = FUNC_0 (VAR_12);
      break;
    case 'p':
      VAR_4 = 1;
      break;
    case 't':
      VAR_5 = 1;
      break;
    case 'v':
      VAR_17++;
      break;
    case 'h':
      FUNC_12 ();
    }
  }

  if (VAR_13 >= VAR_18) {
    FUNC_12 ();
  }

  if (FUNC_2 (VAR_19[VAR_13], VAR_3) < 0) {
    FUNC_8 ("cannot open binlog files for %s\n", VAR_3 ? VAR_3 : VAR_19[VAR_13]);
    FUNC_3 (1);
  }

  FUNC_13 (3, "engine_preload_filelist done\n");

  VAR_0 = FUNC_10 (VAR_8, VAR_21);
  if (!VAR_0) {
    FUNC_8 ("fatal: cannot find binlog for %s, log position %lld\n", VAR_8->replica_prefix, VAR_21);
    FUNC_3 (1);
  }

  VAR_3 = VAR_0->info->filename;

  FUNC_13 (1, "replaying binlog file %s (size %lld)\n", VAR_3, VAR_0->info->file_size);

  VAR_1 = -FUNC_9();
  FUNC_1();
  FUNC_7 (VAR_21, VAR_10, VAR_9);
  FUNC_13 (1, "replay log events started\n");

  VAR_20 = FUNC_11 (0, 1);

  FUNC_5 (VAR_14);
  FUNC_4 (VAR_14);

  FUNC_13 (1, "replay log events finished\n");

  VAR_1 += FUNC_9();
  VAR_2 = VAR_11 - VAR_21;

  return 0;
}
