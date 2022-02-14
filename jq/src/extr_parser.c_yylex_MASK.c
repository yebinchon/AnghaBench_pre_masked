
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int yyscan_t ;
struct locfile {int dummy; } ;
struct lexer_param {int lexer; } ;
typedef int jv ;
typedef int block ;
struct TYPE_4__ {int literal; } ;
typedef TYPE_1__ YYSTYPE ;
typedef int YYLTYPE ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 char* FUNC_8 (int ) ;

int FUNC_9(YYSTYPE* VAR_3, YYLTYPE* VAR_4, block* VAR_5, int* VAR_6,
          struct locfile* VAR_7, struct lexer_param* VAR_8) {
  yyscan_t VAR_9 = VAR_8->lexer;
  int VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_9);
  if ((VAR_10 == VAR_1 || VAR_10 == VAR_2) && !FUNC_6(VAR_3->literal)) {
    jv VAR_11 = FUNC_5(FUNC_2(VAR_3->literal));
    if (FUNC_4(VAR_11) == VAR_0) {
      FUNC_0(*VAR_4, FUNC_8(VAR_11));
    } else {
      FUNC_0(*VAR_4, "Invalid literal");
    }
    FUNC_3(VAR_11);
    FUNC_3(VAR_3->literal);
    VAR_3->literal = FUNC_7();
  }
  return VAR_10;
}
