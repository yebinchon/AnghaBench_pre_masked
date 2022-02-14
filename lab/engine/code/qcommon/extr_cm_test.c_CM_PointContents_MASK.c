
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_12__ {int numLeafBrushes; int firstLeafBrush; } ;
struct TYPE_10__ {TYPE_5__ leaf; } ;
typedef TYPE_3__ cmodel_t ;
typedef scalar_t__ clipHandle_t ;
struct TYPE_11__ {int numsides; int contents; TYPE_2__* sides; int * bounds; } ;
typedef TYPE_4__ cbrush_t ;
typedef TYPE_5__ cLeaf_t ;
struct TYPE_13__ {int* leafbrushes; TYPE_4__* brushes; TYPE_5__* leafs; int numNodes; } ;
struct TYPE_9__ {TYPE_1__* plane; } ;
struct TYPE_8__ {float dist; int normal; } ;


 int FUNC_0 (int ,int ,int const) ;
 TYPE_3__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int const,int ) ;
 float FUNC_3 (int const,int ) ;
 TYPE_6__ VAR_0 ;

int FUNC_4( const vec3_t VAR_1, clipHandle_t VAR_2 ) {
 int VAR_3;
 int VAR_4, VAR_5;
 int VAR_6;
 cLeaf_t *VAR_7;
 cbrush_t *VAR_8;
 int VAR_9;
 float VAR_10;
 cmodel_t *VAR_11;

 if (!VAR_0.numNodes) {
  return 0;
 }

 if ( VAR_2 ) {
  VAR_11 = FUNC_1( VAR_2 );
  VAR_7 = &VAR_11->leaf;
 } else {
  VAR_3 = FUNC_2 (VAR_1, 0);
  VAR_7 = &VAR_0.leafs[VAR_3];
 }

 VAR_9 = 0;
 for (VAR_5=0 ; VAR_5<VAR_7->numLeafBrushes ; VAR_5++) {
  VAR_6 = VAR_0.leafbrushes[VAR_7->firstLeafBrush+VAR_5];
  VAR_8 = &VAR_0.brushes[VAR_6];

  if ( !FUNC_0( VAR_8->bounds[0], VAR_8->bounds[1], VAR_1 ) ) {
   continue;
  }


  for ( VAR_4 = 0 ; VAR_4 < VAR_8->numsides ; VAR_4++ ) {
   VAR_10 = FUNC_3( VAR_1, VAR_8->sides[VAR_4].plane->normal );


   if ( VAR_10 > VAR_8->sides[VAR_4].plane->dist ) {
    break;
   }
  }

  if ( VAR_4 == VAR_8->numsides ) {
   VAR_9 |= VAR_8->contents;
  }
 }

 return VAR_9;
}
