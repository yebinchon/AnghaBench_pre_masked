
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char*) ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_8 () ;
 int VAR_8 ;
 int FUNC_9 (int,char**,int ) ;
 int FUNC_10 (char*,int ,int ,float,char*) ;
 scalar_t__ VAR_9 ;
 char* VAR_10 ;
 scalar_t__ FUNC_11 (char*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int VAR_11 ;
 int FUNC_14 (int *) ;
 int FUNC_15 () ;
 char* VAR_12 ;

int FUNC_16 (int VAR_13, char *VAR_14[]) {
  FUNC_12 ();
  VAR_10 = VAR_14[0];

  FUNC_10 ("debug-udpdump", VAR_7, 0, 'U', "listen 67/68 ports and dump received packets to the log");
  FUNC_10 ("debug-filedump", VAR_7, 0, 'F', "parse packet from file (filename is given in <config> parameter) and exit");

  FUNC_9 (VAR_13, VAR_14, VAR_5);

  if (VAR_13 != VAR_8 + 1) {
    FUNC_15 ();
  }

  if (VAR_4 == VAR_0) {
    FUNC_3 ((FUNC_4 (VAR_14[VAR_8]) < 0) ? 1 : 0);
  }

  if (!VAR_9 || VAR_4 == VAR_1) {
    VAR_9 = VAR_2;
  }

  if (VAR_9 < VAR_3) {
    FUNC_8 ();
  }

  if (FUNC_11 (VAR_6 + 16) < 0) {
    FUNC_7 ("fatal: cannot raise open file limit to %d\n", VAR_6 + 16);
    FUNC_3 (1);
  }

  FUNC_0 (0);

  if (FUNC_1 (VAR_12) < 0) {
    FUNC_7 ("fatal: cannot change user to %s\n", VAR_12 ? VAR_12 : "(none)");
    FUNC_3 (1);
  }

  FUNC_5 ();
  FUNC_6 (0);

  if (FUNC_2 (VAR_14[VAR_8]) < 0) {
    FUNC_7 ("fatal: fail to load config file '%s'.\n", VAR_14[VAR_8]);
    FUNC_3 (1);
  }

  VAR_11 = FUNC_14 (((void*)0));
  FUNC_13 ();
  return 0;
}
