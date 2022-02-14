
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int yyscan_t ;
typedef int yy_size_t ;
struct yy_buffer_state {int dummy; } ;
typedef TYPE_1__* YY_BUFFER_STATE ;
struct TYPE_4__ {int yy_buf_size; char* yy_buf_pos; char* yy_ch_buf; int yy_n_chars; int yy_at_bol; int yy_buffer_status; scalar_t__ yy_fill_buffer; scalar_t__ yy_is_interactive; int * yy_input_file; scalar_t__ yy_is_our_buffer; } ;


 int VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int,int ) ;

YY_BUFFER_STATE FUNC_3 (char * VAR_2, yy_size_t VAR_3 , yyscan_t VAR_4)
{
 YY_BUFFER_STATE VAR_5;

 if ( VAR_3 < 2 ||
      VAR_2[VAR_3-2] != VAR_1 ||
      VAR_2[VAR_3-1] != VAR_1 )

  return ((void*)0);

 VAR_5 = (YY_BUFFER_STATE) FUNC_2( sizeof( struct yy_buffer_state ) , VAR_4 );
 if ( ! VAR_5 )
  FUNC_0( "out of dynamic memory in yy_scan_buffer()" );

 VAR_5->yy_buf_size = (int) (VAR_3 - 2);
 VAR_5->yy_buf_pos = VAR_5->yy_ch_buf = VAR_2;
 VAR_5->yy_is_our_buffer = 0;
 VAR_5->yy_input_file = ((void*)0);
 VAR_5->yy_n_chars = VAR_5->yy_buf_size;
 VAR_5->yy_is_interactive = 0;
 VAR_5->yy_at_bol = 1;
 VAR_5->yy_fill_buffer = 0;
 VAR_5->yy_buffer_status = VAR_0;

 FUNC_1( VAR_5 , VAR_4 );

 return VAR_5;
}
