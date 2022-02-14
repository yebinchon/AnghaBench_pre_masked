
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vec_t ;
typedef int* vec3_t ;
typedef int plane_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int*,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

void FUNC_3( plane_t *VAR_1, vec_t VAR_2[ 2 ], vec_t VAR_3, vec_t VAR_4[ 2 ], vec_t VAR_5[ 2 ][ 4 ] ){
 vec3_t VAR_6[2];
 int VAR_7, VAR_8;
 vec_t VAR_9, VAR_10, VAR_11;
 vec_t VAR_12, VAR_13;
 int VAR_14, VAR_15;


 FUNC_0( VAR_1, VAR_6[0], VAR_6[1] );

 if ( !VAR_4[0] ) {
  VAR_4[0] = 1;
 }
 if ( !VAR_4[1] ) {
  VAR_4[1] = 1;
 }


 if ( VAR_3 == 0 ) {
  VAR_10 = 0 ; VAR_11 = 1;
 }
 else if ( VAR_3 == 90 ) {
  VAR_10 = 1 ; VAR_11 = 0;
 }
 else if ( VAR_3 == 180 ) {
  VAR_10 = 0 ; VAR_11 = -1;
 }
 else if ( VAR_3 == 270 ) {
  VAR_10 = -1 ; VAR_11 = 0;
 }
 else
 {
  VAR_9 = VAR_3 / 180 * VAR_0;
  VAR_10 = FUNC_2( VAR_9 );
  VAR_11 = FUNC_1( VAR_9 );
 }

 if ( VAR_6[0][0] ) {
  VAR_7 = 0;
 }
 else if ( VAR_6[0][1] ) {
  VAR_7 = 1;
 }
 else{
  VAR_7 = 2;
 }

 if ( VAR_6[1][0] ) {
  VAR_8 = 0;
 }
 else if ( VAR_6[1][1] ) {
  VAR_8 = 1;
 }
 else{
  VAR_8 = 2;
 }

 for ( VAR_14 = 0 ; VAR_14 < 2 ; VAR_14++ ) {
  VAR_12 = VAR_11 * VAR_6[VAR_14][VAR_7] - VAR_10 * VAR_6[VAR_14][VAR_8];
  VAR_13 = VAR_10 * VAR_6[VAR_14][VAR_7] + VAR_11 * VAR_6[VAR_14][VAR_8];
  VAR_6[VAR_14][VAR_7] = VAR_12;
  VAR_6[VAR_14][VAR_8] = VAR_13;
 }

 for ( VAR_14 = 0 ; VAR_14 < 2 ; VAR_14++ )
  for ( VAR_15 = 0 ; VAR_15 < 3 ; VAR_15++ )
   VAR_5[VAR_14][VAR_15] = VAR_6[VAR_14][VAR_15] / VAR_4[VAR_14];

 VAR_5[0][3] = VAR_2[0];
 VAR_5[1][3] = VAR_2[1];
}
