
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* vec3_t ;



float *FUNC_0( float VAR_0, float VAR_1, float VAR_2 ) {
 static int VAR_3;
 static vec3_t VAR_4[8];
 float *VAR_5;



 VAR_5 = VAR_4[VAR_3];
 VAR_3 = (VAR_3 + 1)&7;

 VAR_5[0] = VAR_0;
 VAR_5[1] = VAR_1;
 VAR_5[2] = VAR_2;

 return VAR_5;
}
