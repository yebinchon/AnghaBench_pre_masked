
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int,char**,int ) ;
 int FUNC_12 (char*,int ,int *,char,char*,...) ;
 int VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int VAR_12 ;
 scalar_t__ FUNC_15 (int,int ,int ,int ) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_16 () ;
 void* VAR_15 ;
 int VAR_16 ;
 int FUNC_17 () ;
 void* FUNC_18 (int *) ;
 int FUNC_19 () ;
 scalar_t__ VAR_17 ;
 char* VAR_18 ;
 int VAR_19 ;

int FUNC_20 (int VAR_20, char *VAR_21[]) {
  FUNC_2 ();
  VAR_10 = VAR_21[0];
  VAR_7 = FUNC_18 (((void*)0));

  FUNC_14 ('a');
  FUNC_14 ('B');
  FUNC_14 ('r');
  FUNC_14 (204);
  FUNC_12 ("memory-limit", VAR_12, ((void*)0), 'm', "<memory-limit> sets maximal size of used memory not including zmemory in mebibytes");
  FUNC_12 ("queue-port", VAR_12, 0, 'P', "<port> port number for communication with queue (default %d)", VAR_11);
  FUNC_12 ("lock-memory", VAR_6, ((void*)0), 'k', "lock paged memory");
  FUNC_12 ("stemmer", VAR_6, 0, 'S', "enable stemmer");

  FUNC_11 (VAR_20, VAR_21, VAR_19);
  if (VAR_20 != VAR_8) {
    FUNC_19();
    return 2;
  }

  FUNC_10();
  FUNC_3();
  if (VAR_17) {
    FUNC_17();
  }

  VAR_3 = (1 << 20);
  FUNC_9();

  if (!VAR_18 && VAR_5 == VAR_0 && FUNC_7()) {
    VAR_5 = 1000;
  }

  if (FUNC_13 (VAR_5 + 16) < 0) {
    FUNC_5 (VAR_16, "fatal: cannot raise open file limit to %d\n", VAR_5 + 16);
    FUNC_4 (1);
  }

  if (VAR_9 < VAR_1) {
    VAR_14 = FUNC_15 (VAR_9, VAR_13, VAR_2, 0);
    if (VAR_14 < 0) {
      FUNC_5 (VAR_16, "cannot open server socket at port %d: %m\n", VAR_9);
      FUNC_4 (1);
    }
  }

  FUNC_0 (((void*)0));

  if (FUNC_1 (VAR_18) < 0 && !VAR_4) {
    FUNC_5 (VAR_16, "fatal: cannot change user to %s\n", VAR_18 ? VAR_18 : "(none)");
    FUNC_4 (1);
  }

  FUNC_8();
  VAR_15 = FUNC_18 (((void*)0));

  FUNC_16();

  FUNC_6();
  return 0;
}
