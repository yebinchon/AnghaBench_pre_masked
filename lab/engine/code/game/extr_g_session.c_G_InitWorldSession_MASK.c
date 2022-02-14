
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int s ;
struct TYPE_4__ {int integer; } ;
struct TYPE_3__ {int newSession; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,char*,int) ;

void FUNC_3( void ) {
 char VAR_4[VAR_0];
 int VAR_5;

 FUNC_2( "session", VAR_4, sizeof(VAR_4) );
 VAR_5 = FUNC_1( VAR_4 );



 if ( VAR_1.integer != VAR_5 ) {
  VAR_2.newSession = VAR_3;
  FUNC_0( "Gametype changed, clearing session data.\n" );
 }
}
