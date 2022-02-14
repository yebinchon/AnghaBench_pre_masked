
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ stereoFrame; float fovY; float fovX; int* projectionMatrix; scalar_t__ vertFlipBuffer; } ;
typedef TYPE_2__ viewParms_t ;
typedef scalar_t__ qboolean ;
struct TYPE_10__ {float value; } ;
struct TYPE_7__ {scalar_t__ vertFlipBuffer; } ;
struct TYPE_9__ {TYPE_1__ refdef; } ;


 float VAR_0 ;
 int FUNC_0 (TYPE_2__*,float,float,float,float,float) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 float FUNC_1 (float) ;
 TYPE_3__ VAR_4 ;

void FUNC_2(viewParms_t *VAR_5, float VAR_6, qboolean VAR_7)
{
 float VAR_8, VAR_9, VAR_10, VAR_11;
 float VAR_12, VAR_13, VAR_14 = VAR_3->value;






 if(VAR_14 != 0)
 {
  if(VAR_5->stereoFrame == VAR_1)
   VAR_14 = VAR_6 / VAR_14;
  else if(VAR_5->stereoFrame == VAR_2)
   VAR_14 = VAR_6 / -VAR_14;
  else
   VAR_14 = 0;
 }

 VAR_11 = VAR_6 * FUNC_1(VAR_5->fovY * VAR_0 / 360.0f);
 VAR_10 = -VAR_11;

 VAR_9 = VAR_6 * FUNC_1(VAR_5->fovX * VAR_0 / 360.0f);
 VAR_8 = -VAR_9;

 VAR_12 = VAR_9 - VAR_8;
 VAR_13 = VAR_4.refdef.vertFlipBuffer ? VAR_10 - VAR_11 : VAR_11 - VAR_10;

 VAR_5->projectionMatrix[0] = 2 * VAR_6 / VAR_12;
 VAR_5->projectionMatrix[4] = 0;
 VAR_5->projectionMatrix[8] = (VAR_9 + VAR_8 + 2 * VAR_14) / VAR_12;
 VAR_5->projectionMatrix[12] = 2 * VAR_6 * VAR_14 / VAR_12;

 VAR_5->projectionMatrix[1] = 0;
 VAR_5->projectionMatrix[5] = 2 * VAR_6 / VAR_13;
 VAR_5->projectionMatrix[9] = ( VAR_11 + VAR_10 ) / VAR_13;
 VAR_5->projectionMatrix[13] = 0;

 VAR_5->projectionMatrix[3] = 0;
 VAR_5->projectionMatrix[7] = 0;
 VAR_5->projectionMatrix[11] = -1;
 VAR_5->projectionMatrix[15] = 0;

 VAR_5->vertFlipBuffer = VAR_4.refdef.vertFlipBuffer;


 if(VAR_7)
  FUNC_0(VAR_5, VAR_8, VAR_9, VAR_11, VAR_6, VAR_14);
}
