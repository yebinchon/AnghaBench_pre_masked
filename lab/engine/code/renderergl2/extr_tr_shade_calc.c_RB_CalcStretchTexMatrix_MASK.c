
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int waveForm_t ;


 float FUNC_0 (int const*) ;

void FUNC_1( const waveForm_t *VAR_0, float *VAR_1 )
{
 float VAR_2;

 VAR_2 = 1.0f / FUNC_0( VAR_0 );

 VAR_1[0] = VAR_2; VAR_1[2] = 0; VAR_1[4] = 0.5f - 0.5f * VAR_2;
 VAR_1[1] = 0; VAR_1[3] = VAR_2; VAR_1[5] = 0.5f - 0.5f * VAR_2;
}
