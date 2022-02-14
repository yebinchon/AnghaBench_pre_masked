
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int * VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (char*) ;

void FUNC_4( char *VAR_3 ){

 if ( VAR_3 == ((void*)0) || VAR_3[ 0 ] == '\0' || VAR_2 >= VAR_0 ) {
  return;
 }


 VAR_1[ VAR_2 ] = FUNC_1( FUNC_3( VAR_3 ) + 1 );
 FUNC_2( VAR_1[ VAR_2 ], VAR_3 );
 FUNC_0( VAR_1[ VAR_2 ] );
 VAR_2++;
}
