
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; } ;
struct TYPE_3__ {double displayFrac; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (double) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;

void FUNC_4( void ) {

 FUNC_0 ();


 if ( VAR_4.state == VAR_1 ) {
  if ( !( FUNC_3( ) & (VAR_3 | VAR_2)) ) {
   FUNC_2( 1.0 );
   return;
  }
 }

 if ( VAR_5.displayFrac ) {
  FUNC_2( VAR_5.displayFrac );
 } else {

  if ( VAR_4.state == VAR_0 ) {
   FUNC_1 ();
  }
 }
}
