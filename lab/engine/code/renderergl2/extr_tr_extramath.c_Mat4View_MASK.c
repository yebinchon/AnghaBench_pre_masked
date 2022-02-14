
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* vec3_t ;
typedef int* mat4_t ;


 int FUNC_0 (int*,int*) ;

void FUNC_1(vec3_t VAR_0[3], vec3_t VAR_1, mat4_t VAR_2)
{
 VAR_2[0] = VAR_0[0][0];
 VAR_2[1] = VAR_0[1][0];
 VAR_2[2] = VAR_0[2][0];
 VAR_2[3] = 0;

 VAR_2[4] = VAR_0[0][1];
 VAR_2[5] = VAR_0[1][1];
 VAR_2[6] = VAR_0[2][1];
 VAR_2[7] = 0;

 VAR_2[8] = VAR_0[0][2];
 VAR_2[9] = VAR_0[1][2];
 VAR_2[10] = VAR_0[2][2];
 VAR_2[11] = 0;

 VAR_2[12] = -FUNC_0(VAR_1, VAR_0[0]);
 VAR_2[13] = -FUNC_0(VAR_1, VAR_0[1]);
 VAR_2[14] = -FUNC_0(VAR_1, VAR_0[2]);
 VAR_2[15] = 1;
}
