
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 char* VAR_4 ;
 int FUNC_8 (char*,char*) ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (char*) ;
 int VAR_8 ;
 char* VAR_9 ;
 int FUNC_10 (int,char**,int ) ;
 int FUNC_11 (char*,int ,int ,char,char*,...) ;
 char* VAR_10 ;
 char* VAR_11 ;
 scalar_t__ FUNC_12 (char*) ;
 int FUNC_13 (char) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_14 () ;
 char* VAR_14 ;
 int FUNC_15 () ;
 int VAR_15 ;
 int FUNC_16 (int *) ;
 int FUNC_17 () ;
 char* VAR_16 ;
 scalar_t__ VAR_17 ;

int FUNC_18 (int VAR_18, char *VAR_19[]) {
  FUNC_14 ();
  VAR_11 = VAR_19[0];

  FUNC_13 ('r');
  FUNC_13 ('a');
  FUNC_13 ('B');

  FUNC_11 ("server-port-range", VAR_12, 0, 'R', "sets server port's range. Default range is '%d-%d'. Every UDP connection use one port.", VAR_7, VAR_5);
  FUNC_11 ("client-blksize", VAR_12, 0, 'B', "sets packet block size");
  FUNC_11 ("client-timeout", VAR_12, 0, 'T', "sets timeout in seconds");
  FUNC_11 ("stats-port", VAR_12, 0, 'P', "sets port for getting stats using memcache queries");
  FUNC_10 (VAR_18, VAR_19, VAR_3);

  if (VAR_18 == VAR_8 + 1) {
    VAR_17 = VAR_1;
    VAR_14 = VAR_19[VAR_8];
  } else if (VAR_18 == VAR_8 + 2) {
    VAR_4 = VAR_19[VAR_8];
    VAR_9 = VAR_19[VAR_8+1];
    FUNC_3 ();
    VAR_17 = VAR_0;
  } else {
    FUNC_17 ();
  }

  FUNC_6 ();

  if (!VAR_10) {
    VAR_10 = VAR_2;
  }

  if (VAR_17 == VAR_1) {
    VAR_13 = FUNC_9 (VAR_10);
    if (VAR_13 < 0) {
      FUNC_8 ("Fail to open UDP server socket on the port %d.\n", VAR_10);
      FUNC_4 (1);
    }
  }

  if (FUNC_12 (VAR_6 + 16) < 0) {
    FUNC_8 ("fatal: cannot raise open file limit to %d\n", VAR_6 + 16);
    FUNC_4 (1);
  }

  FUNC_0 (0);

  if (FUNC_1 (VAR_16) < 0) {
    FUNC_8 ("fatal: cannot change user to %s\n", VAR_16 ? VAR_16 : "(none)");
    FUNC_4 (1);
  }

  FUNC_5 ();
  if (VAR_17 == VAR_1) {
    if (FUNC_2 () < 0) {
      FUNC_4 (1);
    }
  }
  FUNC_7 (0);
  VAR_15 = FUNC_16 (((void*)0));
  FUNC_15 ();
  return 0;
}
