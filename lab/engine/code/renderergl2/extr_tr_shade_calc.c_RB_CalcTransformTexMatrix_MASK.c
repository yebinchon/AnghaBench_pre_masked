
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float** matrix; float* translate; } ;
typedef TYPE_1__ texModInfo_t ;



void FUNC_0( const texModInfo_t *VAR_0, float *VAR_1 )
{
 VAR_1[0] = VAR_0->matrix[0][0]; VAR_1[2] = VAR_0->matrix[1][0]; VAR_1[4] = VAR_0->translate[0];
 VAR_1[1] = VAR_0->matrix[0][1]; VAR_1[3] = VAR_0->matrix[1][1]; VAR_1[5] = VAR_0->translate[1];
}
