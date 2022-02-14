
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct jv_parser {int dummy; } ;
typedef int jv ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (char*,int,int,int *) ;
 int FUNC_7 (int,struct stat*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (struct jv_parser*) ;
 struct jv_parser* FUNC_16 (int ) ;
 int FUNC_17 (struct jv_parser*) ;
 int FUNC_18 (struct jv_parser*,char*,size_t,int) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int ,char*,size_t) ;
 int FUNC_21 (char*,char const*,...) ;
 scalar_t__ FUNC_22 (char*,char*,int*) ;
 int FUNC_23 (char const*,int ) ;
 int FUNC_24 (int ) ;

jv FUNC_25(const char* VAR_2, int VAR_3) {
  struct stat VAR_4;
  int VAR_5 = FUNC_23(VAR_2, VAR_0);
  if (VAR_5 == -1) {
    return FUNC_13(FUNC_21("Could not open %s: %s",
                                             VAR_2,
                                             FUNC_24(VAR_1)));
  }
  if (FUNC_7(VAR_5, &VAR_4) == -1 || FUNC_0(VAR_4.st_mode)) {
    FUNC_1(VAR_5);
    return FUNC_13(FUNC_21("Could not open %s: %s",
                                             VAR_2,
                                             "It's a directory"));
  }
  FILE* VAR_6 = FUNC_3(VAR_5, "r");
  struct jv_parser* VAR_7 = ((void*)0);
  jv VAR_8;
  if (!VAR_6) {
    FUNC_1(VAR_5);
    return FUNC_13(FUNC_21("Could not open %s: %s",
                                             VAR_2,
                                             FUNC_24(VAR_1)));
  }
  if (VAR_3) {
    VAR_8 = FUNC_19("");
  } else {
    VAR_8 = FUNC_8();
    VAR_7 = FUNC_16(0);
  }




  const int VAR_9 = 4;
  char VAR_10[4096+VAR_9];
  while (!FUNC_4(VAR_6) && !FUNC_5(VAR_6)) {
    size_t VAR_11 = FUNC_6(VAR_10, 1, sizeof(VAR_10)-VAR_9, VAR_6);
    int VAR_12 = 0;

    if (VAR_11 == 0)
      continue;
    if (FUNC_22(VAR_10+(VAR_11-1), VAR_10, &VAR_12) && VAR_12 > 0 &&
        !FUNC_4(VAR_6) && !FUNC_5(VAR_6)) {
      VAR_11 += FUNC_6(VAR_10+VAR_11, 1, VAR_12, VAR_6);
    }

    if (VAR_3) {
      VAR_8 = FUNC_20(VAR_8, VAR_10, VAR_11);
    } else {
      FUNC_18(VAR_7, VAR_10, VAR_11, !FUNC_4(VAR_6));
      jv VAR_13;
      while (FUNC_14((VAR_13 = FUNC_17(VAR_7))))
        VAR_8 = FUNC_9(VAR_8, VAR_13);
      if (FUNC_12(FUNC_10(VAR_13))) {
        FUNC_11(VAR_8);
        VAR_8 = VAR_13;
        break;
      }
    }
  }
  if (!VAR_3)
      FUNC_15(VAR_7);
  int VAR_14 = FUNC_5(VAR_6);
  if (FUNC_2(VAR_6) != 0 || VAR_14) {
    FUNC_11(VAR_8);
    return FUNC_13(FUNC_21("Error reading from %s",
                                             VAR_2));
  }
  return VAR_8;
}
