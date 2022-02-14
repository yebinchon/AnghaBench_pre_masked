
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ yyscan_t ;
struct yyguts_t {int yy_did_buffer_switch_on_eof; int yy_buffer_stack_top; int yy_n_chars; int * yy_c_buf_p; int yy_hold_char; } ;
typedef TYPE_1__* YY_BUFFER_STATE ;
struct TYPE_4__ {int yy_n_chars; int * yy_buf_pos; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2 (YY_BUFFER_STATE VAR_2 , yyscan_t VAR_3)
{
    struct yyguts_t * VAR_4 = (struct yyguts_t*)VAR_3;
 if (VAR_2 == ((void*)0))
  return;

 FUNC_1(VAR_3);


 if ( VAR_0 )
  {

  *VAR_4->yy_c_buf_p = VAR_4->yy_hold_char;
  VAR_1->yy_buf_pos = VAR_4->yy_c_buf_p;
  VAR_1->yy_n_chars = VAR_4->yy_n_chars;
  }


 if (VAR_0)
  VAR_4->yy_buffer_stack_top++;
 VAR_1 = VAR_2;


 FUNC_0( VAR_3 );
 VAR_4->yy_did_buffer_switch_on_eof = 1;
}
