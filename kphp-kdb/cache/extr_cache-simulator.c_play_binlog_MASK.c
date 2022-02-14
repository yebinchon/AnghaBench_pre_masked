
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int replica_prefix; } ;
struct TYPE_8__ {TYPE_1__* info; } ;
struct TYPE_7__ {int file_size; int filename; } ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int) ;
 TYPE_3__* VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (char*,int ,scalar_t__) ;
 int VAR_8 ;
 int FUNC_7 () ;
 scalar_t__ VAR_9 ;
 TYPE_2__* FUNC_8 (TYPE_3__*,scalar_t__) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int,char*,...) ;

void FUNC_11 (const char *const VAR_10) {
  static int VAR_11 = 0;
  int VAR_12;
  VAR_11++;
  FUNC_10 (1, "Start %d%s replaying binlog step (%s)\n", VAR_11, FUNC_3 (VAR_11), VAR_10);
  VAR_9 = 0;

  VAR_0 = FUNC_8 (VAR_4, VAR_6);
  if (!VAR_0) {
    FUNC_6 ("fatal: cannot find binlog for %s, log position %lld\n", VAR_4->replica_prefix, VAR_6);
    FUNC_4 (1);
  }

  VAR_3 = VAR_0->info->filename;

  FUNC_10 (1, "replaying binlog file %s (size %lld) from position %lld\n", VAR_3, VAR_0->info->file_size, VAR_6);
  VAR_1 = -FUNC_7();

  FUNC_0 ();

  FUNC_5 (VAR_6, VAR_7, VAR_5);

  FUNC_10 (1, "replay log events started\n");
  VAR_12 = FUNC_9 (0, 1);
  FUNC_10 (1, "replay log events finished\n");

  VAR_1 += FUNC_7();
  VAR_2 = VAR_8 - VAR_6;

  FUNC_1 ();
  FUNC_2 (VAR_0, 1);

}
