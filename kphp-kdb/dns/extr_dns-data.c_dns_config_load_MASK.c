
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct lev_start {int split_mod; int split_max; scalar_t__ split_min; scalar_t__ extra_bytes; int schema_id; int type; } ;
struct TYPE_10__ {int replica_prefix; } ;
struct TYPE_9__ {TYPE_1__* info; } ;
struct TYPE_8__ {int * filename; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct lev_start* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (char const*,int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (char const*,int *) ;
 TYPE_3__* VAR_12 ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (int) ;
 char const* VAR_13 ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (char*,...) ;
 scalar_t__ VAR_14 ;
 int FUNC_18 (char*,int,int) ;
 TYPE_2__* FUNC_19 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_20 (int ,int) ;
 int FUNC_21 (char*,int,char*,char const*) ;
 int FUNC_22 (int) ;
 int FUNC_23 (int,char*) ;
 int FUNC_24 (int,struct lev_start*,int) ;
 int VAR_15 ;

int FUNC_25 (const char *VAR_16, int VAR_17, const char *VAR_18) {
  if (VAR_18) {
    char VAR_19[VAR_6];
    FUNC_2 (FUNC_21 (VAR_19, VAR_6, "%s.bin", VAR_18) < VAR_6);
    int VAR_20 = FUNC_18 (VAR_19, VAR_3 | VAR_5 | VAR_4, 0660);
    if (VAR_20 < 0) {
      FUNC_17 ("open ('%s', O_CREAT | O_WRONLY | O_EXCL, 0660) failed. %m\n", VAR_19);
      FUNC_12 (1);
    }
    struct lev_start *VAR_21 = FUNC_0 (24);
    VAR_21->type = VAR_2;
    VAR_21->schema_id = VAR_1;
    VAR_21->extra_bytes = 0;
    VAR_21->split_mod = 1;
    VAR_21->split_min = 0;
    VAR_21->split_max = 1;
    FUNC_2 (FUNC_24 (VAR_20, VAR_21, 24) == 24);
    FUNC_2 (FUNC_15 (VAR_20) >= 0);
    FUNC_2 (FUNC_6 (VAR_20) >= 0);
    if (FUNC_11 (VAR_18, ((void*)0)) < 0) {
      FUNC_17 ("cannot open binlog files for %s\n", VAR_18);
      FUNC_12 (1);
    }
    VAR_0 = FUNC_19 (VAR_12, 0);
    if (!VAR_0) {
      FUNC_17 ("fatal: cannot find binlog for %s, log position %lld\n", VAR_12->replica_prefix, 0ll);
      FUNC_12 (1);
    }
    VAR_9 = VAR_0->info->filename;
    FUNC_3 ();
    FUNC_16 (0, 0, 0);
    FUNC_23 (1, "replay log events started\n");
    FUNC_2 (FUNC_20 (0, 1) >= 0);
    FUNC_23 (1, "replay log events finished\n");
    FUNC_4();
    FUNC_5 ();
    FUNC_2 (FUNC_1 (VAR_0) == VAR_14);
    VAR_11 = 1;
  }
  VAR_13 = ((void*)0);
  FUNC_10 ();
  int VAR_22 = FUNC_8 (VAR_16, VAR_17, 0);
  FUNC_9 ();
  FUNC_13 (0);
  VAR_10 = VAR_15;
  if (VAR_18) {
    if (VAR_13) {
      FUNC_17 ("ERROR: Config contains $BINLOG macro. This feature is forbidden in writing binlog mode.\n");
      return -1;
    }
    FUNC_14 ();
    FUNC_22 (2);
    FUNC_7 (VAR_0, 1);
    VAR_0 = ((void*)0);
    VAR_9 = ((void*)0);
  }

  if (VAR_13 && !VAR_7 && !VAR_8) {
    FUNC_17 ("Ignore '$BINLOG %s' macro since there isn't any '$BINLOG_ALLOW_QUERY <network addr>' macro in config.\n", VAR_13);
    VAR_13 = ((void*)0);
  }
  return VAR_22;
}
