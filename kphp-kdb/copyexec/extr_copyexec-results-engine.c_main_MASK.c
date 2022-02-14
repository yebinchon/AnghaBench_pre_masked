
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


 void* VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (void*) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 char* VAR_7 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 TYPE_3__* VAR_9 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,char**,char*) ;
 int FUNC_10 () ;
 int FUNC_11 (scalar_t__,int ,int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_12 (char*,...) ;
 scalar_t__ VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_13 () ;
 TYPE_2__* FUNC_14 (TYPE_3__*,scalar_t__) ;
 void* VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 char* VAR_20 ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 () ;
 int FUNC_18 (void*,char*,int*) ;
 int FUNC_19 () ;
 int VAR_21 ;
 int FUNC_20 (int ) ;
 int FUNC_21 () ;
 char* VAR_22 ;
 int VAR_23 ;
 int FUNC_22 (int,char*,...) ;

int FUNC_23 (int VAR_24, char *VAR_25[]) {
  int VAR_26;
  char VAR_27 = 0;
  FUNC_17 ();

  VAR_20 = VAR_25[0];
  while ((VAR_26 = FUNC_9 (VAR_24, VAR_25, "a:b:c:l:p:dhu:vEM:")) != -1) {
    switch (VAR_26) {
    case 'E':
      VAR_27 = 1;
      break;
    case 'M':
      if (FUNC_18 (VAR_17, "%d", &VAR_26) != 1 || VAR_26 < 1) {
        FUNC_12 ("invalid -M arg: %s", VAR_17);
        FUNC_21 ();
      }
      VAR_15 = VAR_26;
      break;
    case 'a':
      VAR_7 = VAR_17;
      break;
    case 'b':
      VAR_3 = FUNC_1 (VAR_17);
      if (VAR_3 <= 0) VAR_3 = VAR_0;
      break;
    case 'c':
      VAR_16 = FUNC_1 (VAR_17);
      if (VAR_16 <= 0 || VAR_16 > VAR_2) {
 VAR_16 = VAR_2;
      }
      break;
    case 'd':
      VAR_8 ^= 1;
      break;
    case 'h':
      FUNC_21 ();
      break;
    case 'l':
      VAR_14 = VAR_17;
      break;
    case 'p':
      VAR_19 = FUNC_1(VAR_17);
      break;
    case 'u':
      VAR_22 = VAR_17;
      break;
    case 'v':
      VAR_23++;
      break;
    }
  }

  if (VAR_24 != VAR_18 + 1) {
    FUNC_21 ();
  }

  if (FUNC_15 (VAR_16 + 16) < 0) {
    FUNC_12 ("fatal: cannot raise open file limit to %d\n", VAR_16+16);
    FUNC_8 (1);
  }

  FUNC_0 (0);

  if (FUNC_2 (VAR_22) < 0) {
    FUNC_12 ("fatal: cannot change user to %s\n", VAR_22 ? VAR_22 : "(none)");
    FUNC_8 (1);
  }

  if (VAR_27) {
    FUNC_6 (VAR_25[VAR_18]);
    FUNC_8 (0);
  }

  FUNC_10 ();

  if (FUNC_7 (VAR_25[VAR_18], VAR_7) < 0) {
    FUNC_12 ("cannot open binlog files for %s\n", VAR_7 ? VAR_7 : VAR_25[VAR_18]);
    FUNC_8 (1);
  }

  FUNC_22 (3, "engine_preload_filelist done\n");


  VAR_1 = FUNC_14 (VAR_9, VAR_11);
  if (!VAR_1) {
    FUNC_12 ("fatal: cannot find binlog for %s, log position %lld\n", VAR_9->replica_prefix, VAR_11);
    FUNC_8 (1);
  }
  VAR_7 = VAR_1->info->filename;
  FUNC_22 (1, "replaying binlog file %s (size %lld) from position %lld\n", VAR_7, VAR_1->info->file_size, VAR_11);
  VAR_5 = -FUNC_13();
  FUNC_3 ();
  FUNC_11 (VAR_11, VAR_12, VAR_10);
  FUNC_22 (1, "replay log events started\n");
  VAR_26 = FUNC_16 (0, 1);
  FUNC_22 (1, "replay log events finished\n");
  if (VAR_26 < 0) {
    FUNC_12 ("fatal: error reading binlog\n");
    FUNC_8 (1);
  }
  VAR_5 += FUNC_13();
  VAR_6 = VAR_13 - VAR_11;
  if (!VAR_4) {
    FUNC_4();
  }
  FUNC_5 ();
  VAR_21 = FUNC_20 (0);

  FUNC_19 ();

  return 0;
}
