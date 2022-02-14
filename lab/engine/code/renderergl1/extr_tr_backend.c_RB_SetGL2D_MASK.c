
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {double time; double floatTime; scalar_t__ vertFlipBuffer; } ;
struct TYPE_6__ {scalar_t__ vertFlipBuffer; } ;
struct TYPE_10__ {TYPE_2__ refdef; TYPE_1__ viewParms; int projection2D; } ;
struct TYPE_9__ {int vidHeight; int vidWidth; } ;
struct TYPE_8__ {double (* Milliseconds ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 TYPE_5__ VAR_7 ;
 TYPE_4__ VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int VAR_9 ;
 TYPE_3__ VAR_10 ;
 double FUNC_8 () ;

void FUNC_9 (void) {
 VAR_7.projection2D = VAR_9;
 VAR_7.viewParms.vertFlipBuffer = VAR_7.refdef.vertFlipBuffer;


 FUNC_7( 0, 0, VAR_8.vidWidth, VAR_8.vidHeight );
 FUNC_6( 0, 0, VAR_8.vidWidth, VAR_8.vidHeight );
 FUNC_4(VAR_6);
    FUNC_3 ();
 if(VAR_7.viewParms.vertFlipBuffer)
 {
  FUNC_5 (0, VAR_8.vidWidth, 0, VAR_8.vidHeight, 0, 1);
 }
 else
 {
  FUNC_5 (0, VAR_8.vidWidth, VAR_8.vidHeight, 0, 0, 1);
 }
 FUNC_4(VAR_5);
    FUNC_3 ();

 FUNC_1( VAR_1 |
     VAR_3 |
     VAR_2 );

 FUNC_0( VAR_0 );
 FUNC_2( VAR_4 );


 VAR_7.refdef.time = VAR_10.Milliseconds();
 VAR_7.refdef.floatTime = VAR_7.refdef.time * 0.001;
}
