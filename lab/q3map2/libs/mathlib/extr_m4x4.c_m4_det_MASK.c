
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float* m4x4_t ;
typedef int m3x3_t ;


 float FUNC_0 (int ) ;
 int FUNC_1 (float*,int ,int ,int) ;

float FUNC_2( m4x4_t VAR_0 ){
 float VAR_1, VAR_2 = 0, VAR_3 = 1;
 m3x3_t VAR_4;
 int VAR_5;

 for ( VAR_5 = 0; VAR_5 < 4; VAR_5++, VAR_3 *= -1 )
 {
  FUNC_1( VAR_0, VAR_4, 0, VAR_5 );

  VAR_1 = FUNC_0( VAR_4 );
  VAR_2 += VAR_0[VAR_5] * VAR_1 * VAR_3;
 }

 return VAR_2;
}
