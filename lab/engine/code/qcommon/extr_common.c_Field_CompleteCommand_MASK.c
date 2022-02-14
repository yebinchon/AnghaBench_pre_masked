
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_4__ {char* buffer; int cursor; } ;
struct TYPE_3__ {scalar_t__ integer; } ;


 int FUNC_0 () ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,char*,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 char* FUNC_8 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 char* VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (char*,char*,scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__* VAR_8 ;
 scalar_t__ FUNC_10 (char*) ;

void FUNC_11( char *VAR_9,
  qboolean VAR_10, qboolean VAR_11 )
{
 int VAR_12 = 0;


 VAR_9 = FUNC_5( VAR_9, " \"" );

 FUNC_4( VAR_9 );
 VAR_12 = FUNC_0( );


 if( *( VAR_9 + FUNC_10( VAR_9 ) - 1 ) == ' ' )
 {
  VAR_4 = "";
  VAR_12++;
 }
 else
  VAR_4 = FUNC_1( VAR_12 - 1 );



 if( VAR_5->integer && VAR_3->buffer[ 0 ] &&
   VAR_3->buffer[ 0 ] != '\\' )
 {
  if( VAR_3->buffer[ 0 ] != '/' )
  {

   if( FUNC_10( VAR_3->buffer ) + 1 >=
    sizeof( VAR_3->buffer ) )
    return;

   FUNC_9( &VAR_3->buffer[ 1 ],
    &VAR_3->buffer[ 0 ],
    FUNC_10( VAR_3->buffer ) + 1 );
   VAR_3->cursor++;
  }

  VAR_3->buffer[ 0 ] = '\\';
 }


 if( VAR_12 > 1 )
 {
  const char *VAR_13 = FUNC_1( 0 );
  char *VAR_14;



  if( VAR_13[ 0 ] == '\\' || VAR_13[ 0 ] == '/' )
   VAR_13++;


  if( ( VAR_14 = FUNC_8( VAR_9 ) ) )
   FUNC_11( VAR_14 + 1, VAR_7, VAR_7 );
  else
   FUNC_3( VAR_13, VAR_9, VAR_12 );
 }
 else
 {
  if( VAR_4[0] == '\\' || VAR_4[0] == '/' )
   VAR_4++;

  VAR_6 = 0;
  VAR_8[ 0 ] = 0;

  if( FUNC_10( VAR_4 ) == 0 )
   return;

  if( VAR_10 )
   FUNC_2( VAR_0 );

  if( VAR_11 )
   FUNC_6( VAR_0 );

  if( !FUNC_7( ) )
  {

   if( VAR_10 )
    FUNC_2( VAR_2 );

   if( VAR_11 )
    FUNC_6( VAR_1 );
  }
 }
}
