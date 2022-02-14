
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ yyscan_t ;
struct yyguts_t {int dummy; } ;
typedef TYPE_1__* YY_BUFFER_STATE ;
struct TYPE_5__ {scalar_t__ yy_ch_buf; scalar_t__ yy_is_our_buffer; } ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (void*,scalar_t__) ;

void FUNC_1 (YY_BUFFER_STATE VAR_2 , yyscan_t VAR_3)
{
    struct yyguts_t * VAR_4 = (struct yyguts_t*)VAR_3;

 if ( ! VAR_2 )
  return;

 if ( VAR_2 == VAR_0 )
  VAR_1 = (YY_BUFFER_STATE) 0;

 if ( VAR_2->yy_is_our_buffer )
  FUNC_0( (void *) VAR_2->yy_ch_buf , VAR_3 );

 FUNC_0( (void *) VAR_2 , VAR_3 );
}
