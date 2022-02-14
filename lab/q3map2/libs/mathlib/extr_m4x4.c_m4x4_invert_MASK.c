
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* m4x4_t ;
typedef int m3x3_t ;


 double FUNC_0 (float) ;
 int FUNC_1 (int ) ;
 float FUNC_2 (int*) ;
 int FUNC_3 (int*,int ,int,int) ;
 int FUNC_4 (int*,int*,int) ;

int FUNC_5( m4x4_t VAR_0 ){
 float VAR_1 = FUNC_2( VAR_0 );
 m3x3_t VAR_2;
 int VAR_3, VAR_4, VAR_5;
 m4x4_t VAR_6;

 if ( FUNC_0( VAR_1 ) < 0.0000000001 ) {
  return 1;
 }

 FUNC_4( VAR_6, VAR_0, sizeof( m4x4_t ) );

 for ( VAR_3 = 0; VAR_3 < 4; VAR_3++ )
  for ( VAR_4 = 0; VAR_4 < 4; VAR_4++ )
  {
   VAR_5 = 1 - ( ( VAR_3 + VAR_4 ) % 2 ) * 2;

   FUNC_3( VAR_6, VAR_2, VAR_3, VAR_4 );

   VAR_0[VAR_3 + VAR_4 * 4] = ( FUNC_1( VAR_2 ) * VAR_5 ) / VAR_1;
  }

 return 0;
}
