
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ yyscan_t ;
typedef int yy_size_t ;
struct yyguts_t {scalar_t__ yy_start_stack_ptr; scalar_t__ yy_start_stack_depth; int* yy_start_stack; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int,scalar_t__) ;
 scalar_t__ FUNC_3 (void*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_4 (int VAR_2 , yyscan_t VAR_3)
{
    struct yyguts_t * VAR_4 = (struct yyguts_t*)VAR_3;
 if ( VAR_4->yy_start_stack_ptr >= VAR_4->yy_start_stack_depth )
  {
  yy_size_t VAR_5;

  VAR_4->yy_start_stack_depth += VAR_1;
  VAR_5 = (yy_size_t) VAR_4->yy_start_stack_depth * sizeof( int );

  if ( ! VAR_4->yy_start_stack )
   VAR_4->yy_start_stack = (int *) FUNC_2( VAR_5 , VAR_3 );

  else
   VAR_4->yy_start_stack = (int *) FUNC_3(
     (void *) VAR_4->yy_start_stack, VAR_5 , VAR_3 );

  if ( ! VAR_4->yy_start_stack )
   FUNC_1( "out of memory expanding start-condition stack" );
  }

 VAR_4->yy_start_stack[VAR_4->yy_start_stack_ptr++] = VAR_0;

 FUNC_0(VAR_2);
}
