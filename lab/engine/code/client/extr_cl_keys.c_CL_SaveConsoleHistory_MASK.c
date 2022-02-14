
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int fileHandle_t ;
struct TYPE_2__ {char* buffer; int scroll; int cursor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,int ) ;
 int VAR_2 ;
 int FUNC_4 (char*,int,int ) ;
 char* VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,int ,int,char*) ;

void FUNC_7( void )
{
 int VAR_7;
 int VAR_8, VAR_9, VAR_10;
 fileHandle_t VAR_11;

 VAR_3[ 0 ] = '\0';

 VAR_7 = ( VAR_6 - 1 ) % VAR_0;
 do
 {
  if( VAR_5[ VAR_7 ].buffer[ 0 ] )
  {
   VAR_8 = FUNC_5( VAR_5[ VAR_7 ].buffer );
   VAR_9 = FUNC_5( VAR_3 );


   VAR_10 = VAR_8 + FUNC_5( "999 999 999  " );

   if( VAR_9 + VAR_10 < VAR_2 )
   {
    FUNC_4( VAR_3, VAR_2,
      FUNC_6( "%d %d %d %s ",
      VAR_5[ VAR_7 ].cursor,
      VAR_5[ VAR_7 ].scroll,
      VAR_8,
      VAR_5[ VAR_7 ].buffer ) );
   }
   else
    break;
  }
  VAR_7 = ( VAR_7 - 1 + VAR_0 ) % VAR_0;
 }
 while( VAR_7 != ( VAR_6 - 1 ) % VAR_0 );

 VAR_4 = FUNC_5( VAR_3 );

 VAR_11 = FUNC_2( VAR_1 );
 if( !VAR_11 )
 {
  FUNC_0( "Couldn't write %s.\n", VAR_1 );
  return;
 }

 if( FUNC_3( VAR_3, VAR_4, VAR_11 ) < VAR_4 )
  FUNC_0( "Couldn't write %s.\n", VAR_1 );

 FUNC_1( VAR_11 );
}
