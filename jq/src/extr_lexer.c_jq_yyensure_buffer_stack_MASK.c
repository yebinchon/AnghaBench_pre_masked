
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ yyscan_t ;
typedef int yy_size_t ;
struct yyguts_t {int yy_buffer_stack_max; int yy_buffer_stack_top; struct yy_buffer_state** yy_buffer_stack; } ;
struct yy_buffer_state {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct yy_buffer_state**,int ,int) ;
 scalar_t__ FUNC_2 (int,scalar_t__) ;
 scalar_t__ FUNC_3 (struct yy_buffer_state**,int,scalar_t__) ;

__attribute__((used)) static void FUNC_4 (yyscan_t VAR_0)
{
 yy_size_t VAR_1;
    struct yyguts_t * VAR_2 = (struct yyguts_t*)VAR_0;

 if (!VAR_2->yy_buffer_stack) {





      VAR_1 = 1;
  VAR_2->yy_buffer_stack = (struct yy_buffer_state**)FUNC_2
        (VAR_1 * sizeof(struct yy_buffer_state*)
        , VAR_0);
  if ( ! VAR_2->yy_buffer_stack )
   FUNC_0( "out of dynamic memory in yyensure_buffer_stack()" );

  FUNC_1(VAR_2->yy_buffer_stack, 0, VAR_1 * sizeof(struct yy_buffer_state*));

  VAR_2->yy_buffer_stack_max = VAR_1;
  VAR_2->yy_buffer_stack_top = 0;
  return;
 }

 if (VAR_2->yy_buffer_stack_top >= (VAR_2->yy_buffer_stack_max) - 1){


  yy_size_t VAR_3 = 8 ;

  VAR_1 = VAR_2->yy_buffer_stack_max + VAR_3;
  VAR_2->yy_buffer_stack = (struct yy_buffer_state**)FUNC_3
        (VAR_2->yy_buffer_stack,
        VAR_1 * sizeof(struct yy_buffer_state*)
        , VAR_0);
  if ( ! VAR_2->yy_buffer_stack )
   FUNC_0( "out of dynamic memory in yyensure_buffer_stack()" );


  FUNC_1(VAR_2->yy_buffer_stack + VAR_2->yy_buffer_stack_max, 0, VAR_3 * sizeof(struct yy_buffer_state*));
  VAR_2->yy_buffer_stack_max = VAR_1;
 }
}
