
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec3_t ;
typedef scalar_t__ qboolean ;
struct TYPE_8__ {scalar_t__ dist; int normal; } ;
typedef TYPE_1__ bspPlane_t ;
struct TYPE_9__ {int cluster; size_t firstBSPLeafBrush; int numBSPLeafBrushes; } ;
typedef TYPE_2__ bspLeaf_t ;
struct TYPE_10__ {int numSides; int firstSide; } ;
typedef TYPE_3__ bspBrush_t ;
struct TYPE_11__ {size_t planeNum; } ;


 float FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 TYPE_7__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 int* VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

int FUNC_2( vec3_t VAR_9, float VAR_10 ){
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 float VAR_16;
 qboolean VAR_17;
 int *VAR_18, VAR_19;
 bspLeaf_t *VAR_20;
 bspBrush_t *VAR_21;
 bspPlane_t *VAR_22;



 VAR_14 = FUNC_1( VAR_9 );
 if ( VAR_14 < 0 ) {
  return -1;
 }
 VAR_20 = &VAR_3[ VAR_14 ];


 VAR_15 = VAR_20->cluster;
 if ( VAR_15 < 0 ) {
  return -1;
 }


 VAR_18 = &VAR_2[ VAR_20->firstBSPLeafBrush ];
 VAR_19 = VAR_20->numBSPLeafBrushes;
 for ( VAR_11 = 0; VAR_11 < VAR_19; VAR_11++ )
 {

  VAR_13 = VAR_18[ VAR_11 ];
  if ( VAR_13 > VAR_5 ) {
   continue;
  }
  VAR_21 = &VAR_1[ VAR_13 ];
  if ( !( VAR_6[ VAR_13 >> 3 ] & ( 1 << ( VAR_13 & 7 ) ) ) ) {
   continue;
  }


  VAR_17 = VAR_8;
  for ( VAR_12 = 0; VAR_12 < VAR_21->numSides && VAR_17; VAR_12++ )
  {
   VAR_22 = &VAR_4[ VAR_0[ VAR_21->firstSide + VAR_12 ].planeNum ];
   VAR_16 = FUNC_0( VAR_9, VAR_22->normal );
   VAR_16 -= VAR_22->dist;
   if ( VAR_16 > VAR_10 ) {
    VAR_17 = VAR_7;
   }
  }


  if ( VAR_17 ) {
   return -1 - VAR_13;
  }
 }


 return VAR_15;
}
