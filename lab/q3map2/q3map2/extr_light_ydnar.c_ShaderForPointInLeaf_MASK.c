
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vec3_t ;
typedef scalar_t__ qboolean ;
struct TYPE_11__ {int surfaceFlags; int contentFlags; } ;
typedef TYPE_1__ bspShader_t ;
struct TYPE_12__ {scalar_t__ dist; int normal; } ;
typedef TYPE_2__ bspPlane_t ;
struct TYPE_13__ {size_t firstBSPLeafBrush; int numBSPLeafBrushes; } ;
typedef TYPE_3__ bspLeaf_t ;
struct TYPE_14__ {int numSides; int firstSide; int shaderNum; } ;
typedef TYPE_4__ bspBrush_t ;
struct TYPE_15__ {size_t planeNum; size_t shaderNum; } ;
typedef TYPE_5__ bspBrushSide_t ;


 float FUNC_0 (int ,int ) ;
 TYPE_5__* VAR_0 ;
 TYPE_4__* VAR_1 ;
 int* VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

int FUNC_1( vec3_t VAR_8, int VAR_9, float VAR_10, int VAR_11, int VAR_12, int *VAR_13, int *VAR_14 ){
 int VAR_15, VAR_16;
 float VAR_17;
 qboolean VAR_18;
 int *VAR_19, VAR_20;
 bspLeaf_t *VAR_21;
 bspBrush_t *VAR_22;
 bspBrushSide_t *VAR_23;
 bspPlane_t *VAR_24;
 bspShader_t *VAR_25;
 int VAR_26, VAR_27;



 *VAR_14 = 0;
 *VAR_13 = 0;


 if ( VAR_9 < 0 ) {
  return -1;
 }
 VAR_21 = &VAR_3[ VAR_9 ];


 VAR_19 = &VAR_2[ VAR_21->firstBSPLeafBrush ];
 VAR_20 = VAR_21->numBSPLeafBrushes;
 for ( VAR_15 = 0; VAR_15 < VAR_20; VAR_15++ )
 {

  VAR_22 = &VAR_1[ VAR_19[ VAR_15 ] ];


  VAR_18 = VAR_7;
  VAR_26 = 0;
  VAR_27 = 0;
  for ( VAR_16 = 0; VAR_16 < VAR_22->numSides && VAR_18; VAR_16++ )
  {
   VAR_23 = &VAR_0[ VAR_22->firstSide + VAR_16 ];
   VAR_24 = &VAR_4[ VAR_23->planeNum ];
   VAR_17 = FUNC_0( VAR_8, VAR_24->normal );
   VAR_17 -= VAR_24->dist;
   if ( VAR_17 > VAR_10 ) {
    VAR_18 = VAR_6;
   }
   else
   {
    VAR_25 = &VAR_5[ VAR_23->shaderNum ];
    VAR_26 |= VAR_25->surfaceFlags;
    VAR_27 |= VAR_25->contentFlags;
   }
  }


  if ( VAR_18 ) {

   if ( VAR_11 && !( VAR_11 & VAR_27 ) ) {
    continue;
   }
   if ( VAR_12 && !( VAR_12 & VAR_26 ) ) {
    continue;
   }


   *VAR_14 = VAR_26;
   *VAR_13 = VAR_27;
   return VAR_22->shaderNum;
  }
 }


 return -1;
}
