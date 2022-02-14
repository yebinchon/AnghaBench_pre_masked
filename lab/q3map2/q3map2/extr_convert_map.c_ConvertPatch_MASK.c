
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef double* vec3_t ;
struct TYPE_7__ {char* shader; } ;
typedef TYPE_1__ bspShader_t ;
struct TYPE_8__ {double* st; int xyz; } ;
typedef TYPE_2__ bspDrawVert_t ;
struct TYPE_9__ {scalar_t__ surfaceType; size_t shaderNum; int patchWidth; int patchHeight; int firstVert; } ;
typedef TYPE_3__ bspDrawSurface_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (double*,int ,double*) ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int *,char*,...) ;
 size_t VAR_3 ;

__attribute__((used)) static void FUNC_3( FILE *VAR_4, int VAR_5, bspDrawSurface_t *VAR_6, vec3_t VAR_7 ){
 int VAR_8, VAR_9;
 bspShader_t *VAR_10;
 char *VAR_11;
 bspDrawVert_t *VAR_12;
 vec3_t VAR_13;



 if ( VAR_6->surfaceType != VAR_0 ) {
  return;
 }


 if ( VAR_6->shaderNum < 0 || VAR_6->shaderNum >= VAR_3 ) {
  return;
 }
 VAR_10 = &VAR_2[ VAR_6->shaderNum ];


 if ( !FUNC_0( VAR_10->shader, "textures/", 9 ) ) {
  VAR_11 = VAR_10->shader + 9;
 }
 else{
  VAR_11 = VAR_10->shader;
 }


 FUNC_2( VAR_4, "\t// patch %d\n", VAR_5 );
 FUNC_2( VAR_4, "\t{\n" );
 FUNC_2( VAR_4, "\t\tpatchDef2\n" );
 FUNC_2( VAR_4, "\t\t{\n" );
 FUNC_2( VAR_4, "\t\t\t%s\n", VAR_11 );
 FUNC_2( VAR_4, "\t\t\t( %d %d 0 0 0 )\n", VAR_6->patchWidth, VAR_6->patchHeight );
 FUNC_2( VAR_4, "\t\t\t(\n" );


 for ( VAR_8 = 0; VAR_8 < VAR_6->patchWidth; VAR_8++ )
 {

  FUNC_2( VAR_4, "\t\t\t\t(" );


  for ( VAR_9 = 0; VAR_9 < VAR_6->patchHeight; VAR_9++ )
  {

   VAR_12 = &VAR_1[ VAR_6->firstVert + ( VAR_9 * VAR_6->patchWidth ) + VAR_8 ];


   FUNC_1( VAR_7, VAR_12->xyz, VAR_13 );


   FUNC_2( VAR_4, " ( %f %f %f %f %f )", VAR_13[ 0 ], VAR_13[ 1 ], VAR_13[ 2 ], VAR_12->st[ 0 ], VAR_12->st[ 1 ] );
  }


  FUNC_2( VAR_4, " )\n" );
 }


 FUNC_2( VAR_4, "\t\t\t)\n" );
 FUNC_2( VAR_4, "\t\t}\n" );
 FUNC_2( VAR_4, "\t}\n\n" );
}
