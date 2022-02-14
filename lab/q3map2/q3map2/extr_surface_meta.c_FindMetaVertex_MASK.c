
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bspDrawVert_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 int * VAR_3 ;
 int VAR_4 ;
 int * FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4( bspDrawVert_t *VAR_5 ){
 int VAR_6;
 bspDrawVert_t *VAR_7, *VAR_8;



 for ( VAR_6 = VAR_1, VAR_7 = &VAR_3[ VAR_6 ]; VAR_6 < VAR_4; VAR_6++, VAR_7++ )
 {
  if ( FUNC_1( VAR_5, VAR_7, sizeof( bspDrawVert_t ) ) == 0 ) {
   return VAR_6;
  }
 }


 if ( VAR_4 >= VAR_2 ) {

  VAR_2 += VAR_0;
  VAR_8 = FUNC_3( VAR_2 * sizeof( bspDrawVert_t ) );
  if ( VAR_3 != ((void*)0) ) {
   FUNC_2( VAR_8, VAR_3, VAR_4 * sizeof( bspDrawVert_t ) );
   FUNC_0( VAR_3 );
  }
  VAR_3 = VAR_8;
 }


 FUNC_2( &VAR_3[ VAR_4 ], VAR_5, sizeof( bspDrawVert_t ) );
 VAR_4++;


 return ( VAR_4 - 1 );
}
