
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* port; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 () ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 char* VAR_9 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 void* VAR_10 ;
 int FUNC_10 () ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (char*,void*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 void* VAR_13 ;
 int VAR_14 ;

int FUNC_14 (int VAR_15, char *VAR_16[]) {
  int VAR_17;

  FUNC_9 ();

  char VAR_18[256];
  int VAR_19 = 0;
  VAR_9 = VAR_16[0];
  char VAR_20[256];
  while ((VAR_17 = FUNC_5 (VAR_15, VAR_16, "vdc:E:p:N:hu:l:S:M:")) != -1) {
    switch (VAR_17) {
    case 'v':
      VAR_14++;
      break;
    case 'c':
      VAR_4 = FUNC_2(VAR_6);
      if (VAR_4 <= 0 || VAR_4 > VAR_0) {
        VAR_4 = VAR_0;
      }
      break;
    case 'E':
      FUNC_11 (VAR_18, VAR_6, 255);
      VAR_19 = 1;
      break;
    case 'N':
      FUNC_11 (VAR_20, VAR_6, 255);
      break;
    case 'p':
      VAR_8 = FUNC_2(VAR_6);
      break;
    case 'u':
      VAR_13 = VAR_6;
      break;
    case 'l':
      VAR_3 = VAR_6;
      break;
    case 'S':
      VAR_10 = FUNC_1(VAR_6);
      break;
    case 'M':
      VAR_5 = FUNC_1(VAR_6);
      break;
    case 'h':
      FUNC_13 ();
      FUNC_3 (1);
      break;
    case 'd':
      VAR_2 ^= 1;
    }
  }
  if (VAR_15 != VAR_7) {
    FUNC_13();
    return 2;
  }

  if (FUNC_7(VAR_4 + 16) < 0) {
    FUNC_4 (VAR_12, "fatal: cannot raise open file limit to %ld\n", VAR_4+16);
    FUNC_3(1);
  }
  FUNC_6();

  FUNC_8 (VAR_20);
  VAR_1.port = VAR_8;


  if (!VAR_19) {
    FUNC_0 (0);
  } else {
    FUNC_0 (VAR_18);
  }

  VAR_11 = FUNC_12(0);

  FUNC_10();

  return 0;
}
