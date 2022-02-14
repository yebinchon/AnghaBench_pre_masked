
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int numpoints; int ** p; } ;
typedef TYPE_1__ winding_t ;
typedef int * vec4_t ;
struct TYPE_18__ {float* mins; float* maxs; } ;
typedef TYPE_2__ shaderInfo_t ;
struct TYPE_19__ {int dist; int * normal; } ;
typedef TYPE_3__ plane_t ;
struct TYPE_20__ {size_t planenum; struct TYPE_20__** children; int * parent; } ;
typedef TYPE_4__ node_t ;
struct TYPE_21__ {size_t planeNum; TYPE_2__* shaderInfo; } ;
typedef TYPE_5__ mapDrawSurface_t ;


 int FUNC_0 (TYPE_5__*,TYPE_4__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int *,int ,int ,TYPE_1__**,TYPE_1__**) ;
 float FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_5 (int *,float*,int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,int *,int *) ;
 float FUNC_8 (int ) ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;

int FUNC_9( winding_t *VAR_4, mapDrawSurface_t *VAR_5, node_t *VAR_6 ){
 int VAR_7, VAR_8 = 0;
 plane_t *VAR_9, *VAR_10;
 vec4_t VAR_11, VAR_12, VAR_13;
 winding_t *VAR_14, *VAR_15, *VAR_16;
 shaderInfo_t *VAR_17;



 VAR_17 = VAR_5->shaderInfo;


 if ( VAR_6->parent == ((void*)0) && VAR_17 != ((void*)0) &&
   ( VAR_17->mins[ 0 ] != 0.0f || VAR_17->maxs[ 0 ] != 0.0f ||
     VAR_17->mins[ 1 ] != 0.0f || VAR_17->maxs[ 1 ] != 0.0f ||
     VAR_17->mins[ 2 ] != 0.0f || VAR_17->maxs[ 2 ] != 0.0f ) ) {


  VAR_14 = FUNC_1( VAR_4->numpoints * 3 );
  VAR_14->numpoints = VAR_4->numpoints * 3;
  for ( VAR_7 = 0; VAR_7 < VAR_4->numpoints; VAR_7++ )
  {
   FUNC_6( VAR_4->p[ VAR_7 ], VAR_14->p[ VAR_7 ] );
   FUNC_5( VAR_4->p[ VAR_7 ], VAR_17->mins, VAR_14->p[ VAR_7 * 2 ] );
   FUNC_5( VAR_4->p[ VAR_7 ], VAR_17->maxs, VAR_14->p[ VAR_7 * 3 ] );
  }

  FUNC_4( VAR_4 );
  VAR_4 = VAR_14;
 }


 if ( VAR_6->planenum != VAR_1 ) {

  VAR_9 = &VAR_2[ VAR_6->planenum ];
  FUNC_6( VAR_9->normal, VAR_11 );
  VAR_11[ 3 ] = VAR_9->dist;


  if ( VAR_5->planeNum >= 0 ) {

   VAR_10 = &VAR_2[ VAR_5->planeNum ];
   FUNC_6( VAR_10->normal, VAR_12 );
   VAR_12[ 3 ] = VAR_10->dist;



   FUNC_7( VAR_3, VAR_12, VAR_13 );
   VAR_13[ 3 ] = -VAR_12[ 3 ];


   if ( FUNC_3( VAR_11, VAR_12 ) > 0.999f && FUNC_8( VAR_11[ 3 ] - VAR_12[ 3 ] ) < 0.001f ) {
    return FUNC_9( VAR_4, VAR_5, VAR_6->children[ 0 ] );
   }
   if ( FUNC_3( VAR_11, VAR_13 ) > 0.999f && FUNC_8( VAR_11[ 3 ] - VAR_13[ 3 ] ) < 0.001f ) {
    return FUNC_9( VAR_4, VAR_5, VAR_6->children[ 1 ] );
   }
  }


  FUNC_2( VAR_4, VAR_11, VAR_11[ 3 ], VAR_0, &VAR_15, &VAR_16 );


  VAR_8 = 0;
  if ( VAR_15 != ((void*)0) ) {
   VAR_8 += FUNC_9( VAR_15, VAR_5, VAR_6->children[ 0 ] );
  }
  if ( VAR_16 != ((void*)0) ) {
   VAR_8 += FUNC_9( VAR_16, VAR_5, VAR_6->children[ 1 ] );
  }
  FUNC_4( VAR_4 );


  return VAR_8;
 }


 return FUNC_0( VAR_5, VAR_6 );
}
