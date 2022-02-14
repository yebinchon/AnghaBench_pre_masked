
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int byte ;
struct TYPE_2__ {int lightmapSize; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int *,int,int,int ) ;
 int * VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char*,char*,char*,int) ;
 int FUNC_6 (char*,int ) ;

void FUNC_7( void ){
 int VAR_7;
 char VAR_8[ 1024 ], VAR_9[ 1024 ];
 byte *VAR_10;



 FUNC_2( VAR_0, "--- ExportLightmaps ---\n" );


 FUNC_6( VAR_8, VAR_6 );
 FUNC_1( VAR_8 );


 if ( VAR_2 == ((void*)0) ) {
  FUNC_2( VAR_1, "WARNING: No BSP lightmap data\n" );
  return;
 }


 FUNC_0( VAR_8 );


 for ( VAR_7 = 0, VAR_10 = VAR_2; VAR_10 < ( VAR_2 + VAR_4 ); VAR_7++, VAR_10 += ( VAR_3->lightmapSize * VAR_3->lightmapSize * 3 ) )
 {

  FUNC_5( VAR_9, "%s/lightmap_%04d.tga", VAR_8, VAR_7 );
  FUNC_3( "Writing %s\n", VAR_9 );
  FUNC_4( VAR_9, VAR_10, VAR_3->lightmapSize, VAR_3->lightmapSize, VAR_5 );
 }
}
