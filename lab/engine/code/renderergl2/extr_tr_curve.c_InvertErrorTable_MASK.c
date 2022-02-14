
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int copy ;


 int FUNC_0 (float**,float**,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1( float VAR_1[2][VAR_0], int VAR_2, int VAR_3 ) {
 int VAR_4;
 float VAR_5[2][VAR_0];

 FUNC_0( VAR_5, VAR_1, sizeof( VAR_5 ) );

 for ( VAR_4 = 0 ; VAR_4 < VAR_2 ; VAR_4++ ) {
  VAR_1[1][VAR_4] = VAR_5[0][VAR_4];
 }

 for ( VAR_4 = 0 ; VAR_4 < VAR_3 ; VAR_4++ ) {
  VAR_1[0][VAR_4] = VAR_5[1][VAR_3-1-VAR_4];
 }

}
