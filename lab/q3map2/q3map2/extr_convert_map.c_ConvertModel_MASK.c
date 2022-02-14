
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_11__ {int numBSPBrushes; int firstBSPBrush; int numBSPSurfaces; int firstBSPSurface; } ;
typedef TYPE_1__ bspModel_t ;
struct TYPE_12__ {scalar_t__ surfaceType; } ;
typedef TYPE_2__ bspDrawSurface_t ;
typedef int bspBrush_t ;
struct TYPE_15__ {int dist; int normal; } ;
struct TYPE_14__ {struct TYPE_14__* original; scalar_t__ entityNum; } ;
struct TYPE_13__ {int * hash_chain; int normal; int type; int dist; } ;
typedef int FILE ;


 TYPE_4__* FUNC_0 (int) ;
 int FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (int *,int,TYPE_2__*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int * VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_6__* VAR_3 ;
 TYPE_4__* VAR_4 ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_3__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_6( FILE *VAR_8, bspModel_t *VAR_9, int VAR_10, vec3_t VAR_11 ){
 int VAR_12, VAR_13;
 bspBrush_t *VAR_14;
 bspDrawSurface_t *VAR_15;



 VAR_7 = VAR_6;
 for ( VAR_12 = 0; VAR_12 < VAR_6; VAR_12++ )
 {
  FUNC_4( VAR_3[ VAR_12 ].normal, VAR_5[ VAR_12 ].normal );
  VAR_5[ VAR_12 ].dist = VAR_3[ VAR_12 ].dist;
  VAR_5[ VAR_12 ].type = FUNC_3( VAR_5[ VAR_12 ].normal );
  VAR_5[ VAR_12 ].hash_chain = ((void*)0);
 }


 VAR_4 = FUNC_0( 512 );
 VAR_4->entityNum = 0;
 VAR_4->original = VAR_4;


 for ( VAR_12 = 0; VAR_12 < VAR_9->numBSPBrushes; VAR_12++ )
 {
  VAR_13 = VAR_12 + VAR_9->firstBSPBrush;
  VAR_14 = &VAR_1[ VAR_13 ];
  FUNC_1( VAR_8, VAR_13, VAR_14, VAR_11 );
 }


 FUNC_5( VAR_4 );


 for ( VAR_12 = 0; VAR_12 < VAR_9->numBSPSurfaces; VAR_12++ )
 {
  VAR_13 = VAR_12 + VAR_9->firstBSPSurface;
  VAR_15 = &VAR_2[ VAR_13 ];


  if ( VAR_15->surfaceType == VAR_0 ) {
   FUNC_2( VAR_8, VAR_13, VAR_15, VAR_11 );
  }
 }
}
