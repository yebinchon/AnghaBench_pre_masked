
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* m3x3_t ;



float FUNC_0( m3x3_t VAR_0 ){
 float VAR_1;

 VAR_1 = VAR_0[0] * ( VAR_0[4] * VAR_0[8] - VAR_0[7] * VAR_0[5] )
    - VAR_0[1] * ( VAR_0[3] * VAR_0[8] - VAR_0[6] * VAR_0[5] )
    + VAR_0[2] * ( VAR_0[3] * VAR_0[7] - VAR_0[6] * VAR_0[4] );

 return( VAR_1 );
}
