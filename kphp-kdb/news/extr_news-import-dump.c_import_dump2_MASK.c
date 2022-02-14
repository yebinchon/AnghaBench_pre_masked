
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char*,int,...) ;
 int FUNC_6 () ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int FUNC_8 (int,int,int,int) ;
 scalar_t__* VAR_14 ;
 int FUNC_9 () ;

int FUNC_10 (void) {


  VAR_5 = FUNC_5 (VAR_6, VAR_2);
  if (VAR_5 < 0) {
    FUNC_2 (VAR_10, "Can not open dump (file %s)\n", VAR_6);
    return 1;
  }
  int VAR_15;
  for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
    FUNC_3 (VAR_15);

    VAR_14[VAR_15] = FUNC_5 (VAR_4, VAR_0 | VAR_3 | VAR_1, 0644);

    if (VAR_14[VAR_15] < 0) {
      FUNC_2 (VAR_10, "can not open file %s for write\n", VAR_4);
      return 1;
    }

    VAR_12[VAR_15] = VAR_13[VAR_15];
  }

  int VAR_16 = 0;
  while (1) {
    int VAR_17,VAR_18,VAR_19,VAR_20,VAR_21,VAR_22;
    VAR_17 = FUNC_6 (); VAR_18 = FUNC_6 (); VAR_19 = FUNC_6 ();
    VAR_20 = FUNC_6 (); VAR_21 = FUNC_6 (); VAR_22 = FUNC_6 ();
    VAR_20 = FUNC_4 (VAR_20);
    if (FUNC_7 (VAR_20)) {
      FUNC_8 (VAR_18, VAR_20, VAR_22, VAR_19);
      VAR_16 ++;
    }
    if (VAR_11 && !(VAR_16 & 0xfffff)) {
      FUNC_2 (VAR_10, "written %d items\n", VAR_16);
    }
    FUNC_0 ();
    if (VAR_9 == VAR_8) {
      break;
    }

  }
  for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
    FUNC_1 (VAR_15);
  }
  if (VAR_11) {
    FUNC_2 (VAR_10, "Total %d bookmarks.\n", VAR_16);
    if (VAR_11 >= 2) {
      FUNC_9 ();
    }
  }
  return 0;

}
