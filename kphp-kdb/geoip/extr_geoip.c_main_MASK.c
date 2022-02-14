
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
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (char*,int) ;
 int VAR_6 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

int FUNC_12 (int VAR_12, char **VAR_13) {
  int VAR_14;
  int VAR_15 = 0;
  FUNC_11 ();

  while ((VAR_14 = FUNC_6 (VAR_12, VAR_13, "i:o:vhs:m")) != -1) {
    switch (VAR_14) {
    case 'v':
      VAR_11++;
      break;
    case 'h':
      FUNC_7();
      return 2;
    case 'i':
      VAR_1 = VAR_3;
      break;
    case 'o':
      VAR_5 = VAR_3;
      break;
    case 's':
      VAR_15 = FUNC_1 (VAR_3);
      break;
    case 'm':
      VAR_2 ++;
      break;
    default:
      FUNC_7 ();
      return 2;
    }
  }

  if (VAR_12 != VAR_4 || !VAR_1) {
    FUNC_7();
    return 2;
  }

  if (VAR_5) {
    FUNC_0 (FUNC_5 (VAR_5, "wt", VAR_9));
  }

  FUNC_9 ("%d\n", VAR_2);
  FUNC_0 (FUNC_5 (VAR_1, "rt", VAR_8));
  for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
    FUNC_0 (FUNC_3 (VAR_0, 1000000, VAR_8));
  }

  FUNC_8 ();
  FUNC_10 ();
  FUNC_2 (&VAR_6, -1);
  if (VAR_11) {
    FUNC_4 (VAR_7, "Total %d rules\n", VAR_10);
  }

  return 0;
}
