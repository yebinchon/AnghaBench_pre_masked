
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dshader_t ;
typedef int drawVerts ;
typedef int drawSurfaces ;
typedef int drawIndexes ;
typedef int dplane_t ;
typedef int dnode_t ;
typedef int dmodel_t ;
typedef int dleafsurfaces ;
typedef int dleafbrushes ;
typedef int dleaf_t ;
typedef int dfog_t ;
typedef int dbrushside_t ;
typedef int dbrush_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

void FUNC_2( void ) {
 if ( !VAR_10 ) {
  FUNC_0();
 }

 FUNC_1( "%6i models       %7i\n"
    ,VAR_16, (int)( VAR_16 * sizeof( dmodel_t ) ) );
 FUNC_1( "%6i shaders      %7i\n"
    ,VAR_8, (int)( VAR_8 * sizeof( dshader_t ) ) );
 FUNC_1( "%6i brushes      %7i\n"
    ,VAR_11, (int)( VAR_11 * sizeof( dbrush_t ) ) );
 FUNC_1( "%6i brushsides   %7i\n"
    ,VAR_12, (int)( VAR_12 * sizeof( dbrushside_t ) ) );
 FUNC_1( "%6i fogs         %7i\n"
    ,VAR_6, (int)( VAR_6 * sizeof( dfog_t ) ) );
 FUNC_1( "%6i planes       %7i\n"
    ,VAR_18, (int)( VAR_18 * sizeof( dplane_t ) ) );
 FUNC_1( "%6i entdata      %7i\n", VAR_10, VAR_2 );

 FUNC_1( "\n" );

 FUNC_1( "%6i nodes        %7i\n"
    ,VAR_17, (int)( VAR_17 * sizeof( dnode_t ) ) );
 FUNC_1( "%6i leafs        %7i\n"
    ,VAR_14, (int)( VAR_14 * sizeof( dleaf_t ) ) );
 FUNC_1( "%6i leafsurfaces %7i\n"
    ,VAR_15, (int)( VAR_15 * sizeof( dleafsurfaces[0] ) ) );
 FUNC_1( "%6i leafbrushes  %7i\n"
    ,VAR_13, (int)( VAR_13 * sizeof( dleafbrushes[0] ) ) );
 FUNC_1( "%6i drawverts    %7i\n"
    ,VAR_5, (int)( VAR_5 * sizeof( drawVerts[0] ) ) );
 FUNC_1( "%6i drawindexes  %7i\n"
    ,VAR_3, (int)( VAR_3 * sizeof( drawIndexes[0] ) ) );
 FUNC_1( "%6i drawsurfaces %7i\n"
    ,VAR_4, (int)( VAR_4 * sizeof( drawSurfaces[0] ) ) );

 FUNC_1( "%6i lightmaps    %7i\n"
    ,VAR_7 / ( VAR_1 * VAR_0 * 3 ), VAR_7 );
 FUNC_1( "       visibility   %7i\n"
    , VAR_9 );
}
