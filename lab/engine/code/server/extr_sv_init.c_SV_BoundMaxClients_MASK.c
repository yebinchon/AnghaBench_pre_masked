
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int integer; int modified; } ;


 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3( int VAR_3 ) {

 FUNC_0( "sv_maxclients", "8", 0 );

 VAR_2->modified = VAR_1;

 if ( VAR_2->integer < VAR_3 ) {
  FUNC_1( "sv_maxclients", FUNC_2("%i", VAR_3) );
 } else if ( VAR_2->integer > VAR_0 ) {
  FUNC_1( "sv_maxclients", FUNC_2("%i", VAR_0) );
 }
}
