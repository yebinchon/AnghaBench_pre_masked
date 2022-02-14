
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jv_parser {scalar_t__ st; int last_ch_was_ws; scalar_t__ column; int line; } ;
typedef char* presult ;
typedef char* pfunc ;
typedef int jv ;
typedef int chclass ;



 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

 char* VAR_3 ;


 int FUNC_0 (scalar_t__) ;

 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct jv_parser*,int *) ;
 scalar_t__ FUNC_3 (struct jv_parser*) ;
 scalar_t__ FUNC_4 (struct jv_parser*) ;
 int FUNC_5 (char) ;
 scalar_t__ FUNC_6 (struct jv_parser*) ;
 scalar_t__ FUNC_7 (struct jv_parser*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct jv_parser*) ;
 scalar_t__ FUNC_12 (struct jv_parser*,char) ;
 int FUNC_13 (struct jv_parser*,char) ;

__attribute__((used)) static pfunc FUNC_14(struct jv_parser* VAR_4, char VAR_5, jv* VAR_6) {
  VAR_4->column++;
  if (VAR_5 == '\n') {
    VAR_4->line++;
    VAR_4->column = 0;
  }
  if (VAR_5 == '\036' ) {
    if (FUNC_4(VAR_4)) {
      if (FUNC_3(VAR_4) == 0 && FUNC_7(VAR_4))
        return "Potentially truncated top-level numeric value";
      return "Truncated value";
    }
    FUNC_0(FUNC_3(VAR_4));
    if (VAR_4->st == VAR_0 && FUNC_2(VAR_4, VAR_6))
      return VAR_3;

    FUNC_1(!FUNC_10(*VAR_6));
    FUNC_11(VAR_4);
    FUNC_8(*VAR_6);
    *VAR_6 = FUNC_9();
    return VAR_3;
  }
  presult VAR_7 = 0;
  VAR_4->last_ch_was_ws = 0;
  if (VAR_4->st == VAR_0) {
    chclass VAR_8 = FUNC_5(VAR_5);
    if (VAR_8 == 128)
      VAR_4->last_ch_was_ws = 1;
    if (VAR_8 != 131) {
      FUNC_0(FUNC_3(VAR_4));
      if (FUNC_2(VAR_4, VAR_6)) VAR_7 = VAR_3;
    }
    switch (VAR_8) {
    case 131:
      FUNC_13(VAR_4, VAR_5);
      break;
    case 128:
      break;
    case 130:
      VAR_4->st = VAR_1;
      break;
    case 129:
      FUNC_0(FUNC_12(VAR_4, VAR_5));
      break;
    case 132:
      return "Invalid character";
    }
    if (FUNC_2(VAR_4, VAR_6)) VAR_7 = VAR_3;
  } else {
    if (VAR_5 == '"' && VAR_4->st == VAR_1) {
      FUNC_0(FUNC_6(VAR_4));
      VAR_4->st = VAR_0;
      if (FUNC_2(VAR_4, VAR_6)) VAR_7 = VAR_3;
    } else {
      FUNC_13(VAR_4, VAR_5);
      if (VAR_5 == '\\' && VAR_4->st == VAR_1) {
        VAR_4->st = VAR_2;
      } else {
        VAR_4->st = VAR_1;
      }
    }
  }
  return VAR_7;
}
