
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
typedef int cmd ;
typedef int buf ;
struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_3__ {int * binding; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,char,char*,int,unsigned int) ;
 scalar_t__ FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (char*,int *,int) ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_5 (char) ;
 TYPE_1__* VAR_3 ;
 char* FUNC_6 (char*,char) ;

void FUNC_7( int VAR_4, qboolean VAR_5, unsigned VAR_6 )
{
 char VAR_7[ VAR_1 ], *VAR_8 = VAR_7, *VAR_9;
 qboolean VAR_10, VAR_11;

 if( VAR_2.state == VAR_0 && FUNC_3( ) == 0 )
  return;
 if( !VAR_3[VAR_4].binding || !VAR_3[VAR_4].binding[0] )
  return;
 FUNC_4( VAR_7, VAR_3[VAR_4].binding, sizeof( VAR_7 ) );


 VAR_10 = ( FUNC_3( ) == 0 );


 VAR_11 = ( VAR_2.state != VAR_0 );

 while( 1 )
 {
  while( FUNC_5( *VAR_8 ) )
   VAR_8++;
  VAR_9 = FUNC_6( VAR_8, ';' );
  if( VAR_9 )
   *VAR_9 = '\0';
  if( *VAR_8 == '+' )
  {



   if ( VAR_10 || ( VAR_11 && !VAR_5 ) ) {
    char VAR_12[1024];
    FUNC_2( VAR_12, sizeof( VAR_12 ), "%c%s %d %d\n",
     ( VAR_5 ) ? '+' : '-', VAR_8 + 1, VAR_4, VAR_6 );
    FUNC_1( VAR_12 );
   }
  }
  else if( VAR_5 )
  {

   if ( VAR_10 || FUNC_0( VAR_8 ) ) {
    FUNC_1( VAR_8 );
    FUNC_1( "\n" );
   }
  }
  if( !VAR_9 )
   break;
  VAR_8 = VAR_9 + 1;
 }
}
