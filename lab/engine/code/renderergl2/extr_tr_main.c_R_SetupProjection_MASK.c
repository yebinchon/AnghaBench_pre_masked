
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ stereoFrame; float fovY; float fovX; int* projectionMatrix; } ;
typedef TYPE_1__ viewParms_t ;
typedef scalar_t__ qboolean ;
struct TYPE_6__ {float value; } ;


 float VAR_0 ;
 int FUNC_0 (TYPE_1__*,float,float,float,float,float,float) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 float FUNC_1 (float) ;

void FUNC_2(viewParms_t *VAR_4, float VAR_5, float VAR_6, qboolean VAR_7)
{
 float VAR_8, VAR_9, VAR_10, VAR_11;
 float VAR_12, VAR_13, VAR_14 = VAR_3->value;






 if(VAR_14 != 0)
 {
  if(VAR_4->stereoFrame == VAR_1)
   VAR_14 = VAR_5 / VAR_14;
  else if(VAR_4->stereoFrame == VAR_2)
   VAR_14 = VAR_5 / -VAR_14;
  else
   VAR_14 = 0;
 }

 VAR_11 = VAR_5 * FUNC_1(VAR_4->fovY * VAR_0 / 360.0f);
 VAR_10 = -VAR_11;

 VAR_9 = VAR_5 * FUNC_1(VAR_4->fovX * VAR_0 / 360.0f);
 VAR_8 = -VAR_9;

 VAR_12 = VAR_9 - VAR_8;
 VAR_13 = VAR_11 - VAR_10;

 VAR_4->projectionMatrix[0] = 2 * VAR_5 / VAR_12;
 VAR_4->projectionMatrix[4] = 0;
 VAR_4->projectionMatrix[8] = (VAR_9 + VAR_8 + 2 * VAR_14) / VAR_12;
 VAR_4->projectionMatrix[12] = 2 * VAR_5 * VAR_14 / VAR_12;

 VAR_4->projectionMatrix[1] = 0;
 VAR_4->projectionMatrix[5] = 2 * VAR_5 / VAR_13;
 VAR_4->projectionMatrix[9] = ( VAR_11 + VAR_10 ) / VAR_13;
 VAR_4->projectionMatrix[13] = 0;

 VAR_4->projectionMatrix[3] = 0;
 VAR_4->projectionMatrix[7] = 0;
 VAR_4->projectionMatrix[11] = -1;
 VAR_4->projectionMatrix[15] = 0;


 if(VAR_7)
  FUNC_0(VAR_4, VAR_8, VAR_9, VAR_11, VAR_5, VAR_6, VAR_14);
}
