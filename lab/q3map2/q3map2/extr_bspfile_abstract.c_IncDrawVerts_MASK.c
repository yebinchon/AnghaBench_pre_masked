
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bspDrawVert_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_3 (int *,int) ;
 int * FUNC_4 (int,char*) ;

void FUNC_5(){
 VAR_2++;

 if ( VAR_1 == 0 ) {
  VAR_3 = VAR_0 / 37;

  VAR_1 = FUNC_4( sizeof( bspDrawVert_t ) * VAR_3, "IncDrawVerts" );

 }
 else if ( VAR_2 > VAR_3 ) {
  bspDrawVert_t *VAR_4;

  VAR_3 *= 3;
  VAR_3 /= 2;

  if ( VAR_3 > VAR_0 ) {
   VAR_3 = VAR_0;
  }

  VAR_4 = FUNC_3( VAR_1, sizeof( bspDrawVert_t ) * VAR_3 );

  if ( !VAR_4 ) {
   FUNC_1 (VAR_1);
   FUNC_0( "realloc() failed (IncDrawVerts)" );
  }

  VAR_1 = VAR_4;
 }

 FUNC_2( VAR_1 + ( VAR_2 - 1 ), 0, sizeof( bspDrawVert_t ) );
}
