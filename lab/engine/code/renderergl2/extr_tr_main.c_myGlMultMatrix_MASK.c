
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0( const float *VAR_0, const float *VAR_1, float *VAR_2 ) {
 int VAR_3, VAR_4;

 for ( VAR_3 = 0 ; VAR_3 < 4 ; VAR_3++ ) {
  for ( VAR_4 = 0 ; VAR_4 < 4 ; VAR_4++ ) {
   VAR_2[ VAR_3 * 4 + VAR_4 ] =
    VAR_0 [ VAR_3 * 4 + 0 ] * VAR_1 [ 0 * 4 + VAR_4 ]
    + VAR_0 [ VAR_3 * 4 + 1 ] * VAR_1 [ 1 * 4 + VAR_4 ]
    + VAR_0 [ VAR_3 * 4 + 2 ] * VAR_1 [ 2 * 4 + VAR_4 ]
    + VAR_0 [ VAR_3 * 4 + 3 ] * VAR_1 [ 3 * 4 + VAR_4 ];
  }
 }
}
