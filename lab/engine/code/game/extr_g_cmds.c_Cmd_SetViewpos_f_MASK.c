
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * vec3_t ;
typedef int gentity_t ;
typedef int buffer ;
struct TYPE_2__ {int integer; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *) ;
 size_t VAR_1 ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (int *,char*) ;

void FUNC_6( gentity_t *VAR_4 ) {
 vec3_t VAR_5, VAR_6;
 char VAR_7[VAR_0];
 int VAR_8;

 if ( !VAR_2.integer ) {
  FUNC_5( VAR_4-VAR_3, "print \"Cheats are not enabled on this server.\n\"");
  return;
 }
 if ( FUNC_3() != 5 ) {
  FUNC_5( VAR_4-VAR_3, "print \"usage: setviewpos x y z yaw\n\"");
  return;
 }

 FUNC_1( VAR_6 );
 for ( VAR_8 = 0 ; VAR_8 < 3 ; VAR_8++ ) {
  FUNC_4( VAR_8 + 1, VAR_7, sizeof( VAR_7 ) );
  VAR_5[VAR_8] = FUNC_2( VAR_7 );
 }

 FUNC_4( 4, VAR_7, sizeof( VAR_7 ) );
 VAR_6[VAR_1] = FUNC_2( VAR_7 );

 FUNC_0( VAR_4, VAR_5, VAR_6 );
}
