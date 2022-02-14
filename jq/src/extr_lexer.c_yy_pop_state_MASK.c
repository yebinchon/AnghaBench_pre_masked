
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ yyscan_t ;
struct yyguts_t {scalar_t__ yy_start_stack_ptr; int * yy_start_stack; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2 (yyscan_t VAR_0)
{
    struct yyguts_t * VAR_1 = (struct yyguts_t*)VAR_0;
 if ( --VAR_1->yy_start_stack_ptr < 0 )
  FUNC_1( "start-condition stack underflow" );

 FUNC_0(VAR_1->yy_start_stack[VAR_1->yy_start_stack_ptr]);
}
