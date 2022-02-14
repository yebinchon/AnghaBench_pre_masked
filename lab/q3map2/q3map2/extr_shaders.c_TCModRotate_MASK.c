
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float** tcMod_t ;


 float VAR_0 ;
 int FUNC_0 (float**) ;
 int FUNC_1 (float**,float**,float**) ;
 float FUNC_2 (float) ;
 int FUNC_3 (float**,float**,int) ;
 float FUNC_4 (float) ;

void FUNC_5( tcMod_t VAR_1, float VAR_2 ){
 tcMod_t VAR_3, VAR_4;
 float VAR_5, VAR_6, VAR_7;


 FUNC_3( VAR_3, VAR_1, sizeof( tcMod_t ) );
 FUNC_0( VAR_4 );

 VAR_5 = VAR_2 / 180 * VAR_0;
 VAR_6 = FUNC_4( VAR_5 );
 VAR_7 = FUNC_2( VAR_5 );

 VAR_4[ 0 ][ 0 ] = VAR_7; VAR_4[ 0 ][ 1 ] = -VAR_6;
 VAR_4[ 1 ][ 0 ] = VAR_6; VAR_4[ 1 ][ 1 ] = VAR_7;

 FUNC_1( VAR_3, VAR_4, VAR_1 );
}
