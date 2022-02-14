
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bytecoded_builtin {char* member_0; char* name; int code; int member_1; } ;
typedef int builtin_defs ;
typedef int builtin_def_1arg ;
typedef int block ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;

__attribute__((used)) static block FUNC_12(block VAR_7) {
  block VAR_8 = FUNC_5();
  {
    struct bytecoded_builtin VAR_9[] = {
      {"empty", FUNC_7(VAR_0)},
      {"not", FUNC_2(FUNC_3(FUNC_10()),
                             FUNC_3(FUNC_11()))}
    };
    for (unsigned VAR_10=0; VAR_10<sizeof(VAR_9)/sizeof(VAR_9[0]); VAR_10++) {
      VAR_8 = FUNC_0(VAR_8, FUNC_4(VAR_9[VAR_10].name, FUNC_5(),
                                              VAR_9[VAR_10].code));
    }
  }
  {
    struct bytecoded_builtin VAR_11[] = {
      {"path", FUNC_0(FUNC_7(VAR_3),
                     FUNC_1("arg", FUNC_5()),
                     FUNC_7(VAR_4))},
    };
    for (unsigned VAR_12=0; VAR_12<sizeof(VAR_11)/sizeof(VAR_11[0]); VAR_12++) {
      VAR_8 = FUNC_0(VAR_8, FUNC_4(VAR_11[VAR_12].name,
                                              FUNC_9("arg"),
                                              VAR_11[VAR_12].code));
    }
  }
  {

    block VAR_13 = FUNC_8(VAR_6, "rangevar");
    block VAR_14 = FUNC_8(VAR_6, "rangestart");
    block VAR_15 = FUNC_0(FUNC_7(VAR_1),
                        FUNC_1("start", FUNC_5()),
                        VAR_14,
                        FUNC_1("end", FUNC_5()),
                        FUNC_7(VAR_1),
                        FUNC_6(VAR_2, VAR_14),

                        VAR_13,
                        FUNC_6(VAR_5, VAR_13));
    VAR_8 = FUNC_0(VAR_8, FUNC_4("range",
                                            FUNC_0(FUNC_9("start"), FUNC_9("end")),
                                            VAR_15));
  }
  return FUNC_0(VAR_8, VAR_7);
}
