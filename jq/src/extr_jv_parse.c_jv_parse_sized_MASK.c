
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jv_parser {int dummy; } ;
typedef int jv ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct jv_parser*) ;
 int FUNC_7 (struct jv_parser*,char const*,int,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int ,char const*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct jv_parser*) ;
 int FUNC_12 (struct jv_parser*,int ) ;

jv FUNC_13(const char* VAR_0, int VAR_1) {
  struct jv_parser VAR_2;
  FUNC_12(&VAR_2, 0);
  FUNC_7(&VAR_2, VAR_0, VAR_1, 0);
  jv VAR_3 = FUNC_6(&VAR_2);
  if (FUNC_5(VAR_3)) {
    jv VAR_4 = FUNC_6(&VAR_2);
    if (FUNC_5(VAR_4)) {

      FUNC_1(VAR_3);
      FUNC_1(VAR_4);
      VAR_3 = FUNC_4(FUNC_8("Unexpected extra JSON values"));
    } else if (FUNC_3(FUNC_0(VAR_4))) {

      FUNC_1(VAR_3);
      VAR_3 = VAR_4;
    } else {

      FUNC_1(VAR_4);
    }
  } else if (FUNC_3(FUNC_0(VAR_3))) {

  } else {

    FUNC_1(VAR_3);
    VAR_3 = FUNC_4(FUNC_8("Expected JSON value"));
  }
  FUNC_11(&VAR_2);

  if (!FUNC_5(VAR_3) && FUNC_3(FUNC_0(VAR_3))) {
    jv VAR_5 = FUNC_2(VAR_3);
    VAR_3 = FUNC_4(FUNC_9("%s (while parsing '%s')",
                                              FUNC_10(VAR_5),
                                              VAR_0));
    FUNC_1(VAR_5);
  }
  return VAR_3;
}
