
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (void*) ;
 void* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int,char**,char*) ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int ,char*,int ) ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_5 () ;
 int VAR_9 ;
 char* VAR_10 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_7 (int,int ,void*,int ) ;
 int VAR_12 ;
 int FUNC_8 () ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 void* VAR_15 ;
 int VAR_16 ;

int FUNC_11 (int VAR_17, char *VAR_18[]) {
  int VAR_19;

  VAR_10 = VAR_18[0];
  while ((VAR_19 = FUNC_3 (VAR_17, VAR_18, "b:c:l:p:dhu:v")) != -1) {
    switch (VAR_19) {
    case 'v':
      VAR_16++;
      break;
    case 'h':
      FUNC_10();
      return 2;
    case 'b':
      VAR_2 = FUNC_0(VAR_7);
      if (VAR_2 <= 0) VAR_2 = VAR_0;
      break;
    case 'c':
      VAR_6 = FUNC_0(VAR_7);
      if (VAR_6 <= 0 || VAR_6 > VAR_1) {
  VAR_6 = VAR_1;
      }
      break;
    case 'p':
      VAR_9 = FUNC_0(VAR_7);
      break;
    case 'u':
      VAR_15 = VAR_7;
      break;
    case 'l':
      VAR_5 = VAR_7;
      break;
    case 'd':
      VAR_4 ^= 1;
    }
  }
  if (VAR_17 != VAR_8 + 1) {
    FUNC_10();
    return 2;
  }

  FUNC_4 (0, VAR_3 = VAR_18[VAR_8], 0);
  FUNC_5 ();

  if (FUNC_6(VAR_6 + 16) < 0) {
    FUNC_2 (VAR_14, "fatal: cannot raise open file limit to %d\n", VAR_6+16);
    FUNC_1(1);
  }

  VAR_11 = FUNC_7 (VAR_9, VAR_12, VAR_2, 0);
  if (VAR_11 < 0) {
    FUNC_2(VAR_14, "cannot open server socket at port %d: %m\n", VAR_9);
    FUNC_1(1);
  }


  VAR_13 = FUNC_9(0);

  FUNC_8();

  return 0;
}
