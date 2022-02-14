
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
 int FUNC_5 () ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (int ) ;
 char* FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 () ;
 char* VAR_2 ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (char*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;
 int VAR_3 ;
 int FUNC_17 (char*) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 () ;

void FUNC_21 (void) {
  if (VAR_0) {
    VAR_2 = FUNC_8 (VAR_0, FUNC_10(), VAR_0->replica_prefix);
  }

  if (!VAR_2 || VAR_2[0] == '-') {
    FUNC_6 (VAR_3, "cannot write index: cannot compute its name\n");
    FUNC_4 (1);
  }

  FUNC_11 (0, VAR_2, 1);

  FUNC_14 (VAR_1[0]);
  FUNC_15 (VAR_1[0]);

  FUNC_16 ();

  FUNC_18 ();
  FUNC_20 ();
  FUNC_1 ();
  FUNC_2 ();
  FUNC_19 ();

  FUNC_5 ();

  FUNC_0 (FUNC_7(VAR_1[0]) >= 0);
  FUNC_0 (FUNC_3 (VAR_1[0]) >= 0);

  if (FUNC_13 (VAR_2)) {
    FUNC_9 ("cannot rename new index file from %s: %m\n", VAR_2);
    FUNC_17 (VAR_2);
    FUNC_4 (1);
  }

  FUNC_12 (VAR_2);
}
