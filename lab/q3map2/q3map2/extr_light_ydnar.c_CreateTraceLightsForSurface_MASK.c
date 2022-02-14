
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec3_t ;
typedef int trace_t ;
struct TYPE_8__ {size_t firstSurfaceCluster; int numSurfaceClusters; } ;
typedef TYPE_1__ surfaceInfo_t ;
struct TYPE_9__ {int normal; int xyz; } ;
typedef TYPE_2__ bspDrawVert_t ;
struct TYPE_10__ {size_t firstVert; int numVerts; } ;
typedef TYPE_3__ bspDrawSurface_t ;
struct TYPE_11__ {int normal; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_3__* VAR_1 ;
 TYPE_6__* VAR_2 ;
 int * VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_2__* VAR_5 ;

void FUNC_6( int VAR_6, trace_t *VAR_7 ){
 int VAR_8;
 vec3_t VAR_9, VAR_10, VAR_11;
 bspDrawVert_t *VAR_12;
 bspDrawSurface_t *VAR_13;
 surfaceInfo_t *VAR_14;



 if ( VAR_6 < 0 ) {
  return;
 }


 VAR_13 = &VAR_1[ VAR_6 ];
 VAR_14 = &VAR_4[ VAR_6 ];


 FUNC_1( VAR_9, VAR_10 );
 FUNC_5( VAR_2[ VAR_13->firstVert ].normal, VAR_11 );
 for ( VAR_8 = 0; VAR_8 < VAR_13->numVerts; VAR_8++ )
 {
  VAR_12 = &VAR_5[ VAR_13->firstVert + VAR_8 ];
  FUNC_0( VAR_12->xyz, VAR_9, VAR_10 );
  if ( !FUNC_4( VAR_12->normal, VAR_11 ) ) {
   FUNC_3( VAR_11 );
  }
 }


 FUNC_2( VAR_9, VAR_10, VAR_11, VAR_14->numSurfaceClusters, &VAR_3[ VAR_14->firstSurfaceCluster ], VAR_0, VAR_7 );
}
