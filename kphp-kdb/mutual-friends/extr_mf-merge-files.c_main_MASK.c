
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_3 (int) ;
 int * VAR_6 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,char*) ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (size_t,void*,int) ;
 void* VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 char* VAR_13 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_13 () ;
 int VAR_18 ;
 char* VAR_19 ;
 int FUNC_14 (int ,int*,int) ;

int FUNC_15 (int VAR_20, char *VAR_21[]) {
  int VAR_22;

  FUNC_0 ((VAR_0 & (VAR_0 - 1)) == 0);

  FUNC_12();
  VAR_13 = VAR_21[0];


  if (VAR_20 == 1) {
    FUNC_13();
    return 2;
  }

  while ((VAR_22 = FUNC_6 (VAR_20, VAR_21, "hU:E:T:F:B:to:u:")) != -1) {
    switch (VAR_22) {
    case 'h':
      FUNC_13 ();
      return 2;
    case 'U':
      VAR_18 = FUNC_1 (VAR_10);
      break;
    case 'E':
      VAR_3 = FUNC_1 (VAR_10);
      break;
    case 'T':
      VAR_16 = FUNC_1 (VAR_10);
      break;
    case 'F':
      VAR_8 = VAR_10;
      break;
    case 'B':
      VAR_5 = VAR_10;
      break;
    case 't':
      VAR_15 = 1;
      break;
    case 'o':
      VAR_12 = VAR_10;
      break;
    case 'u':
      VAR_19 = VAR_10;
      break;
    }
  }
  if (VAR_20 != VAR_11) {
    FUNC_13();
    return 2;
  }

  if (FUNC_2 (VAR_19) < 0) {
    FUNC_5 (VAR_14, "fatal: cannot change user to %s\n", VAR_19 ? VAR_19 : "(none)");
    FUNC_3 (1);
  }

  FUNC_0 (VAR_18 >= 0);
  FUNC_0 (VAR_3 >= 0);
  FUNC_0 (VAR_16 >= 0);
  VAR_7 = VAR_3;
  VAR_4 = VAR_3 + 1;
  VAR_2 = VAR_3 + 2;

  FUNC_8 (VAR_3 + 3);

  FUNC_10 (VAR_2, VAR_12, 2);

  VAR_9 = -1;
  FUNC_14 (VAR_6[VAR_2], &VAR_9, sizeof (long long));
  VAR_9 = sizeof (long long);

  VAR_17 = VAR_18 / VAR_3;
  FUNC_7();
  FUNC_11();

  FUNC_4();

  FUNC_0 (FUNC_9 (VAR_6[VAR_2], 0, VAR_1) == 0);
  FUNC_14 (VAR_6[VAR_2], &VAR_9, sizeof (long long));

  return 0;
}
