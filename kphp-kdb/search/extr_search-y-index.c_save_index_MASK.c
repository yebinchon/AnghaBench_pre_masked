
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int replica_prefix; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (int) ;
 int * VAR_1 ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int ) ;
 char* FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 int VAR_2 ;
 int FUNC_16 (char*) ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 () ;

void FUNC_20 (void) {
  char *VAR_3 = ((void*)0);
  if (VAR_0) {
    VAR_3 = FUNC_7 (VAR_0, FUNC_9(), VAR_0->replica_prefix);
  }

  if (!VAR_3 || VAR_3[0] == '-') {
    FUNC_5 (VAR_2, "cannot write index: cannot compute its name\n");
    FUNC_4 (1);
  }

  FUNC_10 (0, VAR_3, 1);

  FUNC_13 (VAR_1[0]);
  FUNC_14 (VAR_1[0]);

  FUNC_15 ();

  FUNC_17 ();
  FUNC_19 ();
  FUNC_1 ();
  FUNC_2 ();
  FUNC_18 ();

  FUNC_0 (FUNC_6(VAR_1[0]) >= 0);
  FUNC_0 (FUNC_3 (VAR_1[0]) >= 0);

  if (FUNC_12 (VAR_3)) {
    FUNC_8 ("cannot rename new index file from %s: %m\n", VAR_3);
    FUNC_16 (VAR_3);
    FUNC_4 (1);
  }

  FUNC_11 (VAR_3);
}
