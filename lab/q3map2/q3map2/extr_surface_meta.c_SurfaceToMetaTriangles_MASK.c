
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int lightmapAxis; int sampleSize; int fogNum; int recvShadows; int castShadows; int planeNum; int surfaceNum; int entityNum; int * side; int si; } ;
typedef TYPE_2__ metaTriangle_t ;
struct TYPE_9__ {scalar_t__ type; int numVerts; int numIndexes; size_t* indexes; int planeNum; int * verts; int lightmapAxis; int sampleSize; int fogNum; int recvShadows; int castShadows; int surfaceNum; int entityNum; TYPE_1__* sideRef; int shaderInfo; } ;
typedef TYPE_3__ mapDrawSurface_t ;
typedef int c ;
typedef int bspDrawVert_t ;
typedef int b ;
typedef int a ;
struct TYPE_7__ {int * side; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,int *,int *,int *,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (int *,int *,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_4( mapDrawSurface_t *VAR_8 ){
 int VAR_9;
 metaTriangle_t VAR_10;
 bspDrawVert_t VAR_11, VAR_12, VAR_13;



 if ( VAR_8->type != VAR_2 &&
   VAR_8->type != VAR_4 &&
   VAR_8->type != VAR_3 &&
   VAR_8->type != VAR_1 ) {
  return;
 }


 VAR_5 = VAR_7;


 if ( VAR_8->type != VAR_0 && VAR_8->numVerts >= 3 && VAR_8->numIndexes >= 3 ) {

  for ( VAR_9 = 0; VAR_9 < VAR_8->numIndexes; VAR_9 += 3 )
  {

   if ( VAR_8->indexes[ VAR_9 ] == VAR_8->indexes[ VAR_9 + 1 ] ||
     VAR_8->indexes[ VAR_9 ] == VAR_8->indexes[ VAR_9 + 2 ] ||
     VAR_8->indexes[ VAR_9 + 1 ] == VAR_8->indexes[ VAR_9 + 2 ] ) {

    continue;
   }


   VAR_10.si = VAR_8->shaderInfo;
   VAR_10.side = ( VAR_8->sideRef != ((void*)0) ? VAR_8->sideRef->side : ((void*)0) );
   VAR_10.entityNum = VAR_8->entityNum;
   VAR_10.surfaceNum = VAR_8->surfaceNum;
   VAR_10.planeNum = VAR_8->planeNum;
   VAR_10.castShadows = VAR_8->castShadows;
   VAR_10.recvShadows = VAR_8->recvShadows;
   VAR_10.fogNum = VAR_8->fogNum;
   VAR_10.sampleSize = VAR_8->sampleSize;
   FUNC_2( VAR_8->lightmapAxis, VAR_10.lightmapAxis );


   FUNC_3( &VAR_11, &VAR_8->verts[ VAR_8->indexes[ VAR_9 ] ], sizeof( VAR_11 ) );
   FUNC_3( &VAR_12, &VAR_8->verts[ VAR_8->indexes[ VAR_9 + 1 ] ], sizeof( VAR_12 ) );
   FUNC_3( &VAR_13, &VAR_8->verts[ VAR_8->indexes[ VAR_9 + 2 ] ], sizeof( VAR_13 ) );
   FUNC_1( &VAR_10, &VAR_11, &VAR_12, &VAR_13, VAR_8->planeNum );
  }


  VAR_6++;
 }


 FUNC_0( VAR_8 );
}
