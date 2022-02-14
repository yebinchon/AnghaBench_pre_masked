
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int stencilBits; } ;
struct TYPE_5__ {int integer; } ;
struct TYPE_4__ {int whiteImage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 TYPE_3__ VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (float,float,float) ;
 int FUNC_5 (int,int,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int,int,int) ;
 TYPE_2__* VAR_9 ;
 TYPE_1__ VAR_10 ;

void FUNC_12( void ) {
 if ( VAR_9->integer != 2 ) {
  return;
 }
 if ( VAR_8.stencilBits < 4 ) {
  return;
 }
 FUNC_7( VAR_7 );
 FUNC_10( VAR_5, 0, 255 );

 FUNC_6 (VAR_4);
 FUNC_1( VAR_0 );

 FUNC_0( VAR_10.whiteImage );

    FUNC_9 ();

 FUNC_4( 0.6f, 0.6f, 0.6f );
 FUNC_2( VAR_1 | VAR_3 | VAR_2 );




 FUNC_3( VAR_6 );
 FUNC_11( -100, 100, -10 );
 FUNC_11( 100, 100, -10 );
 FUNC_11( 100, -100, -10 );
 FUNC_11( -100, -100, -10 );
 FUNC_8 ();

 FUNC_5(1,1,1,1);
 FUNC_6( VAR_7 );
}
