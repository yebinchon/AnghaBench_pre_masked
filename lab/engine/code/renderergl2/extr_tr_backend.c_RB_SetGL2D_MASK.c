
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int mat4_t ;
struct TYPE_10__ {double time; double floatTime; int vertFlipBuffer; } ;
struct TYPE_8__ {int vertFlipBuffer; } ;
struct TYPE_14__ {TYPE_3__ refdef; TYPE_2__* last2DFBO; scalar_t__ projection2D; TYPE_1__ viewParms; } ;
struct TYPE_13__ {int vidWidth; int vidHeight; } ;
struct TYPE_12__ {TYPE_2__* currentFBO; } ;
struct TYPE_11__ {double (* Milliseconds ) () ;} ;
struct TYPE_9__ {int width; int height; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int,int ,int ,int,int ) ;
 TYPE_7__ VAR_4 ;
 TYPE_6__ VAR_5 ;
 TYPE_5__ VAR_6 ;
 int FUNC_6 (int ,int ,int,int) ;
 int FUNC_7 (int ,int ,int,int) ;
 scalar_t__ VAR_7 ;
 TYPE_4__ VAR_8 ;
 double FUNC_8 () ;

void FUNC_9 (void) {
 mat4_t VAR_9;
 int VAR_10, VAR_11;

 if (VAR_4.projection2D && VAR_4.last2DFBO == VAR_6.currentFBO)
  return;
 VAR_4.viewParms.vertFlipBuffer = VAR_4.refdef.vertFlipBuffer;

 VAR_4.projection2D = VAR_7;
 VAR_4.last2DFBO = VAR_6.currentFBO;

 if (VAR_6.currentFBO)
 {
  VAR_10 = VAR_6.currentFBO->width;
  VAR_11 = VAR_6.currentFBO->height;
 }
 else
 {
  VAR_10 = VAR_5.vidWidth;
  VAR_11 = VAR_5.vidHeight;
 }


 FUNC_7( 0, 0, VAR_10, VAR_11 );
 FUNC_6( 0, 0, VAR_10, VAR_11 );

 FUNC_5(0, VAR_10, VAR_11, 0, 0, 1, VAR_9);
 FUNC_2(VAR_9);
 FUNC_4(VAR_9);
 FUNC_1(VAR_9);

 FUNC_3( VAR_1 |
     VAR_3 |
     VAR_2 );

 FUNC_0( VAR_0 );


 VAR_4.refdef.time = VAR_8.Milliseconds();
 VAR_4.refdef.floatTime = VAR_4.refdef.time * 0.001;
}
