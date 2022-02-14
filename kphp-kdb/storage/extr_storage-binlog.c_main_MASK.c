
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* Binlog; } ;
typedef TYPE_2__ volume_t ;
typedef int V ;
struct TYPE_12__ {int replica_prefix; } ;
struct TYPE_11__ {TYPE_1__* info; } ;
struct TYPE_9__ {char* filename; int file_size; } ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 TYPE_4__* VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char**,char*) ;
 int VAR_5 ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 () ;
 TYPE_3__* FUNC_7 (TYPE_4__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 () ;
 int VAR_10 ;
 int FUNC_9 (int,char*,...) ;

int FUNC_10 (int VAR_11, char *VAR_12[]) {
  int VAR_13;
  VAR_7 = VAR_9;
  while ((VAR_13 = FUNC_3 (VAR_11, VAR_12, "tphuv")) != -1) {
    switch (VAR_13) {
    case 'p':
      VAR_3 = 1;
      break;
    case 'u':
      VAR_8 = 1;
      break;
    case 'v':
      VAR_10++;
      break;
    case 'h':
      FUNC_8();
      return 2;
    }
  }

  if (VAR_6 >= VAR_11) {
    FUNC_8();
    return 2;
  }

  volume_t VAR_14;
  FUNC_5 (&VAR_14, 0, sizeof (VAR_14));

  if (FUNC_1 ( VAR_12[VAR_6], VAR_2) < 0) {
    FUNC_4 ("cannot open binlog files for %s\n", VAR_2 ? VAR_2 : VAR_12[VAR_6]);
    FUNC_2 (1);
  }

  FUNC_9 (3, "engine_preload_filelist done\n");
  VAR_0 = VAR_14.Binlog = FUNC_7 (VAR_4, VAR_5);
  if (!VAR_14.Binlog) {
    FUNC_4 ("fatal: cannot find binlog for %s, log position %lld\n", VAR_4->replica_prefix, VAR_5);
    FUNC_2 (1);
  }

  VAR_2 = VAR_14.Binlog->info->filename;

  FUNC_9 (1, "replaying binlog file %s (size %lld)\n", VAR_2, VAR_0->info->file_size);
  VAR_1 = -FUNC_6();

  FUNC_0 (&VAR_14, 0);

  FUNC_9 (1, "replay log events finished\n");

  VAR_1 += FUNC_6();

  return 0;
}
