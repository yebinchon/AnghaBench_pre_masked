
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {float uploadWidth; float uploadHeight; } ;
typedef TYPE_1__ image_t ;
struct TYPE_13__ {int projection2D; } ;
struct TYPE_12__ {int vidWidth; int vidHeight; } ;
struct TYPE_11__ {int integer; } ;
struct TYPE_10__ {int (* Milliseconds ) () ;int (* Printf ) (int ,char*,int) ;} ;
struct TYPE_9__ {int numImages; TYPE_1__** images; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 TYPE_6__ VAR_3 ;
 TYPE_5__ VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (float,float) ;
 TYPE_4__* VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,char*,int) ;
 TYPE_2__ VAR_7 ;

void FUNC_11( void ) {
 int VAR_8;
 image_t *VAR_9;
 float VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15;

 if ( !VAR_3.projection2D ) {
  FUNC_1();
 }

 FUNC_3( VAR_0 );

 FUNC_5();

 VAR_14 = VAR_6.Milliseconds();

 for ( VAR_8=0 ; VAR_8<VAR_7.numImages ; VAR_8++ ) {
  VAR_9 = VAR_7.images[VAR_8];

  VAR_12 = VAR_4.vidWidth / 20;
  VAR_13 = VAR_4.vidHeight / 15;
  VAR_10 = VAR_8 % 20 * VAR_12;
  VAR_11 = VAR_8 / 20 * VAR_13;


  if ( VAR_5->integer == 2 ) {
   VAR_12 *= VAR_9->uploadWidth / 512.0f;
   VAR_13 *= VAR_9->uploadHeight / 512.0f;
  }

  FUNC_0( VAR_9 );
  FUNC_2 (VAR_1);
  FUNC_6( 0, 0 );
  FUNC_7( VAR_10, VAR_11 );
  FUNC_6( 1, 0 );
  FUNC_7( VAR_10 + VAR_12, VAR_11 );
  FUNC_6( 1, 1 );
  FUNC_7( VAR_10 + VAR_12, VAR_11 + VAR_13 );
  FUNC_6( 0, 1 );
  FUNC_7( VAR_10, VAR_11 + VAR_13 );
  FUNC_4();
 }

 FUNC_5();

 VAR_15 = VAR_6.Milliseconds();
 VAR_6.Printf( VAR_2, "%i msec to draw all images\n", VAR_15 - VAR_14 );

}
