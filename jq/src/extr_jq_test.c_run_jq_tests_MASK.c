
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct err_data {char* buf; } ;
typedef int prog ;
typedef int jv ;
typedef int jq_state ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char*,int,int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int *,struct err_data*) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int **) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int) ;
 int * FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (char*) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (char*,...) ;
 int FUNC_27 () ;
 scalar_t__ FUNC_28 (char*) ;
 scalar_t__ FUNC_29 (char*,char*) ;
 int FUNC_30 (char*) ;
 int * VAR_4 ;

__attribute__((used)) static void FUNC_31(jv VAR_5, int VAR_6, FILE *VAR_7, int VAR_8, int VAR_9) {
  char VAR_10[4096];
  char VAR_11[4096];
  struct err_data VAR_12;
  int VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;
  unsigned int VAR_16 = 0;
  int VAR_17 = 0;
  int VAR_18 = 0;
  jq_state *VAR_19 = ((void*)0);

  int VAR_20 = VAR_8 > 0 ? VAR_8 : 0;
  int VAR_21 = VAR_9;

  VAR_19 = FUNC_7();
  FUNC_0(VAR_19);
  if (FUNC_19(VAR_5) == VAR_1)
    VAR_5 = FUNC_13();
  FUNC_9(VAR_19, FUNC_23("JQ_LIBRARY_PATH"), VAR_5);

  while (1) {
    if (!FUNC_4(VAR_10, sizeof(VAR_10), VAR_7)) break;
    VAR_16++;
    if (FUNC_28(VAR_10)) continue;
    if (FUNC_2(VAR_10)) {
      VAR_17 = 1;
      VAR_18 = FUNC_1(VAR_10);
      FUNC_10(VAR_19, VAR_4, &VAR_12);
      continue;
    }
    if (VAR_10[FUNC_30(VAR_10)-1] == '\n') VAR_10[FUNC_30(VAR_10)-1] = 0;

    if (VAR_8 > 0) {
      VAR_8--;


      while (FUNC_4(VAR_11, sizeof(VAR_11), VAR_7)) {
        VAR_16++;
        if (VAR_11[0] == '\n' || (VAR_11[0] == '\r' && VAR_11[1] == '\n'))
          break;
      }

      VAR_17 = 0;
      VAR_18 = 0;

      continue;
    } else if (VAR_8 == 0) {
      FUNC_26("Skipped %d tests\n", VAR_20);
      VAR_8 = -1;
    }

    if (VAR_9 > 0) {
      VAR_9--;
    } else if (VAR_9 == 0) {
      FUNC_26("Hit the number of tests limit (%d), breaking\n", VAR_21);
      VAR_9 = -1;
      break;
    }

    int VAR_22 = 1;
    VAR_13++;
    FUNC_26("Test #%d: '%s' at line number %u\n", VAR_13 + VAR_20, VAR_10, VAR_16);
    int VAR_23 = FUNC_5(VAR_19, VAR_10);

    if (VAR_17) {
      FUNC_10(VAR_19, ((void*)0), ((void*)0));
      if (!FUNC_4(VAR_11, sizeof(VAR_11), VAR_7)) { VAR_15++; break; }
      VAR_16++;
      if (VAR_11[FUNC_30(VAR_11)-1] == '\n') VAR_11[FUNC_30(VAR_11)-1] = 0;
      if (VAR_23) {
        FUNC_26("*** Test program compiled that should not have at line %u: %s\n", VAR_16, VAR_10);
        VAR_17 = 0;
        VAR_18 = 0;
        VAR_15++;
        continue;
      }
      if (VAR_18 && FUNC_29(VAR_11, VAR_12.buf) != 0) {
        FUNC_26("*** Erroneous test program failed with wrong message (%s) at line %u: %s\n", VAR_12.buf, VAR_16, VAR_10);
        VAR_15++;
      } else {
        VAR_14++;
      }
      VAR_17 = 0;
      VAR_18 = 0;
      continue;
    }

    if (!VAR_23) {
      FUNC_26("*** Test program failed to compile at line %u: %s\n", VAR_16, VAR_10);
      VAR_15++;

      while (FUNC_4(VAR_11, sizeof(VAR_11), VAR_7)) {
        VAR_16++;
        if (VAR_11[0] == '\n' || (VAR_11[0] == '\r' && VAR_11[1] == '\n'))
          break;
      }
      continue;
    }
    if (VAR_6) {
      FUNC_26("Disassembly:\n");
      FUNC_6(VAR_19, 2);
      FUNC_26("\n");
    }
    if (!FUNC_4(VAR_11, sizeof(VAR_11), VAR_7)) { VAR_15++; break; }
    VAR_16++;
    jv VAR_24 = FUNC_21(VAR_11);
    if (!FUNC_20(VAR_24)) {
      FUNC_26("*** Input is invalid on line %u: %s\n", VAR_16, VAR_11);
      VAR_15++;
      continue;
    }
    FUNC_11(VAR_19, VAR_24, VAR_6 ? VAR_0 : 0);

    while (FUNC_4(VAR_11, sizeof(VAR_11), VAR_7)) {
      VAR_16++;
      if (FUNC_28(VAR_11)) break;
      jv VAR_25 = FUNC_21(VAR_11);
      if (!FUNC_20(VAR_25)) {
        FUNC_26("*** Expected result is invalid on line %u: %s\n", VAR_16, VAR_11);
        VAR_15++;
        continue;
      }
      jv VAR_26 = FUNC_8(VAR_19);
      if (!FUNC_20(VAR_26)) {
        FUNC_18(VAR_26);
        FUNC_26("*** Insufficient results for test at line number %u: %s\n", VAR_16, VAR_10);
        VAR_22 = 0;
        break;
      } else if (!FUNC_17(FUNC_14(VAR_25), FUNC_14(VAR_26))) {
        FUNC_26("*** Expected ");
        FUNC_15(FUNC_14(VAR_25), 0);
        FUNC_26(", but got ");
        FUNC_15(FUNC_14(VAR_26), 0);
        FUNC_26(" for test at line number %u: %s\n", VAR_16, VAR_10);
        VAR_22 = 0;
      }
      jv VAR_27 = FUNC_16(FUNC_14(VAR_25), FUNC_27() & ~(VAR_2|VAR_3));
      jv VAR_28 = FUNC_22(FUNC_25(VAR_27), FUNC_24(FUNC_14(VAR_27)));
      FUNC_0(FUNC_17(FUNC_14(VAR_25), FUNC_14(VAR_28)));
      FUNC_18(VAR_27);
      FUNC_18(VAR_28);
      FUNC_18(VAR_25);
      FUNC_18(VAR_26);
    }
    if (VAR_22) {
      jv VAR_29 = FUNC_8(VAR_19);
      if (FUNC_20(VAR_29)) {
        FUNC_26("*** Superfluous result: ");
        FUNC_15(VAR_29, 0);
        FUNC_26(" for test at line number %u, %s\n", VAR_16, VAR_10);
        VAR_22 = 0;
      } else {
        FUNC_18(VAR_29);
      }
    }
    VAR_14+=VAR_22;
  }
  FUNC_12(&VAR_19);

  int VAR_30 = VAR_20;

  if (VAR_8 > 0) {
    VAR_30 = VAR_20 - VAR_8;
  }

  FUNC_26("%d of %d tests passed (%d malformed, %d skipped)\n",
    VAR_14, VAR_13, VAR_15, VAR_30);

  if (VAR_8 > 0) {
    FUNC_26("WARN: skipped past the end of file, exiting with status 2\n");
    FUNC_3(2);
  }

  if (VAR_14 != VAR_13) FUNC_3(1);
}
