
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ viewportWidth; scalar_t__ viewportHeight; int zFar; int frameCount; int frameSceneNum; } ;
typedef TYPE_2__ viewParms_t ;
struct TYPE_10__ {int value; } ;
struct TYPE_7__ {int numDrawSurfs; scalar_t__ drawSurfs; } ;
struct TYPE_9__ {TYPE_1__ refdef; TYPE_2__ viewParms; int viewCount; int frameCount; int frameSceneNum; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_4 (scalar_t__,int) ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 TYPE_3__ VAR_3 ;

void FUNC_5 (viewParms_t *VAR_4) {
 int VAR_5;
 int VAR_6;

 if ( VAR_4->viewportWidth <= 0 || VAR_4->viewportHeight <= 0 ) {
  return;
 }

 VAR_3.viewCount++;

 VAR_3.viewParms = *VAR_4;
 VAR_3.viewParms.frameSceneNum = VAR_3.frameSceneNum;
 VAR_3.viewParms.frameCount = VAR_3.frameCount;

 VAR_5 = VAR_3.refdef.numDrawSurfs;

 VAR_3.viewCount++;


 FUNC_2 ();

 FUNC_3(&VAR_3.viewParms, VAR_2->value, VAR_3.viewParms.zFar, VAR_1);

 FUNC_1();




 VAR_6 = VAR_3.refdef.numDrawSurfs;
 if ( VAR_6 > VAR_0 ) {
  VAR_6 = VAR_0;
 }

 FUNC_4( VAR_3.refdef.drawSurfs + VAR_5, VAR_6 - VAR_5 );


 FUNC_0();
}
