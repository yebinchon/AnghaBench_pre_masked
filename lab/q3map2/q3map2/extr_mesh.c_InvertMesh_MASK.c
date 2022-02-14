
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; int width; int * verts; } ;
typedef TYPE_1__ mesh_t ;
typedef int bspDrawVert_t ;



void FUNC_0( mesh_t *VAR_0 ) {
 int VAR_1, VAR_2;
 bspDrawVert_t VAR_3;

 for ( VAR_2 = 0 ; VAR_2 < VAR_0->height ; VAR_2++ ) {
  for ( VAR_1 = 0 ; VAR_1 < VAR_0->width / 2 ; VAR_1++ ) {
   VAR_3 = VAR_0->verts[ VAR_2 * VAR_0->width + VAR_1 ];
   VAR_0->verts[ VAR_2 * VAR_0->width + VAR_1 ] = VAR_0->verts[ VAR_2 * VAR_0->width + VAR_0->width - 1 - VAR_1 ];
   VAR_0->verts[ VAR_2 * VAR_0->width + VAR_0->width - 1 - VAR_1 ] = VAR_3;
  }
 }
}
