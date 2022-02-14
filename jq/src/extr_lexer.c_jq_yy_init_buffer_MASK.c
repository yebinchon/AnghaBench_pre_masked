
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ yyscan_t ;
struct yyguts_t {int dummy; } ;
typedef TYPE_1__* YY_BUFFER_STATE ;
struct TYPE_5__ {int yy_fill_buffer; int yy_bs_lineno; int yy_is_interactive; scalar_t__ yy_bs_column; int * yy_input_file; } ;
typedef int FILE ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_3 (YY_BUFFER_STATE VAR_2, FILE * VAR_3 , yyscan_t VAR_4)

{
 int VAR_5 = VAR_1;
    struct yyguts_t * VAR_6 = (struct yyguts_t*)VAR_4;

 FUNC_2( VAR_2 , VAR_4);

 VAR_2->yy_input_file = VAR_3;
 VAR_2->yy_fill_buffer = 1;





    if (VAR_2 != VAR_0){
        VAR_2->yy_bs_lineno = 1;
        VAR_2->yy_bs_column = 0;
    }

        VAR_2->yy_is_interactive = VAR_3 ? (FUNC_1( FUNC_0(VAR_3) ) > 0) : 0;

 VAR_1 = VAR_5;
}
