
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (void*) ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 (char*) ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 void* VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int,int,char*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (void*,char*,long long*,char*) ;
 int FUNC_8 () ;
 int VAR_13 ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 void* VAR_14 ;
 int VAR_15 ;

int FUNC_11 (int VAR_16, char *VAR_17[]) {
  char VAR_18;
  long long VAR_19;
  int VAR_20, VAR_21 = 2048, VAR_22 = 0;

  FUNC_6 ();
  VAR_4 = 1;

  VAR_11 = VAR_17[0];
  while ((VAR_20 = FUNC_3 (VAR_16, VAR_17, "N:b:c:dhl:p:s:u:v")) != -1) {
    switch (VAR_20) {
    case 'N':
      VAR_21 = FUNC_1 (VAR_7);
      break;
    case 'b':
      VAR_3 = FUNC_1 (VAR_7);
      if (VAR_3 <= 0) {
        VAR_3 = VAR_0;
      }
      break;
    case 'c':
      VAR_6 = FUNC_1 (VAR_7);
      if (VAR_6 <= 0 || VAR_6 > VAR_1) {
        VAR_6 = VAR_1;
      }
      break;
    case 'd':
      VAR_4 ^= 1;
      break;
    case 'h':
      FUNC_10 ();
      break;
    case 'l':
      VAR_5 = VAR_7;
      break;
    case 'v':
      VAR_15++;
      break;
    case 'p':
      VAR_10 = FUNC_1 (VAR_7);
      break;
    case 's':
       VAR_18 = 0;
       FUNC_0 (FUNC_7 (VAR_7, "%lld%c", &VAR_19, &VAR_18) >= 1);
       switch (VAR_18 | 0x20) {
         case 'k': VAR_19 <<= 10; break;
         case 'm': VAR_19 <<= 20; break;
         case 'g': VAR_19 <<= 30; break;
         case 't': VAR_19 <<= 40; break;
         default: FUNC_0 (VAR_18 == 0x20);
       }
       if (VAR_19 >= 1024 && VAR_19 < (1LL << 30)) {
         VAR_22 = VAR_19;
       }
      break;
    case 'u':
      VAR_14 = VAR_7;
      break;
    }
  }

  if (VAR_8 + 1 != VAR_16) {
    FUNC_4 ("<password-file> wasn't given\n");
    FUNC_10 ();
  }

  VAR_9 = VAR_17[VAR_8];

  FUNC_2 (&VAR_12, 0, 0);

  VAR_13 = FUNC_9 (0);

  FUNC_5 (2048, VAR_22, VAR_9, VAR_2);

  FUNC_8 ();
  return 0;
}
