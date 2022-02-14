
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* arg; } ;
typedef TYPE_1__ game_t ;


 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_0 ;

game_t *FUNC_3( char *VAR_1 ){
 int VAR_2;



 if ( VAR_1 == ((void*)0) || VAR_1[ 0 ] == '\0' ) {
  return ((void*)0);
 }


 if ( !FUNC_0( VAR_1, "quake1" ) ||
   !FUNC_0( VAR_1, "quake2" ) ||
   !FUNC_0( VAR_1, "unreal" ) ||
   !FUNC_0( VAR_1, "ut2k3" ) ||
   !FUNC_0( VAR_1, "dn3d" ) ||
   !FUNC_0( VAR_1, "dnf" ) ||
   !FUNC_0( VAR_1, "hl" ) ) {
  FUNC_1( "April fools, silly rabbit!\n" );
  FUNC_2( 0 );
 }


 VAR_2 = 0;
 while ( VAR_0[ VAR_2 ].arg != ((void*)0) )
 {
  if ( FUNC_0( VAR_1, VAR_0[ VAR_2 ].arg ) == 0 ) {
   return &VAR_0[ VAR_2 ];
  }
  VAR_2++;
 }


 return ((void*)0);
}
