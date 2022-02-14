
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (scalar_t__,char*,int ) ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;

int FUNC_11 (int VAR_11, char **VAR_12) {
  int VAR_13;
  int VAR_14 = 0;
  FUNC_10 ();

  while ((VAR_13 = FUNC_6 (VAR_11, VAR_12, "i:o:vhs:")) != -1) {
    switch (VAR_13) {
    case 'v':
      VAR_10++;
      break;
    case 'h':
      FUNC_7();
      return 2;
    case 'i':
      VAR_1 = VAR_2;
      break;
    case 'o':
      VAR_4 = VAR_2;
      break;
    case 's':
      VAR_14 = FUNC_1 (VAR_2);
      break;
    default:
      FUNC_7 ();
      return 2;
    }
  }

  if (VAR_11 != VAR_3 || !VAR_1) {
    FUNC_7();
    return 2;
  }

  if (VAR_4) {
    FUNC_0 (FUNC_5 (VAR_4, "wt", VAR_8));
  }

  FUNC_0 (FUNC_5 (VAR_1, "rt", VAR_7));
  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
    FUNC_0 (FUNC_3 (VAR_0, 1000000, VAR_7));
  }

  FUNC_8 ();
  FUNC_9 ();
  FUNC_2 (&VAR_5, -1);
  if (VAR_10) {
    FUNC_4 (VAR_6, "Total %d rules\n", VAR_9);
  }

  return 0;
}
