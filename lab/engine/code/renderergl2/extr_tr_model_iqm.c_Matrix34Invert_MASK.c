
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;


 float FUNC_0 (float*,float*) ;
 int FUNC_1 (float*,float,float*) ;

__attribute__((used)) static void FUNC_2( float *VAR_0, float *VAR_1 )
{
 vec3_t VAR_2;
 float VAR_3, *VAR_4;

 VAR_1[ 0] = VAR_0[ 0]; VAR_1[ 1] = VAR_0[ 4]; VAR_1[ 2] = VAR_0[ 8];
 VAR_1[ 4] = VAR_0[ 1]; VAR_1[ 5] = VAR_0[ 5]; VAR_1[ 6] = VAR_0[ 9];
 VAR_1[ 8] = VAR_0[ 2]; VAR_1[ 9] = VAR_0[ 6]; VAR_1[10] = VAR_0[10];

 VAR_4 = VAR_1 + 0; VAR_3 = 1.0f / FUNC_0(VAR_4, VAR_4); FUNC_1(VAR_4, VAR_3, VAR_4);
 VAR_4 = VAR_1 + 4; VAR_3 = 1.0f / FUNC_0(VAR_4, VAR_4); FUNC_1(VAR_4, VAR_3, VAR_4);
 VAR_4 = VAR_1 + 8; VAR_3 = 1.0f / FUNC_0(VAR_4, VAR_4); FUNC_1(VAR_4, VAR_3, VAR_4);

 VAR_2[0] = VAR_0[ 3];
 VAR_2[1] = VAR_0[ 7];
 VAR_2[2] = VAR_0[11];

 VAR_1[ 3] = -FUNC_0(VAR_1 + 0, VAR_2);
 VAR_1[ 7] = -FUNC_0(VAR_1 + 4, VAR_2);
 VAR_1[11] = -FUNC_0(VAR_1 + 8, VAR_2);
}
