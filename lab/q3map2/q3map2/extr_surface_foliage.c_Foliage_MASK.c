
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_12__ ;


typedef int vec3_t ;
struct TYPE_24__ {TYPE_4__* foliage; } ;
typedef TYPE_1__ shaderInfo_t ;
struct TYPE_25__ {int width; int height; TYPE_5__* verts; } ;
typedef TYPE_2__ mesh_t ;
struct TYPE_26__ {int type; int numIndexes; size_t* indexes; int patchWidth; int patchHeight; int numFoliageInstances; int numVerts; TYPE_5__* verts; int fogNum; int lightmapScale; int recvShadows; int castShadows; int entityNum; TYPE_1__* shaderInfo; } ;
typedef TYPE_3__ mapDrawSurface_t ;
typedef int m4x4_t ;
struct TYPE_27__ {int model; int scale; struct TYPE_27__* next; } ;
typedef TYPE_4__ foliage_t ;
struct TYPE_28__ {int** color; int normal; int xyz; } ;
typedef TYPE_5__ bspDrawVert_t ;
struct TYPE_23__ {int normal; int xyz; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ,int *,int *,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;




 int FUNC_4 (TYPE_3__*,TYPE_4__*,TYPE_5__**) ;
 TYPE_2__* FUNC_5 (TYPE_2__,int,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 TYPE_12__* VAR_2 ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (int ,int ) ;
 TYPE_3__* VAR_3 ;
 int FUNC_10 (TYPE_5__*,TYPE_5__*,int) ;
 int FUNC_11 (TYPE_5__*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__* FUNC_12 (int) ;

void FUNC_13( mapDrawSurface_t *VAR_6 ){
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12[ 5 ], VAR_13, VAR_14;
 mapDrawSurface_t *VAR_15;
 shaderInfo_t *VAR_16;
 foliage_t *VAR_17;
 mesh_t VAR_18, *VAR_19, *VAR_20;
 bspDrawVert_t *VAR_21, *VAR_22[ 3 ], *VAR_23;
 vec3_t VAR_24;
 m4x4_t VAR_25;



 VAR_16 = VAR_6->shaderInfo;
 if ( VAR_16 == ((void*)0) || VAR_16->foliage == ((void*)0) ) {
  return;
 }


 for ( VAR_17 = VAR_16->foliage; VAR_17 != ((void*)0); VAR_17 = VAR_17->next )
 {

  VAR_4 = 0;


  switch ( VAR_6->type )
  {
  case 130:
  case 131:
  case 128:

   VAR_21 = VAR_6->verts;


   for ( VAR_7 = 0; VAR_7 < VAR_6->numIndexes; VAR_7 += 3 )
   {
    VAR_22[ 0 ] = &VAR_21[ VAR_6->indexes[ VAR_7 ] ];
    VAR_22[ 1 ] = &VAR_21[ VAR_6->indexes[ VAR_7 + 1 ] ];
    VAR_22[ 2 ] = &VAR_21[ VAR_6->indexes[ VAR_7 + 2 ] ];
    FUNC_4( VAR_6, VAR_17, VAR_22 );
   }
   break;

  case 129:

   VAR_18.width = VAR_6->patchWidth;
   VAR_18.height = VAR_6->patchHeight;
   VAR_18.verts = VAR_6->verts;
   VAR_19 = FUNC_5( VAR_18, 8, 512 );


   FUNC_2( *VAR_19 );
   VAR_20 = FUNC_3( VAR_19 );
   FUNC_0( VAR_19 );


   VAR_21 = VAR_20->verts;


   for ( VAR_11 = 0; VAR_11 < ( VAR_20->height - 1 ); VAR_11++ )
   {
    for ( VAR_10 = 0; VAR_10 < ( VAR_20->width - 1 ); VAR_10++ )
    {

     VAR_12[ 0 ] = VAR_10 + ( VAR_11 * VAR_20->width );
     VAR_12[ 1 ] = VAR_10 + ( ( VAR_11 + 1 ) * VAR_20->width );
     VAR_12[ 2 ] = VAR_10 + 1 + ( ( VAR_11 + 1 ) * VAR_20->width );
     VAR_12[ 3 ] = VAR_10 + 1 + ( VAR_11 * VAR_20->width );
     VAR_12[ 4 ] = VAR_10 + ( VAR_11 * VAR_20->width );


     VAR_13 = ( VAR_10 + VAR_11 ) & 1;


     VAR_22[ 0 ] = &VAR_21[ VAR_12[ VAR_13 + 0 ] ];
     VAR_22[ 1 ] = &VAR_21[ VAR_12[ VAR_13 + 1 ] ];
     VAR_22[ 2 ] = &VAR_21[ VAR_12[ VAR_13 + 2 ] ];
     FUNC_4( VAR_6, VAR_17, VAR_22 );


     VAR_22[ 0 ] = &VAR_21[ VAR_12[ VAR_13 + 0 ] ];
     VAR_22[ 1 ] = &VAR_21[ VAR_12[ VAR_13 + 2 ] ];
     VAR_22[ 2 ] = &VAR_21[ VAR_12[ VAR_13 + 3 ] ];
     FUNC_4( VAR_6, VAR_17, VAR_22 );
    }
   }


   FUNC_0( VAR_20 );
   break;

  default:
   break;
  }


  if ( VAR_4 < 1 ) {
   continue;
  }


  VAR_14 = VAR_5;


  FUNC_7( VAR_24, VAR_17->scale, VAR_17->scale, VAR_17->scale );
  FUNC_9( VAR_25, VAR_24 );


  FUNC_1( VAR_17->model, 0, VAR_25, ((void*)0), ((void*)0), VAR_6->entityNum, VAR_6->castShadows, VAR_6->recvShadows, 0, VAR_6->lightmapScale );


  for ( VAR_7 = VAR_14; VAR_7 < VAR_5; VAR_7++ )
  {

   VAR_15 = &VAR_3[ VAR_7 ];


   VAR_15->type = VAR_1;
   VAR_15->numFoliageInstances = VAR_4;


   VAR_15->patchWidth = VAR_15->numFoliageInstances;
   VAR_15->patchHeight = VAR_15->numVerts;


   VAR_15->fogNum = VAR_6->fogNum;


   VAR_21 = FUNC_12( ( VAR_15->numVerts + VAR_15->numFoliageInstances ) * sizeof( *VAR_21 ) );
   FUNC_11( VAR_21, 0, ( VAR_15->numVerts + VAR_15->numFoliageInstances ) * sizeof( *VAR_21 ) );
   FUNC_10( VAR_21, VAR_15->verts, VAR_15->numVerts * sizeof( *VAR_21 ) );
   FUNC_8( VAR_15->verts );
   VAR_15->verts = VAR_21;


   for ( VAR_8 = 0; VAR_8 < VAR_15->numFoliageInstances; VAR_8++ )
   {

    VAR_23 = &VAR_15->verts[ VAR_15->numVerts + VAR_8 ];


    FUNC_6( VAR_2[ VAR_8 ].xyz, VAR_23->xyz );
    FUNC_6( VAR_2[ VAR_8 ].normal, VAR_23->normal );


    for ( VAR_9 = 0; VAR_9 < VAR_0; VAR_9++ )
    {
     VAR_23->color[ VAR_9 ][ 0 ] = 255;
     VAR_23->color[ VAR_9 ][ 1 ] = 255;
     VAR_23->color[ VAR_9 ][ 2 ] = 255;
     VAR_23->color[ VAR_9 ][ 3 ] = 255;
    }
   }


   VAR_15->numVerts += VAR_15->numFoliageInstances;
  }
 }
}
