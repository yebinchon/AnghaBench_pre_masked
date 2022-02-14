
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 char* VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (char*,int,...) ;
 char FUNC_7 () ;
 int FUNC_8 () ;
 int* VAR_8 ;
 int FUNC_9 (char) ;
 int VAR_9 ;
 int FUNC_10 (char*,char*,int) ;
 scalar_t__ FUNC_11 (int) ;
 int VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int FUNC_12 (int,int,int,int) ;
 scalar_t__* VAR_13 ;
 int FUNC_13 () ;

int FUNC_14 (void) {


  VAR_5 = FUNC_6 (VAR_6, VAR_2);
  if (VAR_5 < 0) {
    FUNC_2 (VAR_9, "Can not open dump (file %s)\n", VAR_6);
    return 1;
  }
  int VAR_14;
  for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
    FUNC_3 (VAR_14);

    VAR_13[VAR_14] = FUNC_6 (VAR_4, VAR_0 | VAR_3 | VAR_1, 0644);

    if (VAR_13[VAR_14] < 0) {
      FUNC_2 (VAR_9, "can not open file %s for write\n", VAR_4);
      return 1;
    }
    VAR_11[VAR_14] = VAR_12[VAR_14];
  }

  int VAR_15 = 0;
  char VAR_16[1001];
  while (1) {
    int VAR_17 = 0;
    while (1) {
      int VAR_18 = FUNC_5 (VAR_16, 1000);
      if (VAR_18 < 0) {
        break;
      }
      if (!FUNC_10 (VAR_16, "VALUES", 6)) {

        VAR_17 = 1;
        break;
      }
    }
    if (!VAR_17) {
      break;
    }
    while (1) {
      FUNC_9 ('(');
      int VAR_19,VAR_20,VAR_21,VAR_22,VAR_23,VAR_24;
      VAR_19 = FUNC_8 (); VAR_20 = FUNC_8 (); VAR_21 = FUNC_8 ();
      VAR_22 = FUNC_8 (); VAR_23 = FUNC_8 (); VAR_24 = FUNC_8 ();
      VAR_22 = FUNC_4 (VAR_22);
      if (FUNC_11 (VAR_22)) {
        FUNC_12 (VAR_20, VAR_22, VAR_24, VAR_21);
        VAR_15 ++;
      } else {
        FUNC_2 (VAR_9, "assert: d = %d\n", VAR_22);
        for (VAR_14 = -100; VAR_14 < 100; VAR_14++) {
          FUNC_2 (VAR_9, "%c", *(VAR_8 + VAR_14));
        }
        FUNC_2 (VAR_9, "\n");
      }
      if (VAR_10 && !(VAR_15 & 0xfffff)) {
        FUNC_2 (VAR_9, "written %d items\n", VAR_15);
      }

      FUNC_0 (FUNC_7 () == ')');
      char VAR_25 = FUNC_7 ();
      if (VAR_25 == ';') {
        break;
      }
      if (VAR_25 != ',') {
        FUNC_2 (VAR_9, "assert: c = %c\n", VAR_25);
        for (VAR_14 = -100; VAR_14 < 100; VAR_14++) {
          FUNC_2 (VAR_9, "%c", *(VAR_8 + VAR_14));
        }
        FUNC_2 (VAR_9, "\n");

      }
      FUNC_0 (VAR_25 == ',' || VAR_25 == '-');
    }




  }
  for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
    FUNC_1 (VAR_14);
  }
  if (VAR_10) {
    FUNC_2 (VAR_9, "Total %d bookmarks.\n", VAR_15);
    if (VAR_10 >= 2) {
      FUNC_13 ();
    }
  }
  return 0;

}
