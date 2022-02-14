
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {struct TYPE_18__* next; } ;
typedef TYPE_2__ surfaceModel_t ;
struct TYPE_19__ {int width; TYPE_5__* verts; int height; } ;
typedef TYPE_3__ mesh_t ;
struct TYPE_20__ {int type; int numVerts; int patchWidth; int numIndexes; size_t* indexes; TYPE_5__* verts; int longestCurve; int patchHeight; TYPE_1__* shaderInfo; } ;
typedef TYPE_4__ mapDrawSurface_t ;
typedef int centroid ;
struct TYPE_21__ {int* xyz; int* normal; int* st; float** color; } ;
typedef TYPE_5__ bspDrawVert_t ;
struct TYPE_17__ {TYPE_2__* surfaceModel; } ;


 int FUNC_0 (TYPE_4__*,TYPE_2__*,TYPE_5__**) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__) ;
 TYPE_3__* FUNC_4 (TYPE_3__*) ;






 TYPE_3__* FUNC_5 (TYPE_3__,int) ;
 int FUNC_6 (int*,int*,int*) ;
 int FUNC_7 (int*,int*) ;
 float FUNC_8 (int*,int*) ;
 int FUNC_9 (TYPE_5__*,int ,int) ;
 int VAR_0 ;

int FUNC_10( mapDrawSurface_t *VAR_1 ){
 surfaceModel_t *VAR_2;
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7[ 5 ], VAR_8, VAR_9, VAR_10;
 mesh_t VAR_11, *VAR_12, *VAR_13;
 bspDrawVert_t VAR_14, *VAR_15[ 3 ];
 float VAR_16;



 if ( VAR_1 == ((void*)0) || VAR_1->shaderInfo == ((void*)0) || VAR_1->shaderInfo->surfaceModel == ((void*)0) ) {
  return 0;
 }


 VAR_9 = 0;


 for ( VAR_2 = VAR_1->shaderInfo->surfaceModel; VAR_2 != ((void*)0); VAR_2 = VAR_2->next )
 {

  switch ( VAR_1->type )
  {

  case 132:
  case 133:

   FUNC_9( &VAR_14, 0, sizeof( VAR_14 ) );
   VAR_16 = 0.0f;


   for ( VAR_3 = 0; VAR_3 < VAR_1->numVerts; VAR_3++ )
   {
    FUNC_6( VAR_14.xyz, VAR_1->verts[ VAR_3 ].xyz, VAR_14.xyz );
    FUNC_6( VAR_14.normal, VAR_1->verts[ VAR_3 ].normal, VAR_14.normal );
    VAR_14.st[ 0 ] += VAR_1->verts[ VAR_3 ].st[ 0 ];
    VAR_14.st[ 1 ] += VAR_1->verts[ VAR_3 ].st[ 1 ];
    VAR_16 += VAR_1->verts[ VAR_3 ].color[ 0 ][ 3 ];
   }


   VAR_14.xyz[ 0 ] /= VAR_1->numVerts;
   VAR_14.xyz[ 1 ] /= VAR_1->numVerts;
   VAR_14.xyz[ 2 ] /= VAR_1->numVerts;
   if ( FUNC_8( VAR_14.normal, VAR_14.normal ) == 0.0f ) {
    FUNC_7( VAR_1->verts[ 0 ].normal, VAR_14.normal );
   }
   VAR_14.st[ 0 ] /= VAR_1->numVerts;
   VAR_14.st[ 1 ] /= VAR_1->numVerts;
   VAR_16 /= VAR_1->numVerts;
   VAR_14.color[ 0 ][ 0 ] = 0xFF;
   VAR_14.color[ 0 ][ 1 ] = 0xFF;
   VAR_14.color[ 0 ][ 2 ] = 0xFF;
   VAR_14.color[ 0 ][ 2 ] = ( VAR_16 > 255.0f ? 0xFF : VAR_16 );


   VAR_15[ 0 ] = &VAR_14;


   for ( VAR_3 = 0; VAR_3 < VAR_1->numVerts; VAR_3++ )
   {

    VAR_15[ 1 ] = &VAR_1->verts[ VAR_3 ];
    VAR_15[ 2 ] = &VAR_1->verts[ ( VAR_3 + 1 ) % VAR_1->numVerts ];


    VAR_6 = FUNC_0( VAR_1, VAR_2, VAR_15 );
    if ( VAR_6 < 0 ) {
     return VAR_6;
    }
    VAR_9 += VAR_6;
   }
   break;


  case 129:

   VAR_11.width = VAR_1->patchWidth;
   VAR_11.height = VAR_1->patchHeight;
   VAR_11.verts = VAR_1->verts;

   VAR_10 = FUNC_2( VAR_1->longestCurve, VAR_0 );
   VAR_13 = FUNC_5( VAR_11, VAR_10 );


   FUNC_3( *VAR_13 );
   VAR_12 = FUNC_4( VAR_13 );
   FUNC_1( VAR_13 );


   for ( VAR_5 = 0; VAR_5 < ( VAR_12->height - 1 ); VAR_5++ )
   {
    for ( VAR_4 = 0; VAR_4 < ( VAR_12->width - 1 ); VAR_4++ )
    {

     VAR_7[ 0 ] = VAR_4 + ( VAR_5 * VAR_12->width );
     VAR_7[ 1 ] = VAR_4 + ( ( VAR_5 + 1 ) * VAR_12->width );
     VAR_7[ 2 ] = VAR_4 + 1 + ( ( VAR_5 + 1 ) * VAR_12->width );
     VAR_7[ 3 ] = VAR_4 + 1 + ( VAR_5 * VAR_12->width );
     VAR_7[ 4 ] = VAR_4 + ( VAR_5 * VAR_12->width );


     VAR_8 = ( VAR_4 + VAR_5 ) & 1;


     VAR_15[ 0 ] = &VAR_12->verts[ VAR_7[ VAR_8 + 0 ] ];
     VAR_15[ 1 ] = &VAR_12->verts[ VAR_7[ VAR_8 + 1 ] ];
     VAR_15[ 2 ] = &VAR_12->verts[ VAR_7[ VAR_8 + 2 ] ];
     VAR_6 = FUNC_0( VAR_1, VAR_2, VAR_15 );
     if ( VAR_6 < 0 ) {
      return VAR_6;
     }
     VAR_9 += VAR_6;


     VAR_15[ 0 ] = &VAR_12->verts[ VAR_7[ VAR_8 + 0 ] ];
     VAR_15[ 1 ] = &VAR_12->verts[ VAR_7[ VAR_8 + 2 ] ];
     VAR_15[ 2 ] = &VAR_12->verts[ VAR_7[ VAR_8 + 3 ] ];
     VAR_6 = FUNC_0( VAR_1, VAR_2, VAR_15 );
     if ( VAR_6 < 0 ) {
      return VAR_6;
     }
     VAR_9 += VAR_6;
    }
   }


   FUNC_1( VAR_12 );
   break;


  case 128:
  case 131:
  case 130:

   for ( VAR_3 = 0; VAR_3 < VAR_1->numIndexes; VAR_3 += 3 )
   {
    VAR_15[ 0 ] = &VAR_1->verts[ VAR_1->indexes[ VAR_3 ] ];
    VAR_15[ 1 ] = &VAR_1->verts[ VAR_1->indexes[ VAR_3 + 1 ] ];
    VAR_15[ 2 ] = &VAR_1->verts[ VAR_1->indexes[ VAR_3 + 2 ] ];
    VAR_6 = FUNC_0( VAR_1, VAR_2, VAR_15 );
    if ( VAR_6 < 0 ) {
     return VAR_6;
    }
    VAR_9 += VAR_6;
   }
   break;


  default:
   break;
  }
 }


 return VAR_9;
}
