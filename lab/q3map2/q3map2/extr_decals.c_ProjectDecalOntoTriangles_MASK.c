
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int numpoints; scalar_t__** p; } ;
typedef TYPE_3__ winding_t ;
typedef scalar_t__* vec4_t ;
struct TYPE_16__ {scalar_t__ type; size_t planeNum; int numIndexes; size_t* indexes; TYPE_2__* verts; scalar_t__ planar; TYPE_1__* shaderInfo; } ;
typedef TYPE_4__ mapDrawSurface_t ;
struct TYPE_17__ {scalar_t__** planes; } ;
typedef TYPE_5__ decalProjector_t ;
struct TYPE_18__ {scalar_t__ dist; int normal; } ;
struct TYPE_14__ {int xyz; } ;
struct TYPE_13__ {int * shaderText; } ;


 TYPE_3__* FUNC_0 (int) ;
 float FUNC_1 (scalar_t__*,scalar_t__*) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,scalar_t__*) ;
 scalar_t__* VAR_1 ;
 TYPE_6__* VAR_2 ;

__attribute__((used)) static void FUNC_4( decalProjector_t *VAR_3, mapDrawSurface_t *VAR_4 ){
 int VAR_5;
 vec4_t VAR_6;
 float VAR_7;
 winding_t *VAR_8;



 if ( VAR_4->type == VAR_0 && VAR_4->shaderInfo->shaderText == ((void*)0) ) {
  return;
 }


 if ( VAR_4->planar ) {
  FUNC_3( VAR_2[ VAR_4->planeNum ].normal, VAR_6 );
  VAR_6[ 3 ] = VAR_2[ VAR_4->planeNum ].dist + FUNC_1( VAR_6, VAR_1 );
  VAR_7 = FUNC_1( VAR_3->planes[ 0 ], VAR_6 );
  if ( VAR_7 < -0.0001f ) {
   return;
  }
 }


 for ( VAR_5 = 0; VAR_5 < VAR_4->numIndexes; VAR_5 += 3 )
 {

  VAR_8 = FUNC_0( 3 );
  VAR_8->numpoints = 3;
  FUNC_3( VAR_4->verts[ VAR_4->indexes[ VAR_5 ] ].xyz, VAR_8->p[ 0 ] );
  FUNC_3( VAR_4->verts[ VAR_4->indexes[ VAR_5 + 1 ] ].xyz, VAR_8->p[ 1 ] );
  FUNC_3( VAR_4->verts[ VAR_4->indexes[ VAR_5 + 2 ] ].xyz, VAR_8->p[ 2 ] );
  FUNC_2( VAR_3, VAR_4, VAR_8 );
 }
}
