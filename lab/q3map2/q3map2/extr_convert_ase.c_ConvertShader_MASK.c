
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* shader; double* color; TYPE_1__* shaderImage; } ;
typedef TYPE_2__ shaderInfo_t ;
struct TYPE_8__ {char* shader; } ;
typedef TYPE_3__ bspShader_t ;
struct TYPE_6__ {char* filename; } ;
typedef int FILE ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void FUNC_5( FILE *VAR_1, bspShader_t *VAR_2, int VAR_3 ){
 shaderInfo_t *VAR_4;
 char *VAR_5, VAR_6[ 1024 ];



 VAR_4 = FUNC_0( VAR_2->shader );
 if ( VAR_4 == ((void*)0) ) {
  FUNC_1( VAR_0, "WARNING: NULL shader in BSP\n" );
  return;
 }


 if ( VAR_4->shaderImage->filename[ 0 ] != '*' ) {
  FUNC_4( VAR_6, VAR_4->shaderImage->filename );
 }
 else{
  FUNC_3( VAR_6, "%s.tga", VAR_4->shader );
 }
 for ( VAR_5 = VAR_6; *VAR_5 != '\0'; VAR_5++ )
  if ( *VAR_5 == '/' ) {
   *VAR_5 = '\\';
  }


 FUNC_2( VAR_1, "\t*MATERIAL\t%d\t{\r\n", VAR_3 );
 FUNC_2( VAR_1, "\t\t*MATERIAL_NAME\t\"%s\"\r\n", VAR_2->shader );
 FUNC_2( VAR_1, "\t\t*MATERIAL_CLASS\t\"Standard\"\r\n" );
 FUNC_2( VAR_1, "\t\t*MATERIAL_DIFFUSE\t%f\t%f\t%f\r\n", VAR_4->color[ 0 ], VAR_4->color[ 1 ], VAR_4->color[ 2 ] );
 FUNC_2( VAR_1, "\t\t*MATERIAL_SHADING Phong\r\n" );


 FUNC_2( VAR_1, "\t\t*MAP_DIFFUSE\t{\r\n" );
 FUNC_2( VAR_1, "\t\t\t*MAP_NAME\t\"%s\"\r\n", VAR_2->shader );
 FUNC_2( VAR_1, "\t\t\t*MAP_CLASS\t\"Bitmap\"\r\n" );
 FUNC_2( VAR_1, "\t\t\t*MAP_SUBNO\t1\r\n" );
 FUNC_2( VAR_1, "\t\t\t*MAP_AMOUNT\t1.0\r\n" );
 FUNC_2( VAR_1, "\t\t\t*MAP_TYPE\tScreen\r\n" );
 FUNC_2( VAR_1, "\t\t\t*BITMAP\t\"..\\%s\"\r\n", VAR_6 );
 FUNC_2( VAR_1, "\t\t\t*BITMAP_FILTER\tPyramidal\r\n" );
 FUNC_2( VAR_1, "\t\t}\r\n" );

 FUNC_2( VAR_1, "\t}\r\n" );
}
