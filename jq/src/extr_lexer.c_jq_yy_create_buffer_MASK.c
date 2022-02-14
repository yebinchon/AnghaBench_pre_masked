
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int yyscan_t ;
typedef int yy_size_t ;
struct yy_buffer_state {int dummy; } ;
typedef TYPE_1__* YY_BUFFER_STATE ;
struct TYPE_4__ {int yy_buf_size; char* yy_ch_buf; int yy_is_our_buffer; } ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_2 (int,int ) ;

YY_BUFFER_STATE FUNC_3 (FILE * VAR_0, int VAR_1 , yyscan_t VAR_2)
{
 YY_BUFFER_STATE VAR_3;

 VAR_3 = (YY_BUFFER_STATE) FUNC_2( sizeof( struct yy_buffer_state ) , VAR_2 );
 if ( ! VAR_3 )
  FUNC_0( "out of dynamic memory in yy_create_buffer()" );

 VAR_3->yy_buf_size = VAR_1;




 VAR_3->yy_ch_buf = (char *) FUNC_2( (yy_size_t) (VAR_3->yy_buf_size + 2) , VAR_2 );
 if ( ! VAR_3->yy_ch_buf )
  FUNC_0( "out of dynamic memory in yy_create_buffer()" );

 VAR_3->yy_is_our_buffer = 1;

 FUNC_1( VAR_3, VAR_0 , VAR_2);

 return VAR_3;
}
