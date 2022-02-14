
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int integer; } ;
struct TYPE_3__ {int integer; } ;


 char const* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int *) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 () ;
 int * VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;

void FUNC_4( void ) {


 if ( !VAR_4 ) {
  return;
 }

 if ( !(VAR_7 & VAR_1 ) ) {
  return;
 }
 VAR_7 &= ~VAR_1;

 if ( !VAR_6->integer ) {
  return;
 }

 FUNC_1( VAR_2 );



 if(!VAR_5->integer)
 {
  const char *VAR_8;
  VAR_8 = FUNC_2( "fs_game" );
  if (FUNC_3() && VAR_8[0] != 0) {
   FUNC_0( VAR_8, &VAR_3[16] );
  } else {
   FUNC_0( VAR_0, VAR_3 );
  }
 }

}
