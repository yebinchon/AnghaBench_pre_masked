
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* m4x4_t ;



void FUNC_0( m4x4_t VAR_0 ){
 float VAR_1;

 VAR_1 = -VAR_0[3];
 VAR_0[3] = VAR_0[12];
 VAR_0[12] = VAR_1;

 VAR_1 = -VAR_0[7];
 VAR_0[7] = VAR_0[13];
 VAR_0[13] = VAR_1;

 VAR_1 = -VAR_0[11];
 VAR_0[11] = VAR_0[14];
 VAR_0[14] = VAR_1;
}
