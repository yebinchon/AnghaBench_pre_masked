
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_7__ {int numVerts; float* bias; int* texMins; int* texMaxs; int* texRange; TYPE_2__* verts; TYPE_1__* shaderInfo; } ;
typedef TYPE_3__ mapDrawSurface_t ;
struct TYPE_6__ {float* st; } ;
struct TYPE_5__ {int shaderWidth; int shaderHeight; } ;


 float FUNC_0 (float) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

qboolean FUNC_1( mapDrawSurface_t *VAR_3 ){
 int VAR_4, VAR_5, VAR_6, VAR_7[ 2 ];
 float VAR_8[ 2 ], VAR_9[ 2 ];



 if ( VAR_3->numVerts <= 0 ) {
  return VAR_1;
 }


 VAR_8[ 0 ] = 999999;
 VAR_8[ 1 ] = 999999;
 VAR_9[ 0 ] = -999999;
 VAR_9[ 1 ] = -999999;
 for ( VAR_4 = 0; VAR_4 < VAR_3->numVerts; VAR_4++ )
 {
  for ( VAR_5 = 0; VAR_5 < 2; VAR_5++ )
  {
   if ( VAR_3->verts[ VAR_4 ].st[ VAR_5 ] < VAR_8[ VAR_5 ] ) {
    VAR_8[ VAR_5 ] = VAR_3->verts[ VAR_4 ].st[ VAR_5 ];
   }
   if ( VAR_3->verts[ VAR_4 ].st[ VAR_5 ] > VAR_9[ VAR_5 ] ) {
    VAR_9[ VAR_5 ] = VAR_3->verts[ VAR_4 ].st[ VAR_5 ];
   }
  }
 }


 for ( VAR_5 = 0; VAR_5 < 2; VAR_5++ )
  VAR_3->bias[ VAR_5 ] = -FUNC_0( 0.5f * ( VAR_8[ VAR_5 ] + VAR_9[ VAR_5 ] ) );


 VAR_7[ 0 ] = VAR_3->shaderInfo->shaderWidth;
 VAR_7[ 1 ] = VAR_3->shaderInfo->shaderHeight;
 VAR_3->texMins[ 0 ] = 999999;
 VAR_3->texMins[ 1 ] = 999999;
 VAR_3->texMaxs[ 0 ] = -999999;
 VAR_3->texMaxs[ 1 ] = -999999;
 for ( VAR_4 = 0; VAR_4 < VAR_3->numVerts; VAR_4++ )
 {
  for ( VAR_5 = 0; VAR_5 < 2; VAR_5++ )
  {
   VAR_6 = ( (float) VAR_3->verts[ VAR_4 ].st[ VAR_5 ] + VAR_3->bias[ VAR_5 ] ) * VAR_7[ VAR_5 ];
   if ( VAR_6 < VAR_3->texMins[ VAR_5 ] ) {
    VAR_3->texMins[ VAR_5 ] = VAR_6;
   }
   if ( VAR_6 > VAR_3->texMaxs[ VAR_5 ] ) {
    VAR_3->texMaxs[ VAR_5 ] = VAR_6;
   }
  }
 }


 for ( VAR_5 = 0; VAR_5 < 2; VAR_5++ )
  VAR_3->texRange[ VAR_5 ] = ( VAR_3->texMaxs[ VAR_5 ] - VAR_3->texMins[ VAR_5 ] );


 if ( VAR_2 == 0 ) {
  return VAR_1;
 }


 for ( VAR_5 = 0; VAR_5 < 2; VAR_5++ )
 {
  if ( VAR_3->texMins[ VAR_5 ] < -VAR_2 || VAR_3->texMaxs[ VAR_5 ] > VAR_2 ) {
   return VAR_0;
  }
 }


 return VAR_1;
}
