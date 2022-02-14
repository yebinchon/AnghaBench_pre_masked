
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int widthTable ;
typedef int vec3_t ;
struct TYPE_16__ {int patchIterations; } ;
typedef TYPE_1__ surfaceInfo_t ;
struct TYPE_17__ {int w; float sampleSize; int customWidth; int h; int customHeight; void** wrap; void* finished; } ;
typedef TYPE_2__ rawLightmap_t ;
typedef void* qboolean ;
struct TYPE_18__ {int width; int height; TYPE_4__* verts; } ;
typedef TYPE_3__ mesh_t ;
typedef int heightTable ;
struct TYPE_19__ {float** lightmap; int xyz; } ;
typedef TYPE_4__ bspDrawVert_t ;
struct TYPE_20__ {int patchWidth; int patchHeight; size_t firstVert; } ;
typedef TYPE_5__ bspDrawSurface_t ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__) ;
 TYPE_3__* FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (TYPE_3__,int ) ;
 int FUNC_4 (int ,int ) ;
 float FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 TYPE_5__* VAR_1 ;
 void* FUNC_7 (float) ;
 int FUNC_8 (float*,int ,int) ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 float VAR_5 ;
 TYPE_1__* VAR_6 ;
 TYPE_4__* VAR_7 ;

qboolean FUNC_9( int VAR_8, rawLightmap_t *VAR_9 ){
 bspDrawSurface_t *VAR_10;
 surfaceInfo_t *VAR_11;
 int VAR_12, VAR_13;
 bspDrawVert_t *VAR_14, *VAR_15, *VAR_16;
 vec3_t VAR_17;
 mesh_t VAR_18, *VAR_19, *VAR_20;
 float VAR_21, VAR_22, VAR_23, VAR_24;
 float VAR_25, VAR_26[ VAR_0 ], VAR_27[ VAR_0 ];



 VAR_9->finished = VAR_4;


 VAR_10 = &VAR_1[ VAR_8 ];
 VAR_11 = &VAR_6[ VAR_8 ];


 VAR_18.width = VAR_10->patchWidth;
 VAR_18.height = VAR_10->patchHeight;
 VAR_18.verts = &VAR_7[ VAR_10->firstVert ];

 VAR_19 = FUNC_3( VAR_18, VAR_11->patchIterations );


 FUNC_1( *VAR_19 );
 VAR_20 = FUNC_2( VAR_19 );
 FUNC_0( VAR_19 );


 VAR_14 = VAR_20->verts;
 FUNC_8( VAR_26, 0, sizeof( VAR_26 ) );
 FUNC_8( VAR_27, 0, sizeof( VAR_27 ) );
 for ( VAR_13 = 0; VAR_13 < VAR_20->height; VAR_13++ )
 {
  for ( VAR_12 = 0; VAR_12 < VAR_20->width; VAR_12++ )
  {

   if ( VAR_12 + 1 < VAR_20->width ) {
    VAR_15 = &VAR_14[ ( VAR_13 * VAR_20->width ) + VAR_12 ];
    VAR_16 = &VAR_14[ ( VAR_13 * VAR_20->width ) + VAR_12 + 1 ];
    FUNC_6( VAR_15->xyz, VAR_16->xyz, VAR_17 );
    VAR_25 = FUNC_5( VAR_17 );
    if ( VAR_25 > VAR_26[ VAR_12 ] ) {
     VAR_26[ VAR_12 ] = VAR_25;
    }
   }


   if ( VAR_13 + 1 < VAR_20->height ) {
    VAR_15 = &VAR_14[ ( VAR_13 * VAR_20->width ) + VAR_12 ];
    VAR_16 = &VAR_14[ ( ( VAR_13 + 1 ) * VAR_20->width ) + VAR_12 ];
    FUNC_6( VAR_15->xyz, VAR_16->xyz, VAR_17 );
    VAR_25 = FUNC_5( VAR_17 );
    if ( VAR_25 > VAR_27[ VAR_13 ] ) {
     VAR_27[ VAR_13 ] = VAR_25;
    }
   }
  }
 }


 VAR_25 = 0;
 for ( VAR_12 = 0; VAR_12 < ( VAR_20->width - 1 ); VAR_12++ )
  VAR_25 += VAR_26[ VAR_12 ];
 VAR_9->w = VAR_9->sampleSize != 0 ? FUNC_7( VAR_25 / VAR_9->sampleSize ) + 1 : 0;
 if ( VAR_9->w < VAR_10->patchWidth ) {
  VAR_9->w = VAR_10->patchWidth;
 }
 if ( VAR_9->w > VAR_9->customWidth ) {
  VAR_9->w = VAR_9->customWidth;
 }
 VAR_21 = (float) ( VAR_9->w - 1 ) / (float) ( VAR_10->patchWidth - 1 );


 VAR_25 = 0;
 for ( VAR_13 = 0; VAR_13 < ( VAR_20->height - 1 ); VAR_13++ )
  VAR_25 += VAR_27[ VAR_13 ];
 VAR_9->h = VAR_9->sampleSize != 0 ? FUNC_7( VAR_25 / VAR_9->sampleSize ) + 1 : 0;
 if ( VAR_9->h < VAR_10->patchHeight ) {
  VAR_9->h = VAR_10->patchHeight;
 }
 if ( VAR_9->h > VAR_9->customHeight ) {
  VAR_9->h = VAR_9->customHeight;
 }
 VAR_22 = (float) ( VAR_9->h - 1 ) / (float) ( VAR_10->patchHeight - 1 );


 FUNC_0( VAR_20 );


 VAR_9->wrap[ 0 ] = VAR_4;
 VAR_9->wrap[ 1 ] = VAR_4;
 VAR_14 = &VAR_7[ VAR_10->firstVert ];
 for ( VAR_13 = 0; VAR_13 < VAR_10->patchHeight; VAR_13++ )
 {
  VAR_24 = ( VAR_22 * VAR_13 ) + 0.5f;
  for ( VAR_12 = 0; VAR_12 < VAR_10->patchWidth; VAR_12++ )
  {
   VAR_23 = ( VAR_21 * VAR_12 ) + 0.5f;
   VAR_14[ ( VAR_13 * VAR_10->patchWidth ) + VAR_12 ].lightmap[ 0 ][ 0 ] = VAR_23 * VAR_5;
   VAR_14[ ( VAR_13 * VAR_10->patchWidth ) + VAR_12 ].lightmap[ 0 ][ 1 ] = VAR_24 * VAR_5;

   if ( VAR_13 == 0 && !FUNC_4( VAR_14[ VAR_12 ].xyz, VAR_14[ ( ( VAR_10->patchHeight - 1 ) * VAR_10->patchWidth ) + VAR_12 ].xyz ) ) {
    VAR_9->wrap[ 1 ] = VAR_3;
   }
  }

  if ( !FUNC_4( VAR_14[ ( VAR_13 * VAR_10->patchWidth ) ].xyz, VAR_14[ ( VAR_13 * VAR_10->patchWidth ) + ( VAR_10->patchWidth - 1 ) ].xyz ) ) {
   VAR_9->wrap[ 0 ] = VAR_3;
  }
 }
 VAR_2++;


 return VAR_4;
}
