
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ yyscan_t ;
struct yyguts_t {int * yy_c_buf_p; int yy_hold_char; int * yytext_ptr; int yy_n_chars; } ;
struct TYPE_2__ {int yy_input_file; int * yy_buf_pos; int yy_n_chars; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0 (yyscan_t VAR_2)
{
    struct yyguts_t * VAR_3 = (struct yyguts_t*)VAR_2;
 VAR_3->yy_n_chars = VAR_0->yy_n_chars;
 VAR_3->yytext_ptr = VAR_3->yy_c_buf_p = VAR_0->yy_buf_pos;
 VAR_1 = VAR_0->yy_input_file;
 VAR_3->yy_hold_char = *VAR_3->yy_c_buf_p;
}
