
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int width; int height; TYPE_4__* verts; } ;
typedef TYPE_2__ mesh_t ;
struct TYPE_16__ {int patchWidth; int patchHeight; int sampleSize; int lightmapWidth; int lightmapHeight; int lightmapX; int lightmapY; scalar_t__ lightmapNum; TYPE_1__* mapBrush; TYPE_4__* verts; } ;
typedef TYPE_3__ mapDrawSurface_t ;
struct TYPE_17__ {float* lightmap; } ;
typedef TYPE_4__ drawVert_t ;
struct TYPE_14__ {int brushnum; int entitynum; } ;


 int FUNC_0 (int,int,int*,int*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (TYPE_2__,int,int) ;
 TYPE_2__* FUNC_7 (TYPE_2__*,int,int,int*,int*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;

void FUNC_8( mapDrawSurface_t *VAR_6 ){
 int VAR_7, VAR_8, VAR_9;
 drawVert_t *VAR_10;
 int VAR_11, VAR_12;
 int VAR_13, VAR_14;
 float VAR_15, VAR_16;
 mesh_t VAR_17, *VAR_18, *VAR_19, *VAR_20;
 int VAR_21[VAR_1], VAR_22[VAR_0], VAR_23;

 VAR_10 = VAR_6->verts;

 VAR_17.width = VAR_6->patchWidth;
 VAR_17.height = VAR_6->patchHeight;
 VAR_17.verts = VAR_10;
 VAR_20 = FUNC_6( VAR_17, 8, 999 );

 FUNC_4( *VAR_20 );
 VAR_19 = FUNC_5( VAR_20 );
 FUNC_2( VAR_20 );


 VAR_23 = VAR_6->sampleSize;





 VAR_18 = FUNC_7( VAR_19, VAR_23, VAR_1, VAR_21, VAR_22 );


 VAR_11 = VAR_18->width;
 VAR_12 = VAR_18->height;






 FUNC_2( VAR_18 );


 VAR_2 += VAR_11 * VAR_12;

 if ( !FUNC_0( VAR_11, VAR_12, &VAR_13, &VAR_14 ) ) {
  FUNC_3();
  if ( !FUNC_0( VAR_11, VAR_12, &VAR_13, &VAR_14 ) ) {
   FUNC_1( "Entity %i, brush %i: Lightmap allocation failed",
       VAR_6->mapBrush->entitynum, VAR_6->mapBrush->brushnum );
  }
 }







 VAR_6->lightmapNum = VAR_3 - 1;
 VAR_6->lightmapWidth = VAR_11;
 VAR_6->lightmapHeight = VAR_12;
 VAR_6->lightmapX = VAR_13;
 VAR_6->lightmapY = VAR_14;

 for ( VAR_7 = 0 ; VAR_7 < VAR_6->patchWidth ; VAR_7++ ) {
  for ( VAR_9 = 0 ; VAR_9 < VAR_11 ; VAR_9++ ) {
   if ( VAR_5[VAR_9] >= VAR_7 ) {
    break;
   }
  }
  if ( VAR_9 >= VAR_11 ) {
   VAR_9 = VAR_11 - 1;
  }
  VAR_15 = VAR_13 + VAR_9;
  for ( VAR_8 = 0 ; VAR_8 < VAR_6->patchHeight ; VAR_8++ ) {
   for ( VAR_9 = 0 ; VAR_9 < VAR_12 ; VAR_9++ ) {
    if ( VAR_4[VAR_9] >= VAR_8 ) {
     break;
    }
   }
   if ( VAR_9 >= VAR_12 ) {
    VAR_9 = VAR_12 - 1;
   }
   VAR_16 = VAR_14 + VAR_9;
   VAR_10[VAR_7 + VAR_8 * VAR_6->patchWidth].lightmap[0] = ( VAR_15 + 0.5 ) / VAR_1;
   VAR_10[VAR_7 + VAR_8 * VAR_6->patchWidth].lightmap[1] = ( VAR_16 + 0.5 ) / VAR_0;
  }
 }
}
