
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float zFar; float* projectionMatrix; } ;
typedef TYPE_1__ viewParms_t ;
struct TYPE_5__ {float value; } ;


 TYPE_2__* VAR_0 ;

void FUNC_0(viewParms_t *VAR_1)
{
 float VAR_2, VAR_3, VAR_4;

 VAR_2 = VAR_0->value;
 VAR_3 = VAR_1->zFar;
 VAR_4 = VAR_3 - VAR_2;

 VAR_1->projectionMatrix[2] = 0;
 VAR_1->projectionMatrix[6] = 0;
 VAR_1->projectionMatrix[10] = -( VAR_3 + VAR_2 ) / VAR_4;
 VAR_1->projectionMatrix[14] = -2 * VAR_3 * VAR_2 / VAR_4;
}
