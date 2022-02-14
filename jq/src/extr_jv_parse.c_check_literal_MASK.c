
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jv_parser {int tokenpos; int* tokenbuf; int dtoa; } ;
typedef char* pfunc ;
typedef int jv ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (double) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 () ;
 double FUNC_7 (int *,char const*,char**) ;
 int FUNC_8 (struct jv_parser*,int ) ;

__attribute__((used)) static pfunc FUNC_9(struct jv_parser* VAR_1) {
  if (VAR_1->tokenpos == 0) return 0;

  const char* VAR_2 = 0;
  int VAR_3;
  jv VAR_4;
  switch (VAR_1->tokenbuf[0]) {
  case 't': VAR_2 = "true"; VAR_3 = 4; VAR_4 = FUNC_6(); break;
  case 'f': VAR_2 = "false"; VAR_3 = 5; VAR_4 = FUNC_1(); break;
  case 'n': VAR_2 = "null"; VAR_3 = 4; VAR_4 = FUNC_3(); break;
  }
  if (VAR_2) {
    if (VAR_1->tokenpos != VAR_3) return "Invalid literal";
    for (int VAR_5=0; VAR_5<VAR_3; VAR_5++)
      if (VAR_1->tokenbuf[VAR_5] != VAR_2[VAR_5])
        return "Invalid literal";
    FUNC_0(FUNC_8(VAR_1, VAR_4));
  } else {

    VAR_1->tokenbuf[VAR_1->tokenpos] = 0;







    char *VAR_6 = 0;
    double VAR_7 = FUNC_7(&VAR_1->dtoa, VAR_1->tokenbuf, &VAR_6);
    if (VAR_6 == 0 || *VAR_6 != 0) {
      return "Invalid numeric literal";
    }
    FUNC_0(FUNC_8(VAR_1, FUNC_4(VAR_7)));

  }
  VAR_1->tokenpos = 0;
  return 0;
}
