
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (void*) ;
 void* VAR_4 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int,char**,char*) ;
 char* VAR_7 ;
 int FUNC_7 () ;
 int VAR_8 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 () ;
 void* VAR_9 ;
 int VAR_10 ;
 long long VAR_11 ;
 long long VAR_12 ;
 int VAR_13 ;
 long long VAR_14 ;
 int VAR_15 ;
 long long VAR_16 ;
 scalar_t__ FUNC_10 (int) ;
 void* VAR_17 ;
 int VAR_18 ;
 char* VAR_19 ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 () ;
 long long VAR_20 ;
 scalar_t__ FUNC_13 (int,int ,void*,int ) ;
 int FUNC_14 () ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_15 (void*,char*,long long*,char*) ;
 int FUNC_16 () ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_17 (int ) ;
 int FUNC_18 () ;
 char* VAR_25 ;
 int VAR_26 ;
 int FUNC_19 (int,char*) ;

int FUNC_20 (int VAR_27, char *VAR_28[]) {
  int VAR_29, VAR_30;
  long long VAR_31;
  char VAR_32;

  FUNC_14 ();
  VAR_19 = VAR_28[0];
  while ((VAR_29 = FUNC_6 (VAR_27, VAR_28, "A:H:M:N:P:R:T:b:c:g:l:n:p:dhu:v")) != -1) {
    switch (VAR_29) {
     case 'A':
     case 'H':
     case 'M':
     case 'R':
       VAR_32 = 0;
       FUNC_1 (FUNC_15 (VAR_17, "%lld%c", &VAR_31, &VAR_32) >= 1);
       switch (VAR_32 | 0x20) {
         case 'k': VAR_31 <<= 10; break;
         case 'm': VAR_31 <<= 20; break;
         case 'g': VAR_31 <<= 30; break;
         case 't': VAR_31 <<= 40; break;
         default: FUNC_1 (VAR_32 == 0x20);
       }
       if (VAR_29 == 'A' && VAR_31 >= (1 << 20) && VAR_31 <= (1 << 30)) {
         VAR_12 = VAR_31;
       }
       if (VAR_29 == 'H' && VAR_31 >= (1LL << 20) && VAR_31 <= VAR_14) {
         VAR_11 = VAR_31;
       }
       if (VAR_29 == 'M' && VAR_31 >= (128LL << 20) && VAR_31 <= VAR_14) {
         VAR_16 = VAR_31;
       }
       if (VAR_29 == 'R' && VAR_31 >= (64LL << 20) && VAR_31 <= VAR_20) {
         VAR_20 = VAR_31;
       }
       break;
    case 'N':
      VAR_8 = FUNC_2 (VAR_17);
      break;
    case 'P':
      VAR_30 = FUNC_2 (VAR_17);
      if (VAR_30 >= 1 && VAR_30 <= VAR_1) {
        VAR_13 = VAR_30;
      }
      break;
    case 'T':
      VAR_30 = FUNC_2 (VAR_17);
      if (VAR_30 >= 1 && VAR_30 <= VAR_3) {
        VAR_24 = VAR_30;
      }
      break;
    case 'v':
      VAR_26++;
      break;
    case 'g':
      VAR_7 = VAR_17;
      break;
    case 'h':
      FUNC_18 ();
      return 2;
    case 'b':
      VAR_4 = FUNC_2 (VAR_17);
      if (VAR_4 <= 0) {
        VAR_4 = VAR_0;
      }
      break;
    case 'c':
      VAR_15 = FUNC_2 (VAR_17);
      if (VAR_15 <= 0 || VAR_15 > VAR_2) {
        VAR_15 = VAR_2;
      }
      break;
    case 'n':
      VAR_10 = FUNC_2 (VAR_17);
      break;
    case 'p':
      VAR_18 = FUNC_2 (VAR_17);
      break;
    case 'u':
      VAR_25 = VAR_17;
      break;
    case 'l':
      VAR_9 = VAR_17;
      break;
    case 'd':
      VAR_5 ^= 1;
      break;
    }
  }

  if (VAR_13) {
    FUNC_9 ();
  } else {
    FUNC_8 ("max-child-process-number isn't stricly positive\n");
    FUNC_18 ();
  }

  if (VAR_8 < VAR_10) {
    FUNC_8 ("Job process nice is smaller than main process nice.\nSee man 2 nice: Only the super user may specify a negative increment, or priority increase.\n");
    FUNC_18 ();
  }

  if (VAR_10 < -20 || VAR_10 > 19) {
    FUNC_8 ("Main process nice should be in the range -20 to 19.\n");
    FUNC_4 (1);
  }

  if (VAR_8 < -20 || VAR_8 > 19) {
    FUNC_8 ("Job process nice should be in the range -20 to 19.\n");
    FUNC_4 (1);
  }

  if (FUNC_10 (VAR_10) < 0) {
    FUNC_8 ("nice (%d) fail. %m\n", VAR_10);
    FUNC_4 (1);
  }

  FUNC_19 (3, "Command line parsed\n");

  if (!VAR_25 && VAR_15 == VAR_2 && FUNC_5 ()) {
    VAR_15 = 1000;
  }

  VAR_6 = 1 << 22;

  if (FUNC_11 (VAR_15 + 16) < 0) {
    FUNC_8 ("fatal: cannot raise open file limit to %d\n", VAR_15 + 16);
    FUNC_4 (1);
  }

  FUNC_0 (0);

  if (FUNC_3 (VAR_25, VAR_7) < 0) {
    FUNC_8 ("fatal: cannot change user to %s, group to %s\n", VAR_25 ? VAR_25 : "(none)", VAR_7 ? VAR_7 : "(none)");
    FUNC_4 (1);
  }

  FUNC_7();

  VAR_22 = FUNC_13 (VAR_18, VAR_21, VAR_4, 0);
  if (VAR_22 < 0) {
    FUNC_8 ("cannot open server socket at port %d: %m\n", VAR_18);
    FUNC_4 (1);
  }

  FUNC_12 ();
  VAR_23 = FUNC_17(0);

  FUNC_16 ();
  return 0;
}
