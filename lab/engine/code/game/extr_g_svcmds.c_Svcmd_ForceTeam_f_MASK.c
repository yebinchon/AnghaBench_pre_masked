
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int str ;
typedef int gclient_t ;
struct TYPE_2__ {int * clients; } ;


 int * FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,char*) ;
 int * VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*,int) ;

void FUNC_5( void ) {
 gclient_t *VAR_3;
 char VAR_4[VAR_0];

 if ( FUNC_3() < 3 ) {
  FUNC_1("Usage: forceteam <player> <team>\n");
  return;
 }


 FUNC_4( 1, VAR_4, sizeof( VAR_4 ) );
 VAR_3 = FUNC_0( VAR_4 );
 if ( !VAR_3 ) {
  return;
 }


 FUNC_4( 2, VAR_4, sizeof( VAR_4 ) );
 FUNC_2( &VAR_1[VAR_3 - VAR_2.clients], VAR_4 );
}
