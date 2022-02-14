
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_8__ {int * si; int side; int lightmapAxis; int sampleSize; int fogNum; int planeNum; int recvShadows; int castShadows; int surfaceNum; int entityNum; } ;
typedef TYPE_1__ metaTriangle_t ;
struct TYPE_9__ {int* verts; int* indexes; int numVerts; int numIndexes; int maxs; int mins; int sideRef; int lightmapAxis; int sampleSize; int fogNum; int planeNum; int * shaderInfo; int recvShadows; int castShadows; int surfaceNum; int entityNum; } ;
typedef TYPE_2__ mapDrawSurface_t ;
typedef int bspDrawVert_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,scalar_t__) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int,TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int*,int*,int) ;
 int FUNC_9 (int*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11( int VAR_10, metaTriangle_t *VAR_11, int *VAR_12, int *VAR_13 ){
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 metaTriangle_t *VAR_20, *VAR_21;
 mapDrawSurface_t *VAR_22;
 bspDrawVert_t *VAR_23;
 int *VAR_24;
 qboolean VAR_25;



 VAR_23 = FUNC_10( sizeof( *VAR_23 ) * VAR_5 );
 VAR_24 = FUNC_10( sizeof( *VAR_24 ) * VAR_4 );


 for ( VAR_14 = 0, VAR_20 = VAR_11; VAR_14 < VAR_10; VAR_14++, VAR_20++ )
 {

  if ( VAR_20->si == ((void*)0) ) {
   continue;
  }






  VAR_22 = FUNC_1( VAR_2 );
  VAR_22->entityNum = VAR_20->entityNum;
  VAR_22->surfaceNum = VAR_20->surfaceNum;
  VAR_22->castShadows = VAR_20->castShadows;
  VAR_22->recvShadows = VAR_20->recvShadows;

  VAR_22->shaderInfo = VAR_20->si;
  VAR_22->planeNum = VAR_20->planeNum;
  VAR_22->fogNum = VAR_20->fogNum;
  VAR_22->sampleSize = VAR_20->sampleSize;
  VAR_22->verts = VAR_23;
  VAR_22->indexes = VAR_24;
  FUNC_6( VAR_20->lightmapAxis, VAR_22->lightmapAxis );
  VAR_22->sideRef = FUNC_2( VAR_20->side, ((void*)0) );

  FUNC_4( VAR_22->mins, VAR_22->maxs );


  FUNC_9( VAR_23, 0, sizeof( *VAR_23 ) * VAR_5 );
  FUNC_9( VAR_24, 0, sizeof( *VAR_24 ) * VAR_4 );


  if ( FUNC_0( VAR_22, VAR_20, VAR_8 ) ) {
   ( *VAR_13 )++;
  }






  VAR_25 = VAR_9;
  while ( VAR_25 )
  {

   VAR_16 = 10 * *VAR_13 / VAR_7;
   if ( VAR_16 > *VAR_12 ) {
    *VAR_12 = VAR_16;
    FUNC_5( VAR_3, "%d...", VAR_16 );
   }


   VAR_17 = -1;
   VAR_19 = 0;
   VAR_25 = VAR_8;


   for ( VAR_15 = VAR_14 + 1, VAR_21 = &VAR_11[ VAR_15 ]; VAR_15 < VAR_10; VAR_15++, VAR_21++ )
   {

    if ( VAR_21->si == ((void*)0) ) {
     continue;
    }


    VAR_18 = FUNC_0( VAR_22, VAR_21, VAR_9 );
    if ( VAR_18 > VAR_19 ) {
     VAR_17 = VAR_15;
     VAR_19 = VAR_18;


     if ( VAR_19 >= VAR_1 ) {
      if ( FUNC_0( VAR_22, &VAR_11[ VAR_17 ], VAR_8 ) ) {
       ( *VAR_13 )++;
      }


      VAR_17 = -1;
      VAR_19 = 0;
      VAR_25 = VAR_9;
     }
    }
   }


   if ( VAR_17 >= 0 && VAR_19 > VAR_0 ) {
    if ( FUNC_0( VAR_22, &VAR_11[ VAR_17 ], VAR_8 ) ) {
     ( *VAR_13 )++;
    }


    VAR_25 = VAR_9;
   }
  }


  VAR_22->verts = FUNC_10( VAR_22->numVerts * sizeof( bspDrawVert_t ) );
  FUNC_8( VAR_22->verts, VAR_23, VAR_22->numVerts * sizeof( bspDrawVert_t ) );
  VAR_22->indexes = FUNC_10( VAR_22->numIndexes * sizeof( int ) );
  FUNC_8( VAR_22->indexes, VAR_24, VAR_22->numIndexes * sizeof( int ) );


  FUNC_3( 1, VAR_22 );


  VAR_6++;
 }


 FUNC_7( VAR_23 );
 FUNC_7( VAR_24 );
}
