
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
 int VAR_8 ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 (long long,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (char*,int ,long long) ;
 scalar_t__ VAR_11 ;
 int FUNC_7 () ;
 TYPE_2__* FUNC_8 (TYPE_3__*,long long) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (int ,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_10 () ;
 int VAR_18 ;
 int FUNC_11 (int,char*,...) ;

int FUNC_12 (int VAR_19, char *VAR_20[]) {
  int VAR_21;
  long long VAR_22 = 0;
  VAR_14 = VAR_17;
  VAR_15 = VAR_4;
  while ((VAR_21 = FUNC_4 (VAR_19, VAR_20, "tphv")) != -1) {
    switch (VAR_21) {
    case 'F':
      VAR_8 = VAR_12;
      break;
    case 'p':
      VAR_5 = 1;
      break;
    case 't':
      VAR_6 = 1;
      break;
    case 'v':
      VAR_18++;
      break;
    case 'h':
      FUNC_10();
    }
  }

  if (VAR_13 >= VAR_19) {
    FUNC_10();
  }

  if (FUNC_1 ( VAR_20[VAR_13], VAR_3) < 0) {
    FUNC_3 (VAR_16, "cannot open binlog files for %s\n", VAR_3 ? VAR_3 : VAR_20[VAR_13]);
    FUNC_2 (1);
  }

  VAR_0 = FUNC_8 (VAR_7, VAR_22);
  if (!VAR_0) {
    FUNC_6 ("fatal: cannot find binlog for %s, log position %lld\n", VAR_7->replica_prefix, VAR_22);
    FUNC_2 (1);
  }

  VAR_3 = VAR_0->info->filename;

  FUNC_11 (1, "replaying binlog file %s (size %lld)\n", VAR_3, VAR_0->info->file_size);
  VAR_1 = -FUNC_7();
  FUNC_0();
  FUNC_5 (VAR_22, VAR_10, VAR_9);
  FUNC_11 (1, "replay log events started\n");

  VAR_21 = FUNC_9 (0, 1);

  FUNC_11 (1, "replay log events finished\n");

  VAR_1 += FUNC_7();
  VAR_2 = VAR_11 - VAR_22;

  return 0;

}
