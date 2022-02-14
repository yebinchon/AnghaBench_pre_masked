
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int yyscan_t ;
typedef scalar_t__ yy_size_t ;
typedef TYPE_1__* YY_BUFFER_STATE ;
struct TYPE_4__ {int yy_is_our_buffer; } ;


 char VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (char*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;

YY_BUFFER_STATE FUNC_3 (const char * VAR_1, int VAR_2 , yyscan_t VAR_3)
{
 YY_BUFFER_STATE VAR_4;
 char *VAR_5;
 yy_size_t VAR_6;
 int VAR_7;


 VAR_6 = (yy_size_t) (VAR_2 + 2);
 VAR_5 = (char *) FUNC_2( VAR_6 , VAR_3 );
 if ( ! VAR_5 )
  FUNC_0( "out of dynamic memory in yy_scan_bytes()" );

 for ( VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7 )
  VAR_5[VAR_7] = VAR_1[VAR_7];

 VAR_5[VAR_2] = VAR_5[VAR_2+1] = VAR_0;

 VAR_4 = FUNC_1( VAR_5, VAR_6 , VAR_3);
 if ( ! VAR_4 )
  FUNC_0( "bad buffer in yy_scan_bytes()" );




 VAR_4->yy_is_our_buffer = 1;

 return VAR_4;
}
