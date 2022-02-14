
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (void*) ;
 void* VAR_2 ;
 char* VAR_3 ;
 char* FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 () ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (void*) ;
 void* VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (char*) ;
 int VAR_12 ;
 char* VAR_13 ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_11 (int,TYPE_1__,void*,int ) ;
 int FUNC_12 () ;
 TYPE_1__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_13 () ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 void* VAR_27 ;
 scalar_t__ VAR_28 ;

int FUNC_16 (int VAR_29, char *VAR_30[]) {
  int VAR_31, VAR_32 = 0;

  FUNC_12 ();

  VAR_13 = VAR_30[0];
  while ((VAR_31 = FUNC_6 (VAR_29, VAR_30, "b:c:l:p:rs:n:dCRThu:v")) != -1) {
    switch (VAR_31) {
    case 'v':
      VAR_28++;
      break;
    case 'h':
      FUNC_15();
      return 2;
    case 'b':
      VAR_2 = FUNC_1(VAR_10);
      if (VAR_2 <= 0) {
        VAR_2 = VAR_0;
      }
      break;
    case 'c':
      VAR_7 = FUNC_1(VAR_10);
      if (VAR_7 <= 0 || VAR_7 > VAR_1) {
 VAR_7 = VAR_1;
      }
      break;
    case 'p':
      VAR_12 = FUNC_1(VAR_10);
      break;
    case 's':
      VAR_8 = FUNC_1(VAR_10);
      break;
    case 'n':
      VAR_5 = 0;
      FUNC_8 (FUNC_1 (VAR_10));
      if (VAR_5) {
        FUNC_9 ("nice");
      }
      break;
    case 'R':
      VAR_22 = VAR_23;
      VAR_20 = VAR_21;
      VAR_18 = VAR_19;
      VAR_14++;
      break;
    case 'u':
      VAR_27 = VAR_10;
      break;
    case 'l':
      VAR_6 = VAR_10;
      break;
    case 'T':
      VAR_26++;
      break;
    case 'C':
      VAR_32 = 1;
      break;
    case 'r':
      VAR_15++;
      break;
    case 'd':
      VAR_4 ^= 1;
    }
  }
  if (VAR_29 != VAR_11 + 1) {
    FUNC_15();
    return 2;
  }

  FUNC_7 ();

  VAR_3 = VAR_30[VAR_11];

  VAR_31 = FUNC_3 (0);

  if (VAR_31 < 0) {
    FUNC_5 (VAR_25, "config check failed!\n");
    return -VAR_31;
  }

  if (VAR_28 > 0) {
    FUNC_5 (VAR_25, "config loaded!\n");
  }

  if (VAR_32) {
    return 0;
  }

  FUNC_0 (0);

  if (FUNC_10(VAR_7 + 16) < 0 && !VAR_26) {
    FUNC_5 (VAR_25, "fatal: cannot raise open file limit to %ld\n", VAR_7+16);
    FUNC_4(1);
  }

  VAR_17 = FUNC_11 (VAR_12, VAR_16, VAR_2, 0);
  if (VAR_17 < 0) {
    FUNC_5(VAR_25, "cannot open server socket at port %d: %m\n", VAR_12);
    FUNC_4(1);
  }
  if (VAR_28) {
    FUNC_5 (VAR_25, "created listening socket at %s:%d, fd=%ld\n", FUNC_2(VAR_16.s_addr, 0), VAR_12, VAR_17);
  }

  if (VAR_8) {
    VAR_9 = FUNC_11 (VAR_8, VAR_16, VAR_2, 0);
    if (VAR_9 < 0) {
      FUNC_5(VAR_25, "cannot open memcache server socket at port %d: %m\n", VAR_8);
      FUNC_4(1);
    }
    if (VAR_28) {
      FUNC_5 (VAR_25, "created memcache listening socket at %s:%d, fd=%ld\n", FUNC_2(VAR_16.s_addr, 0), VAR_8, VAR_9);
    }
  }

  VAR_24 = FUNC_14(0);

  FUNC_13();

  return 0;
}
