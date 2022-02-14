
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; scalar_t__ demoplaying; } ;
struct TYPE_3__ {int repeats; int down; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int ,unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_13 (scalar_t__,int ,int,...) ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 TYPE_2__ VAR_22 ;
 TYPE_1__* VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;

void FUNC_14( int VAR_26, unsigned VAR_27 )
{
 VAR_23[VAR_26].down = VAR_24;
 VAR_23[VAR_26].repeats++;
 if( VAR_23[VAR_26].repeats == 1 )
  VAR_20++;

 if( VAR_23[VAR_10].down && VAR_26 == VAR_12 )
 {

  if ( VAR_23[VAR_12].repeats > 1 ) {
   return;
  }

  FUNC_5( "r_fullscreen",
   !FUNC_6( "r_fullscreen" ) );
  return;
 }


 if( VAR_26 == VAR_11 || ( VAR_23[VAR_15].down && VAR_26 == VAR_13 ) )
 {
  FUNC_2 ();
  FUNC_8 ();
  return;
 }



 if ( ( VAR_26 < 128 || VAR_26 == VAR_14 ) &&
  ( VAR_22.demoplaying || VAR_22.state == VAR_1 ) && FUNC_9( ) == 0 ) {

  if (FUNC_7 ("com_cameraMode") == 0) {
   FUNC_4 ("nextdemo","");
   VAR_26 = VAR_13;
  }
 }


 if ( VAR_26 == VAR_13 ) {
  if ( FUNC_9( ) & VAR_8 ) {

   FUNC_11( VAR_26 );
   return;
  }


  if (FUNC_9( ) & VAR_6) {
   FUNC_10( FUNC_9( ) & ~VAR_6 );
   FUNC_13 (VAR_21, VAR_4, VAR_3);
   return;
  }

  if ( !( FUNC_9( ) & VAR_9 ) ) {
   if ( VAR_22.state == VAR_0 && !VAR_22.demoplaying ) {
    FUNC_13( VAR_25, VAR_19, VAR_16 );
   }
   else if ( VAR_22.state != VAR_2 ) {
    FUNC_0();
    FUNC_12();
    FUNC_13( VAR_25, VAR_19, VAR_17 );
   }
   return;
  }

  FUNC_13( VAR_25, VAR_18, VAR_26, VAR_24 );
  return;
 }


 FUNC_1( VAR_26, VAR_24, VAR_27 );


 if ( FUNC_9( ) & VAR_7 ) {
  FUNC_3( VAR_26 );
 } else if ( FUNC_9( ) & VAR_9 ) {
  if ( VAR_25 ) {
   FUNC_13( VAR_25, VAR_18, VAR_26, VAR_24 );
  }
 } else if ( FUNC_9( ) & VAR_6 ) {
  if ( VAR_21 ) {
   FUNC_13( VAR_21, VAR_5, VAR_26, VAR_24 );
  }
 } else if ( FUNC_9( ) & VAR_8 ) {
  FUNC_11( VAR_26 );
 } else if ( VAR_22.state == VAR_2 ) {
  FUNC_3( VAR_26 );
 }
}
