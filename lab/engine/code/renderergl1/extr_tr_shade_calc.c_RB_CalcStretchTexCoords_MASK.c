
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int waveForm_t ;
struct TYPE_3__ {float** matrix; float* translate; } ;
typedef TYPE_1__ texModInfo_t ;


 float FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*,float*) ;

void FUNC_2( const waveForm_t *VAR_0, float *VAR_1 )
{
 float VAR_2;
 texModInfo_t VAR_3;

 VAR_2 = 1.0f / FUNC_0( VAR_0 );

 VAR_3.matrix[0][0] = VAR_2;
 VAR_3.matrix[1][0] = 0;
 VAR_3.translate[0] = 0.5f - 0.5f * VAR_2;

 VAR_3.matrix[0][1] = 0;
 VAR_3.matrix[1][1] = VAR_2;
 VAR_3.translate[1] = 0.5f - 0.5f * VAR_2;

 FUNC_1( &VAR_3, VAR_1 );
}
