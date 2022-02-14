
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__** bounds; scalar_t__ count; scalar_t__ maxcount; scalar_t__ list; int overflowed; } ;
typedef TYPE_1__ leafList_t ;
struct TYPE_7__ {scalar_t__ checkcount; scalar_t__** bounds; } ;
typedef TYPE_2__ cbrush_t ;
struct TYPE_8__ {int numLeafBrushes; int firstLeafBrush; int numLeafSurfaces; int firstleafsurface; } ;
typedef TYPE_3__ cLeaf_t ;
struct TYPE_9__ {int* leafbrushes; scalar_t__ checkcount; size_t* leafsurfaces; int * surfaces; TYPE_2__* brushes; TYPE_3__* leafs; } ;


 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0( leafList_t *VAR_3, int VAR_4 ) {
 int VAR_5, VAR_6;
 int VAR_7;
 int VAR_8;
 cLeaf_t *VAR_9;
 cbrush_t *VAR_10;

 VAR_7 = -1 - VAR_4;

 VAR_9 = &VAR_0.leafs[VAR_7];

 for ( VAR_6 = 0 ; VAR_6 < VAR_9->numLeafBrushes ; VAR_6++ ) {
  VAR_8 = VAR_0.leafbrushes[VAR_9->firstLeafBrush+VAR_6];
  VAR_10 = &VAR_0.brushes[VAR_8];
  if ( VAR_10->checkcount == VAR_0.checkcount ) {
   continue;
  }
  VAR_10->checkcount = VAR_0.checkcount;
  for ( VAR_5 = 0 ; VAR_5 < 3 ; VAR_5++ ) {
   if ( VAR_10->bounds[0][VAR_5] >= VAR_3->bounds[1][VAR_5] || VAR_10->bounds[1][VAR_5] <= VAR_3->bounds[0][VAR_5] ) {
    break;
   }
  }
  if ( VAR_5 != 3 ) {
   continue;
  }
  if ( VAR_3->count >= VAR_3->maxcount) {
   VAR_3->overflowed = VAR_2;
   return;
  }
  ((cbrush_t **)VAR_3->list)[ VAR_3->count++ ] = VAR_10;
 }
}
