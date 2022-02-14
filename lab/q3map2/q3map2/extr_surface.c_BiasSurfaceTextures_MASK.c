
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int numVerts; scalar_t__* bias; TYPE_2__* verts; TYPE_1__* shaderInfo; } ;
typedef TYPE_3__ mapDrawSurface_t ;
struct TYPE_7__ {int * st; } ;
struct TYPE_6__ {scalar_t__ globalTexture; } ;


 int FUNC_0 (TYPE_3__*) ;

void FUNC_1( mapDrawSurface_t *VAR_0 ){
 int VAR_1;



 FUNC_0( VAR_0 );


 if ( VAR_0->shaderInfo->globalTexture ) {
  return;
 }


 for ( VAR_1 = 0; VAR_1 < VAR_0->numVerts; VAR_1++ )
 {
  VAR_0->verts[ VAR_1 ].st[ 0 ] += VAR_0->bias[ 0 ];
  VAR_0->verts[ VAR_1 ].st[ 1 ] += VAR_0->bias[ 1 ];
 }
}
