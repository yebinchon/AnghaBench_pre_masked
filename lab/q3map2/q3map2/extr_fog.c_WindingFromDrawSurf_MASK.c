
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int numpoints; int * p; } ;
typedef TYPE_2__ winding_t ;
typedef int vec3_t ;
struct TYPE_9__ {int numVerts; TYPE_1__* verts; } ;
typedef TYPE_3__ mapDrawSurface_t ;
struct TYPE_7__ {int xyz; } ;


 TYPE_2__* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*,int *,int,int ) ;

winding_t *FUNC_3( mapDrawSurface_t *VAR_2 ){
 winding_t *VAR_3;
 int VAR_4;



 if ( VAR_2->numVerts >= VAR_0 ) {
  int VAR_5 = VAR_2->numVerts;
  vec3_t VAR_6[256];

  if ( VAR_5 > 256 ) {
   VAR_5 = 256;
  }

  for ( VAR_4 = 0 ; VAR_4 < VAR_5 ; VAR_4++ ) {
   FUNC_1( VAR_2->verts[VAR_4].xyz, VAR_6[VAR_4] );
  }

  FUNC_2( "WindingFromDrawSurf failed: MAX_POINTS_ON_WINDING exceeded", VAR_6, VAR_5, VAR_1 );
 }

 VAR_3 = FUNC_0( VAR_2->numVerts );
 VAR_3->numpoints = VAR_2->numVerts;
 for ( VAR_4 = 0 ; VAR_4 < VAR_2->numVerts ; VAR_4++ ) {
  FUNC_1( VAR_2->verts[VAR_4].xyz, VAR_3->p[VAR_4] );
 }
 return VAR_3;
}
