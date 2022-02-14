
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 size_t VAR_0 ;
 int FUNC_1 (int *) ;
 int ** VAR_1 ;
 size_t VAR_2 ;
 int * FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (char*) ;

void FUNC_6( char *VAR_3 ){
 int VAR_4;


 if ( VAR_3 == ((void*)0) || VAR_3[ 0 ] == '\0' || VAR_2 >= VAR_0 ) {
  return;
 }


 VAR_1[ VAR_2 ] = FUNC_2( FUNC_5( VAR_3 ) + 1 );
 FUNC_4( VAR_1[ VAR_2 ], VAR_3 );
 FUNC_0( VAR_1[ VAR_2 ] );
 VAR_2++;


 for ( VAR_4 = 0; VAR_4 < VAR_2 - 1; VAR_4++ )
 {
  if ( FUNC_3( VAR_1[VAR_4], VAR_1[VAR_2 - 1] ) == 0 ) {
   FUNC_1( VAR_1[VAR_2 - 1] );
   VAR_1[VAR_2 - 1] = ((void*)0);
   VAR_2--;
   break;
  }
 }

}
