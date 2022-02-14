
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hl_dvisdata ;
typedef int hl_dtexdata ;
typedef int hl_dlightdata ;
typedef int hl_dentdata ;


 scalar_t__ FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_4 (char*,...) ;

void FUNC_5(void)
{
 int VAR_26 = 0;

 FUNC_4("\n");
 FUNC_4("Object names  Objects/Maxobjs  Memory / Maxmem  Fullness\n" );
 FUNC_4("------------  ---------------  ---------------  --------\n" );

 VAR_26 += FUNC_0( "models", VAR_17, FUNC_1(VAR_5), FUNC_2(VAR_5) );
 VAR_26 += FUNC_0( "planes", VAR_19, FUNC_1(VAR_7), FUNC_2(VAR_7) );
 VAR_26 += FUNC_0( "vertexes", VAR_22, FUNC_1(VAR_9), FUNC_2(VAR_9) );
 VAR_26 += FUNC_0( "nodes", VAR_18, FUNC_1(VAR_6), FUNC_2(VAR_6) );
 VAR_26 += FUNC_0( "texinfos", VAR_21, FUNC_1(VAR_24), FUNC_2(VAR_24) );
 VAR_26 += FUNC_0( "faces", VAR_14, FUNC_1(VAR_2), FUNC_2(VAR_2) );
 VAR_26 += FUNC_0( "clipnodes", VAR_12, FUNC_1(VAR_0), FUNC_2(VAR_0) );
 VAR_26 += FUNC_0( "leaves", VAR_15, FUNC_1(VAR_3), FUNC_2(VAR_3) );
 VAR_26 += FUNC_0( "marksurfaces",VAR_16,FUNC_1(VAR_4),FUNC_2(VAR_4) );
 VAR_26 += FUNC_0( "surfedges", VAR_20, FUNC_1(VAR_8), FUNC_2(VAR_8) );
 VAR_26 += FUNC_0( "edges", VAR_13, FUNC_1(VAR_1), FUNC_2(VAR_1) );

 VAR_26 += FUNC_3( "texdata", VAR_23, sizeof(hl_dtexdata) );
 VAR_26 += FUNC_3( "lightdata", VAR_11, sizeof(hl_dlightdata) );
 VAR_26 += FUNC_3( "visdata", VAR_25, sizeof(hl_dvisdata) );
 VAR_26 += FUNC_3( "entdata", VAR_10, sizeof(hl_dentdata) );

 FUNC_4( "=== Total BSP file data space used: %d bytes ===\n\n", VAR_26 );
}
