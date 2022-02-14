
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int replica_prefix; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (char*) ;
 int VAR_3 ;

int FUNC_9 (void) {
  char *VAR_4 = ((void*)0);

  if (FUNC_3 () == VAR_2) {
    FUNC_2 ("skipping generation of new snapshot (snapshot for this position already exists)\n");
    return 0;
  }

  if (VAR_1) {
    VAR_4 = FUNC_1 (VAR_1, FUNC_3(), VAR_1->replica_prefix);
  }

  if (!VAR_4 || VAR_4[0] == '-') {
    FUNC_2 ("cannot write index: cannot compute its name\n");
    FUNC_0 (1);
  }
  int VAR_5 = FUNC_6 ();
  if (VAR_5 < 0) {
    FUNC_2 ("save_binlogpos returns error code %d.\n", VAR_5);
    FUNC_0 (1);
  }
  VAR_5 = FUNC_7 (VAR_4, VAR_3, VAR_0);
  if (VAR_5 < 0) {
    FUNC_2 ("tar_pack (%s, %s, %d) return error code %d.\n", VAR_4, VAR_3, VAR_0, VAR_5);
    FUNC_0 (1);
  }

  if (FUNC_5 (VAR_4)) {
    FUNC_2 ("cannot rename new index file from %s: %m\n", VAR_4);
    FUNC_8 (VAR_4);
    FUNC_0 (1);
  }

  FUNC_4 (VAR_4);

  VAR_2 = FUNC_3 ();
  return 0;
}
