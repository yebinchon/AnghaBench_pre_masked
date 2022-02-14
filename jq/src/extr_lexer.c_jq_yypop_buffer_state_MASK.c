
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ yyscan_t ;
struct yyguts_t {scalar_t__ yy_buffer_stack_top; int yy_did_buffer_switch_on_eof; } ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2 (yyscan_t VAR_2)
{
    struct yyguts_t * VAR_3 = (struct yyguts_t*)VAR_2;
 if (!VAR_0)
  return;

 FUNC_0(VAR_0 , VAR_2);
 VAR_1 = ((void*)0);
 if (VAR_3->yy_buffer_stack_top > 0)
  --VAR_3->yy_buffer_stack_top;

 if (VAR_0) {
  FUNC_1( VAR_2 );
  VAR_3->yy_did_buffer_switch_on_eof = 1;
 }
}
