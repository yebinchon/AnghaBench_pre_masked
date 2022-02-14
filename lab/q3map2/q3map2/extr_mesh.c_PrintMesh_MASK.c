
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int height; int width; TYPE_1__* verts; } ;
typedef TYPE_2__ mesh_t ;
struct TYPE_4__ {int * xyz; } ;


 int FUNC_0 (char*,...) ;

void FUNC_1( mesh_t *VAR_0 ) {
 int VAR_1, VAR_2;

 for ( VAR_1 = 0 ; VAR_1 < VAR_0->height ; VAR_1++ ) {
  for ( VAR_2 = 0 ; VAR_2 < VAR_0->width ; VAR_2++ ) {
   FUNC_0( "(%5.2f %5.2f %5.2f) "
      , VAR_0->verts[VAR_1 * VAR_0->width + VAR_2].xyz[0]
      , VAR_0->verts[VAR_1 * VAR_0->width + VAR_2].xyz[1]
      , VAR_0->verts[VAR_1 * VAR_0->width + VAR_2].xyz[2] );
  }
  FUNC_0( "\n" );
 }
}
