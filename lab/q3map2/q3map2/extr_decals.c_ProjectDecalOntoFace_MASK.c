
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int winding_t ;
typedef scalar_t__* vec4_t ;
struct TYPE_11__ {size_t planeNum; scalar_t__ planar; TYPE_1__* sideRef; } ;
typedef TYPE_2__ mapDrawSurface_t ;
struct TYPE_12__ {scalar_t__** planes; } ;
typedef TYPE_3__ decalProjector_t ;
struct TYPE_13__ {scalar_t__ dist; int normal; } ;
struct TYPE_10__ {int * side; } ;


 float FUNC_0 (scalar_t__*,scalar_t__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int *) ;
 int FUNC_2 (int ,scalar_t__*) ;
 int * FUNC_3 (TYPE_2__*) ;
 scalar_t__* VAR_0 ;
 TYPE_4__* VAR_1 ;

__attribute__((used)) static void FUNC_4( decalProjector_t *VAR_2, mapDrawSurface_t *VAR_3 ){
 vec4_t VAR_4;
 float VAR_5;
 winding_t *VAR_6;



 if ( VAR_3->sideRef == ((void*)0) || VAR_3->sideRef->side == ((void*)0) ) {
  return;
 }


 if ( VAR_3->planar ) {
  FUNC_2( VAR_1[ VAR_3->planeNum ].normal, VAR_4 );
  VAR_4[ 3 ] = VAR_1[ VAR_3->planeNum ].dist + FUNC_0( VAR_4, VAR_0 );
  VAR_5 = FUNC_0( VAR_2->planes[ 0 ], VAR_4 );
  if ( VAR_5 < -0.0001f ) {
   return;
  }
 }


 VAR_6 = FUNC_3( VAR_3 );
 FUNC_1( VAR_2, VAR_3, VAR_6 );
}
