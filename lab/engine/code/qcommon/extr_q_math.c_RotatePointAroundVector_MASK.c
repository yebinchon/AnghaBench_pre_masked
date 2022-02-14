
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zrot ;
typedef float* vec3_t ;
typedef int im ;


 int FUNC_0 (float*,float*,float*) ;
 float FUNC_1 (float) ;
 int FUNC_2 (float**,float**,float**) ;
 int FUNC_3 (float*,float* const) ;
 float FUNC_4 (float) ;
 int FUNC_5 (float**,float**,int) ;
 int FUNC_6 (float**,int ,int) ;
 float FUNC_7 (float) ;

void FUNC_8( vec3_t VAR_0, const vec3_t VAR_1, const vec3_t VAR_2,
        float VAR_3 ) {
 float VAR_4[3][3];
 float VAR_5[3][3];
 float VAR_6[3][3];
 float VAR_7[3][3];
 float VAR_8[3][3];
 int VAR_9;
 vec3_t VAR_10, VAR_11, VAR_12;
 float VAR_13;

 VAR_12[0] = VAR_1[0];
 VAR_12[1] = VAR_1[1];
 VAR_12[2] = VAR_1[2];

 FUNC_3( VAR_10, VAR_1 );
 FUNC_0( VAR_10, VAR_12, VAR_11 );

 VAR_4[0][0] = VAR_10[0];
 VAR_4[1][0] = VAR_10[1];
 VAR_4[2][0] = VAR_10[2];

 VAR_4[0][1] = VAR_11[0];
 VAR_4[1][1] = VAR_11[1];
 VAR_4[2][1] = VAR_11[2];

 VAR_4[0][2] = VAR_12[0];
 VAR_4[1][2] = VAR_12[1];
 VAR_4[2][2] = VAR_12[2];

 FUNC_5( VAR_5, VAR_4, sizeof( VAR_5 ) );

 VAR_5[0][1] = VAR_4[1][0];
 VAR_5[0][2] = VAR_4[2][0];
 VAR_5[1][0] = VAR_4[0][1];
 VAR_5[1][2] = VAR_4[2][1];
 VAR_5[2][0] = VAR_4[0][2];
 VAR_5[2][1] = VAR_4[1][2];

 FUNC_6( VAR_6, 0, sizeof( VAR_6 ) );
 VAR_6[0][0] = VAR_6[1][1] = VAR_6[2][2] = 1.0F;

 VAR_13 = FUNC_1( VAR_3 );
 VAR_6[0][0] = FUNC_4( VAR_13 );
 VAR_6[0][1] = FUNC_7( VAR_13 );
 VAR_6[1][0] = -FUNC_7( VAR_13 );
 VAR_6[1][1] = FUNC_4( VAR_13 );

 FUNC_2( VAR_4, VAR_6, VAR_7 );
 FUNC_2( VAR_7, VAR_5, VAR_8 );

 for ( VAR_9 = 0; VAR_9 < 3; VAR_9++ ) {
  VAR_0[VAR_9] = VAR_8[VAR_9][0] * VAR_2[0] + VAR_8[VAR_9][1] * VAR_2[1] + VAR_8[VAR_9][2] * VAR_2[2];
 }
}
