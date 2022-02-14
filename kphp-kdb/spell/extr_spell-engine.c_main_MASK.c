
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (void*) ;
 void* VAR_2 ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (char*,char*) ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (char*,int ,void*,int ) ;
 int FUNC_12 () ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_15 (int ) ;
 void* VAR_15 ;
 int VAR_16 ;
 char* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

int FUNC_16 (int VAR_20, char *VAR_21[]) {
  int VAR_22;




  FUNC_12 ();

  VAR_8 = VAR_21[0];
  while ((VAR_22 = FUNC_6 (VAR_20, VAR_21, "b:c:l:p:U:dhu:vSty")) != -1) {
    switch (VAR_22) {
    case 'y':
      VAR_19 = 1;
    break;
    case 't':
      VAR_14 = 1;
    break;
    case 'S':
      VAR_16 = 1;
    break;
    case 'v':
      VAR_18++;
      break;
    case 'h':
      FUNC_7 ();
      return 2;
    case 'b':
      VAR_2 = FUNC_2 (VAR_6);
      if (VAR_2 <= 0) {
        VAR_2 = VAR_0;
      }
      break;
    case 'c':
      VAR_5 = FUNC_2 (VAR_6);
      if (VAR_5 <= 0 || VAR_5 > VAR_1) {
        VAR_5 = VAR_1;
      }
      break;
    case 'p':
      VAR_7 = FUNC_2 (VAR_6);
      break;
    case 'U':
      VAR_15 = FUNC_2 (VAR_6);
      break;
    case 'u':
      VAR_17 = VAR_6;
      break;
    case 'l':
      VAR_4 = VAR_6;
      break;
    case 'd':
      VAR_3 ^= 1;
      break;
    }
  }



  if (FUNC_10 (VAR_5 + 16) < 0) {
    FUNC_5 (VAR_13, "fatal: cannot raise open file limit to %ld\n", VAR_5 + 16);
    FUNC_4 (1);
  }

  VAR_10 = FUNC_11 (VAR_7, VAR_9, VAR_2, 0);
  if (VAR_10 < 0) {
    FUNC_9 ("cannot open server socket at port %d: %m\n", VAR_7);
    FUNC_4 (1);
  }

  FUNC_0 (0);

  if (FUNC_3 (VAR_17) < 0) {
    FUNC_9 ("fatal: cannot change user to %s\n", VAR_17 ? VAR_17 : "(none)");
    FUNC_4 (1);
  }

  FUNC_8 ();

  VAR_12 = FUNC_15 (0);
  FUNC_13 ();
  FUNC_1 (VAR_11);

  FUNC_14 ();
  return 0;
}
