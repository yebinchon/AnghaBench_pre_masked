
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {double shadeAngleDegrees; scalar_t__ tcGen; int lightmapAxis; int * vecs; void* nonplanar; void* forceMeta; void* globalTexture; } ;
typedef TYPE_1__ shaderInfo_t ;
struct TYPE_8__ {char* shader; } ;
typedef TYPE_2__ indexMap_t ;
typedef int byte ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 float FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int FUNC_3 (char*,char*,char*,int,...) ;

shaderInfo_t *FUNC_4( shaderInfo_t *VAR_3, indexMap_t *VAR_4, int VAR_5, byte *VAR_6 ){
 int VAR_7;
 byte VAR_8, VAR_9;
 char VAR_10[ VAR_0 ];
 shaderInfo_t *VAR_11;



 if ( VAR_4 == ((void*)0) || VAR_5 <= 0 || VAR_6 == ((void*)0) ) {
  return FUNC_0( "default" );
 }


 VAR_8 = 255;
 VAR_9 = 0;
 for ( VAR_7 = 0; VAR_7 < VAR_5; VAR_7++ )
 {
  if ( VAR_6[ VAR_7 ] < VAR_8 ) {
   VAR_8 = VAR_6[ VAR_7 ];
  }
  if ( VAR_6[ VAR_7 ] > VAR_9 ) {
   VAR_9 = VAR_6[ VAR_7 ];
  }
 }


 for ( VAR_7 = 0; VAR_7 < VAR_5; VAR_7++ )
 {

  if ( VAR_6[ VAR_7 ] < VAR_9 ) {
   VAR_6[ VAR_7 ] = 0;
  }
  else{
   VAR_6[ VAR_7 ] = 255;
  }
 }


 if ( VAR_8 == VAR_9 ) {
  FUNC_3( VAR_10, "textures/%s_%d", VAR_4->shader, VAR_9 );
 }
 else{
  FUNC_3( VAR_10, "textures/%s_%dto%d", VAR_4->shader, VAR_8, VAR_9 );
 }


 VAR_11 = FUNC_0( VAR_10 );


 if ( VAR_3->globalTexture ) {
  VAR_11->globalTexture = VAR_2;
 }
 if ( VAR_3->forceMeta ) {
  VAR_11->forceMeta = VAR_2;
 }
 if ( VAR_3->nonplanar ) {
  VAR_11->nonplanar = VAR_2;
 }
 if ( VAR_11->shadeAngleDegrees == 0.0 ) {
  VAR_11->shadeAngleDegrees = VAR_3->shadeAngleDegrees;
 }
 if ( VAR_3->tcGen && VAR_11->tcGen == VAR_1 ) {

  VAR_11->tcGen = VAR_2;
  FUNC_1( VAR_3->vecs[ 0 ], VAR_11->vecs[ 0 ] );
  FUNC_1( VAR_3->vecs[ 1 ], VAR_11->vecs[ 1 ] );
 }
 if ( FUNC_2( VAR_3->lightmapAxis ) > 0.0f && FUNC_2( VAR_11->lightmapAxis ) <= 0.0f ) {

  FUNC_1( VAR_3->lightmapAxis, VAR_11->lightmapAxis );
 }


 return VAR_11;
}
