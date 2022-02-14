
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (void*) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int,char**,char*) ;
 void* VAR_5 ;
 int FUNC_5 () ;
 void* VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (void*) ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (char*) ;
 void* VAR_11 ;
 char* VAR_12 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 void* VAR_17 ;
 int VAR_18 ;

int FUNC_13 (int VAR_19, char *VAR_20[]) {
  int VAR_21;

  FUNC_9 (FUNC_11 (0));

  VAR_12 = VAR_20[0];
  while ((VAR_21 = FUNC_4 (VAR_19, VAR_20, "a:b:c:l:m:n:p:t:u:Tdhv")) != -1) {
    switch (VAR_21) {
    case 'v':
      VAR_18++;
      break;
    case 'h':
      FUNC_12();
      return 2;
    case 'b':
      VAR_2 = FUNC_1(VAR_9);
      if (VAR_2 <= 0) {
        VAR_2 = VAR_0;
      }
      break;
    case 'c':
      VAR_8 = FUNC_1(VAR_9);
      if (VAR_8 <= 0 || VAR_8 > VAR_1) {
 VAR_8 = VAR_1;
      }
      break;
    case 'n':
      VAR_4 = 0;
      FUNC_6 (FUNC_1 (VAR_9));
      if (VAR_4) {
        FUNC_7 ("nice");
      }
      break;
    case 'u':
      VAR_17 = VAR_9;
      break;
    case 'l':
      VAR_6 = VAR_9;
      break;
    case 'T':
      VAR_16 = 1;
      break;
    case 't':
      VAR_5 = VAR_9;
      break;
    case 'p':
      VAR_11 = FUNC_1 (VAR_9);
      break;
    case 'm':
      VAR_7 = FUNC_1 (VAR_9);
      FUNC_0 (VAR_7 > 0);
      break;
    case 'a':
      VAR_15 = VAR_9;
      break;
    case 'd':
      VAR_3 ^= 1;
    }
  }
  if (VAR_19 != VAR_10) {
    FUNC_12();
    return 2;
  }

  if (!VAR_15) {
    FUNC_3 (VAR_14, "fatal: supply a suffix with -a switch\n");
    FUNC_2 (1);
  }


  FUNC_5 ();

  if (FUNC_8 (VAR_8 + 16) < 0 && !VAR_16) {
    FUNC_3 (VAR_14, "fatal: cannot raise open file limit to %ld\n", VAR_8+16);
    FUNC_2 (1);
  }

  VAR_13 = FUNC_11(0);

  FUNC_10();

  return 0;
}
