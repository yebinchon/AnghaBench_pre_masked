
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (int) ;
 int VAR_0 ;
 float VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (float) ;
 int** VAR_4 ;
 size_t VAR_5 ;
 int FUNC_3 (float) ;

void FUNC_4( void ){
 int VAR_6, VAR_7;
 float VAR_8, VAR_9, VAR_10, VAR_11;



 FUNC_1( VAR_3, "--- SetupDirt ---\n" );


 VAR_10 = FUNC_0( 360.0f / VAR_1 );
 VAR_11 = FUNC_0( VAR_0 / VAR_2 );


 VAR_8 = 0.0f;
 for ( VAR_6 = 0, VAR_8 = 0.0f; VAR_6 < VAR_1; VAR_6++, VAR_8 += VAR_10 )
 {

  for ( VAR_7 = 0, VAR_9 = VAR_11 * 0.5f; VAR_7 < VAR_2; VAR_7++, VAR_9 += VAR_11 )
  {
   VAR_4[ VAR_5 ][ 0 ] = FUNC_3( VAR_9 ) * FUNC_2( VAR_8 );
   VAR_4[ VAR_5 ][ 1 ] = FUNC_3( VAR_9 ) * FUNC_3( VAR_8 );
   VAR_4[ VAR_5 ][ 2 ] = FUNC_2( VAR_9 );
   VAR_5++;
  }
 }


 FUNC_1( VAR_3, "%9d dirtmap vectors\n", VAR_5 );
}
