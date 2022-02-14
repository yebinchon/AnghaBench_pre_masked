
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* StartBackgroundTrack ) (int *,int *) ;} ;


 int FUNC_0 () ;
 int * FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

void FUNC_5( void ) {
 int VAR_1;

 if( !VAR_0.StartBackgroundTrack ) {
  return;
 }

 VAR_1 = FUNC_0();

 if ( VAR_1 == 2 ) {
  VAR_0.StartBackgroundTrack( FUNC_1(1), ((void*)0) );
 } else if ( VAR_1 == 3 ) {
  VAR_0.StartBackgroundTrack( FUNC_1(1), FUNC_1(2) );
 } else {
  FUNC_2 ("Usage: music <musicfile> [loopfile]\n");
  return;
 }

}
