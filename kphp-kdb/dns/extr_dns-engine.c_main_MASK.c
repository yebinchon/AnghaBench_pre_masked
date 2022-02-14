
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int replica_prefix; } ;
struct TYPE_7__ {TYPE_1__* info; } ;
struct TYPE_6__ {int filename; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 char* VAR_5 ;
 scalar_t__ FUNC_4 (char*,int,int *) ;
 int FUNC_5 () ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (int ,int *) ;
 TYPE_3__* VAR_7 ;
 int FUNC_7 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (char*,char*,...) ;
 scalar_t__ VAR_12 ;
 int FUNC_12 () ;
 int VAR_13 ;
 TYPE_2__* FUNC_13 (TYPE_3__*,int ) ;
 int FUNC_14 () ;
 size_t VAR_14 ;
 int * VAR_15 ;
 int FUNC_15 (int,char**,int ) ;
 int FUNC_16 (char*,int ,int ,char,char*) ;
 scalar_t__ VAR_16 ;
 char* VAR_17 ;
 scalar_t__ FUNC_17 (scalar_t__) ;
 int FUNC_18 (int) ;
 scalar_t__ FUNC_19 (int ,int) ;
 int VAR_18 ;
 int FUNC_20 () ;
 int FUNC_21 (int ) ;
 int FUNC_22 () ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_23 (int *) ;
 int FUNC_24 () ;
 char* VAR_21 ;
 int FUNC_25 (int,char*) ;

int FUNC_26 (int VAR_22, char *VAR_23[]) {
  FUNC_20 ();
  VAR_17 = VAR_23[0];

  FUNC_18 ('r');
  FUNC_18 ('B');
  FUNC_18 (203);
  FUNC_16 ("workers", VAR_18, 0, 'M', "sets number of additional worker processes");
  FUNC_16 ("max-response-records", VAR_18, 0, 'R', "limits max records number in the response");
  FUNC_16 ("stats-port", VAR_18, 0, 'P', "sets port for getting stats using memcache queries");
  FUNC_16 ("output", VAR_18, 0, 'E', "sets exported binlog name for converting config to binlog");
  FUNC_16 ("keep-going", VAR_13, 0, 'k', "reports as much config errors as possible");
  FUNC_15 (VAR_22, VAR_23, VAR_8);

  if (VAR_15) {
    VAR_16 = VAR_20 = 0;
  }
  if (!VAR_16 && VAR_15 == ((void*)0)) {
    FUNC_24 ();
  }
  VAR_5 = VAR_23[VAR_14];

  if (VAR_16 > 0 && VAR_16 < VAR_1) {
    FUNC_14 ();
  }

  if (FUNC_17 (VAR_12 + 16) < 0) {
    FUNC_11 ("fatal: cannot raise open file limit to %d\n", VAR_12 + 16);
    FUNC_7 (1);
  }

  if (FUNC_0 (VAR_21) < 0) {
    FUNC_11 ("fatal: cannot change user to %s\n", VAR_21 ? VAR_21 : "(none)");
    FUNC_7 (1);
  }

  FUNC_21 (FUNC_23 (0));
  VAR_6 = 64 << 20;
  FUNC_8 ();
  FUNC_5 ();

  if (FUNC_4 (VAR_5, !VAR_11, VAR_15) < 0) {
    FUNC_7 (1);
  }
  if (VAR_15) {
    FUNC_7 (0);
  }
  if (VAR_9) {
    VAR_3 = -FUNC_12 ();
    VAR_2 = 1;
    if (FUNC_6 (VAR_9, ((void*)0)) < 0) {
      FUNC_11 ("cannot open binlog files for %s\n", VAR_9);
      FUNC_7 (1);
    }
    VAR_0 = FUNC_13 (VAR_7, VAR_10);
    if (!VAR_0) {
      FUNC_11 ("fatal: cannot find binlog for %s, log position %lld\n", VAR_7->replica_prefix, VAR_10);
      FUNC_7 (1);
    }
    VAR_4 = VAR_0->info->filename;
    FUNC_1 ();
    FUNC_9 (VAR_10, 0, 0);
    FUNC_25 (1, "replay log events started\n");
    if (FUNC_19 (0, 1) < 0) {
      FUNC_7 (1);
    }
    FUNC_25 (1, "replay log events finished\n");
    VAR_3 += FUNC_12 ();
    if (!VAR_2) {
      FUNC_2 ();
    }
    FUNC_3 ();
  }
  FUNC_10 (0);
  VAR_19 = FUNC_23 (((void*)0));
  FUNC_22 ();
  return 0;
}
