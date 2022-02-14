
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_6__ {scalar_t__ type; int numVerts; TYPE_2__* verts; } ;
typedef TYPE_1__ mapDrawSurface_t ;
struct TYPE_7__ {float* st; float** lightmap; int** color; int normal; int xyz; } ;
typedef TYPE_2__ bspDrawVert_t ;
typedef int avg ;


 float VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ) ;
 float FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*,TYPE_2__*,int) ;
 int VAR_4 ;
 int VAR_5 ;

qboolean FUNC_7( mapDrawSurface_t *VAR_6 ){
 qboolean VAR_7 = VAR_5;
 bspDrawVert_t *VAR_8, *VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13;
 float VAR_14;



 if ( VAR_6 == ((void*)0) ) {
  return VAR_4;
 }
 if ( VAR_6->type != VAR_2 ) {
  return VAR_4;
 }


 for ( VAR_11 = 0; VAR_11 < VAR_6->numVerts; VAR_11++ )
 {

  if ( VAR_6->numVerts == 3 ) {
   return VAR_7;
  }


  VAR_8 = &VAR_6->verts[ VAR_11 ];
  VAR_9 = &VAR_6->verts[ ( VAR_11 + 1 ) % VAR_6->numVerts ];


  FUNC_5( VAR_8->xyz, VAR_9->xyz, VAR_10.xyz );
  VAR_14 = FUNC_3( VAR_10.xyz );
  if ( VAR_14 < VAR_0 ) {
   VAR_7 = VAR_4;
   FUNC_1( VAR_3, "WARNING: Degenerate T-junction edge found, fixing...\n" );



   FUNC_0( VAR_8->xyz, VAR_9->xyz, VAR_10.xyz );
   FUNC_2( VAR_8->normal, VAR_9->normal, VAR_10.normal );
   FUNC_4( VAR_10.normal, VAR_10.normal );
   VAR_10.st[ 0 ] = ( VAR_8->st[ 0 ] + VAR_9->st[ 0 ] ) * 0.5f;
   VAR_10.st[ 1 ] = ( VAR_8->st[ 1 ] + VAR_9->st[ 1 ] ) * 0.5f;


   for ( VAR_13 = 0; VAR_13 < VAR_1; VAR_13++ )
   {
    VAR_10.lightmap[ VAR_13 ][ 0 ] = ( VAR_8->lightmap[ VAR_13 ][ 0 ] + VAR_9->lightmap[ VAR_13 ][ 0 ] ) * 0.5f;
    VAR_10.lightmap[ VAR_13 ][ 1 ] = ( VAR_8->lightmap[ VAR_13 ][ 1 ] + VAR_9->lightmap[ VAR_13 ][ 1 ] ) * 0.5f;
    for ( VAR_12 = 0; VAR_12 < 4; VAR_12++ )
     VAR_10.color[ VAR_13 ][ VAR_12 ] = (int) ( VAR_8->color[ VAR_13 ][ VAR_12 ] + VAR_9->color[ VAR_13 ][ VAR_12 ] ) >> 1;
   }


   FUNC_6( VAR_8, &VAR_10, sizeof( VAR_10 ) );


   for ( VAR_13 = VAR_11 + 2; VAR_13 < VAR_6->numVerts; VAR_13++ )
   {

    VAR_8 = &VAR_6->verts[ VAR_13 ];
    VAR_9 = &VAR_6->verts[ VAR_13 - 1 ];


    FUNC_6( VAR_9, VAR_8, sizeof( bspDrawVert_t ) );
   }
   VAR_6->numVerts--;
  }
 }


 if ( VAR_6->numVerts < 3 ) {
  VAR_7 = VAR_4;
 }
 return VAR_7;
}
