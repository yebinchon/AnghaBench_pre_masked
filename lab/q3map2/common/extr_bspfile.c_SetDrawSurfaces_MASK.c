
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dsurface_t ;
typedef int drawVert_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int,char*) ;

void FUNC_3( int VAR_3 ){
 if ( VAR_0 != 0 ) {
  FUNC_0( VAR_0 );
 }

 VAR_1 = VAR_3;
 VAR_2 = VAR_1;

 VAR_0 = FUNC_2( sizeof( dsurface_t ) * VAR_2, "IncDrawSurfaces" );

 FUNC_1( VAR_0, 0, VAR_3 * sizeof( drawVert_t ) );
}
