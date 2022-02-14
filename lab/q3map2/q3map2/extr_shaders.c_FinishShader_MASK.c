
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef float* vec4_t ;
struct TYPE_5__ {float shaderWidth; float shaderHeight; scalar_t__ tcGen; float* averageColor; float* stFlat; void* finished; TYPE_1__* shaderImage; int * vecs; scalar_t__ legacyTerrain; } ;
typedef TYPE_2__ shaderInfo_t ;
typedef float byte ;
struct TYPE_4__ {float width; float height; float* pixels; } ;


 int FUNC_0 (float*,float*) ;
 int FUNC_1 (int ,float,float,int ) ;
 int FUNC_2 (float*,float*,float*) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;

void FUNC_3( shaderInfo_t *VAR_2 ){
 int VAR_3, VAR_4;
 float VAR_5, VAR_6;
 vec4_t VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12;
 byte *VAR_13;


 if ( VAR_2->finished ) {
  return;
 }


 if ( VAR_2->shaderWidth == 0 && VAR_2->shaderHeight == 0 ) {
  VAR_2->shaderWidth = VAR_2->shaderImage->width;
  VAR_2->shaderHeight = VAR_2->shaderImage->height;
 }


 if ( VAR_2->legacyTerrain && VAR_2->tcGen == VAR_0 ) {

  VAR_2->tcGen = VAR_1;
  FUNC_1( VAR_2->vecs[ 0 ], ( 1.0f / ( VAR_2->shaderWidth * 0.5f ) ), 0, 0 );
  FUNC_1( VAR_2->vecs[ 1 ], 0, ( 1.0f / ( VAR_2->shaderHeight * 0.5f ) ), 0 );
 }

 VAR_13 = VAR_2->shaderImage->pixels;
 VAR_11 = VAR_2->shaderImage->width;
 VAR_12 = VAR_2->shaderImage->height;


 VAR_6 = 99999999;
 FUNC_0( VAR_2->averageColor, VAR_10 );
 VAR_10[ 3 ] = VAR_2->averageColor[ 3 ];

 for ( VAR_4 = 0; VAR_4 < VAR_12; VAR_4++ )
 {
  for ( VAR_3 = 0; VAR_3 < VAR_11; VAR_3++ )
  {

   FUNC_0( VAR_13, VAR_7 );
   VAR_7[ 3 ] = VAR_13[ 3 ];
   VAR_13 += 4;


   FUNC_2( VAR_7, VAR_10, VAR_9 );
   VAR_9[ 3 ] = VAR_7[ 3 ] - VAR_10[ 3 ];
   VAR_5 = VAR_9[ 0 ] * VAR_9[ 0 ] + VAR_9[ 1 ] * VAR_9[ 1 ] + VAR_9[ 2 ] * VAR_9[ 2 ] + VAR_9[ 3 ] * VAR_9[ 3 ];
   if ( VAR_5 < VAR_6 ) {
    FUNC_0( VAR_7, VAR_8 );
    VAR_8[ 3 ] = VAR_7[ 3 ];
    VAR_2->stFlat[ 0 ] = (float) VAR_3 / VAR_11;
    VAR_2->stFlat[ 1 ] = (float) VAR_4 / VAR_12;
   }
  }
 }


 VAR_2->finished = VAR_1;
}
