
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct locfile {int length; int data; } ;
struct lexer_param {int lexer; } ;
typedef int block ;
typedef int YY_BUFFER_STATE ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int*,struct locfile*,struct lexer_param*) ;

int FUNC_7(struct locfile* VAR_0, block* VAR_1) {
  struct lexer_param VAR_2;
  YY_BUFFER_STATE VAR_3;
  FUNC_5(0, &VAR_2.lexer);
  VAR_3 = FUNC_3(VAR_0->data, VAR_0->length, VAR_2.lexer);
  int VAR_4 = 0;
  *VAR_1 = FUNC_1();
  FUNC_6(VAR_1, &VAR_4, VAR_0, &VAR_2);
  FUNC_2(VAR_3, VAR_2.lexer);
  FUNC_4(VAR_2.lexer);
  if (VAR_4 > 0) {
    FUNC_0(*VAR_1);
    *VAR_1 = FUNC_1();
  }
  return VAR_4;
}
