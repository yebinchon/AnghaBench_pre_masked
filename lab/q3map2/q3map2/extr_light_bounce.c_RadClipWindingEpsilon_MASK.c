
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vec_t ;
typedef int vec3_t ;
struct TYPE_10__ {int numVerts; int* xyz; int** color; int* normal; int* st; int** lightmap; struct TYPE_10__* verts; } ;
typedef TYPE_1__ radWinding_t ;
typedef TYPE_1__ radVert_t ;
struct TYPE_11__ {int* dists; int* sides; } ;
typedef TYPE_3__ clipWork_t ;


 int FUNC_0 (int*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int*,int*) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_4( radWinding_t *VAR_5, vec3_t VAR_6, vec_t VAR_7,
           vec_t VAR_8, radWinding_t *VAR_9, radWinding_t *VAR_10, clipWork_t *VAR_11 ){
 vec_t *VAR_12;
 int *VAR_13;
 int VAR_14[ 3 ];
 vec_t VAR_15;
 int VAR_16, VAR_17, VAR_18;
 radVert_t *VAR_19, *VAR_20, VAR_21;
 int VAR_22;



 VAR_12 = VAR_11->dists;
 VAR_13 = VAR_11->sides;


 VAR_14[ 0 ] = VAR_14[ 1 ] = VAR_14[ 2 ] = 0;


 for ( VAR_16 = 0; VAR_16 < VAR_5->numVerts; VAR_16++ )
 {
  VAR_15 = FUNC_0( VAR_5->verts[ VAR_16 ].xyz, VAR_6 );
  VAR_15 -= VAR_7;
  VAR_12[ VAR_16 ] = VAR_15;
  if ( VAR_15 > VAR_8 ) {
   VAR_13[ VAR_16 ] = VAR_3;
  }
  else if ( VAR_15 < -VAR_8 ) {
   VAR_13[ VAR_16 ] = VAR_2;
  }
  else{
   VAR_13[ VAR_16 ] = VAR_4;
  }
  VAR_14[ VAR_13[ VAR_16 ] ]++;
 }
 VAR_13[ VAR_16 ] = VAR_13[ 0 ];
 VAR_12[ VAR_16 ] = VAR_12[ 0 ];


 VAR_9->numVerts = VAR_10->numVerts = 0;


 if ( VAR_14[ 0 ] == 0 ) {
  FUNC_3( VAR_10, VAR_5, sizeof( radWinding_t ) );
  return;
 }
 if ( VAR_14[ 1 ] == 0 ) {
  FUNC_3( VAR_9, VAR_5, sizeof( radWinding_t ) );
  return;
 }


 VAR_22 = VAR_5->numVerts + 4;


 for ( VAR_16 = 0; VAR_16 < VAR_5->numVerts; VAR_16++ )
 {

  VAR_19 = &VAR_5->verts[ VAR_16 ];

  if ( VAR_13[ VAR_16 ] == VAR_4 ) {
   FUNC_3( &VAR_9->verts[ VAR_9->numVerts++ ], VAR_19, sizeof( radVert_t ) );
   FUNC_3( &VAR_10->verts[ VAR_10->numVerts++ ], VAR_19, sizeof( radVert_t ) );
   continue;
  }

  if ( VAR_13[ VAR_16 ] == VAR_3 ) {
   FUNC_3( &VAR_9->verts[ VAR_9->numVerts++ ], VAR_19, sizeof( radVert_t ) );
  }

  if ( VAR_13[ VAR_16 ] == VAR_2 ) {
   FUNC_3( &VAR_10->verts[ VAR_10->numVerts++ ], VAR_19, sizeof( radVert_t ) );
  }

  if ( VAR_13[ VAR_16 + 1 ] == VAR_4 || VAR_13[ VAR_16 + 1 ] == VAR_13[ VAR_16 ] ) {
   continue;
  }


  VAR_20 = &VAR_5->verts[ ( VAR_16 + 1 ) % VAR_5->numVerts ];

  VAR_15 = VAR_12[ VAR_16 ] / ( VAR_12[ VAR_16 ] - VAR_12[ VAR_16 + 1 ] );


  for ( VAR_17 = 0; VAR_17 < 4; VAR_17++ )
  {

   if ( VAR_17 < 4 ) {
    for ( VAR_18 = 0; VAR_18 < VAR_0; VAR_18++ )
     VAR_21.color[ VAR_18 ][ VAR_17 ] = VAR_19->color[ VAR_18 ][ VAR_17 ] + VAR_15 * ( VAR_20->color[ VAR_18 ][ VAR_17 ] - VAR_19->color[ VAR_18 ][ VAR_17 ] );
   }


   if ( VAR_17 < 3 ) {
    VAR_21.xyz[ VAR_17 ] = VAR_19->xyz[ VAR_17 ] + VAR_15 * ( VAR_20->xyz[ VAR_17 ] - VAR_19->xyz[ VAR_17 ] );
    VAR_21.normal[ VAR_17 ] = VAR_19->normal[ VAR_17 ] + VAR_15 * ( VAR_20->normal[ VAR_17 ] - VAR_19->normal[ VAR_17 ] );
   }


   if ( VAR_17 < 2 ) {
    VAR_21.st[ VAR_17 ] = VAR_19->st[ VAR_17 ] + VAR_15 * ( VAR_20->st[ VAR_17 ] - VAR_19->st[ VAR_17 ] );
    for ( VAR_18 = 0; VAR_18 < VAR_0; VAR_18++ )
     VAR_21.lightmap[ VAR_18 ][ VAR_17 ] = VAR_19->lightmap[ VAR_18 ][ VAR_17 ] + VAR_15 * ( VAR_20->lightmap[ VAR_18 ][ VAR_17 ] - VAR_19->lightmap[ VAR_18 ][ VAR_17 ] );
   }
  }


  FUNC_2( VAR_21.normal, VAR_21.normal );


  FUNC_3( &VAR_9->verts[ VAR_9->numVerts++ ], &VAR_21, sizeof( radVert_t ) );
  FUNC_3( &VAR_10->verts[ VAR_10->numVerts++ ], &VAR_21, sizeof( radVert_t ) );
 }


 if ( VAR_9->numVerts > VAR_22 ) {
  FUNC_1( "RadClipWindingEpsilon: points exceeded estimate" );
 }
 if ( VAR_9->numVerts > VAR_1 ) {
  FUNC_1( "RadClipWindingEpsilon: MAX_POINTS_ON_WINDING" );
 }
}
