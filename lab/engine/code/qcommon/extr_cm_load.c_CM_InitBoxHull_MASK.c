
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int type; int* normal; scalar_t__ signbits; } ;
typedef TYPE_2__ cplane_t ;
struct TYPE_11__ {scalar_t__ surfaceFlags; TYPE_2__* plane; } ;
typedef TYPE_3__ cbrushside_t ;
struct TYPE_14__ {int numsides; int contents; TYPE_3__* sides; } ;
struct TYPE_9__ {int numLeafBrushes; size_t firstLeafBrush; } ;
struct TYPE_13__ {TYPE_1__ leaf; } ;
struct TYPE_12__ {size_t numPlanes; size_t numBrushes; int numBrushSides; size_t numLeafBrushes; size_t* leafbrushes; TYPE_2__* planes; TYPE_3__* brushsides; TYPE_7__* brushes; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int*) ;
 TYPE_7__* VAR_1 ;
 TYPE_6__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_4__ VAR_4 ;

void FUNC_2 (void)
{
 int VAR_5;
 int VAR_6;
 cplane_t *VAR_7;
 cbrushside_t *VAR_8;

 VAR_3 = &VAR_4.planes[VAR_4.numPlanes];

 VAR_1 = &VAR_4.brushes[VAR_4.numBrushes];
 VAR_1->numsides = 6;
 VAR_1->sides = VAR_4.brushsides + VAR_4.numBrushSides;
 VAR_1->contents = VAR_0;

 VAR_2.leaf.numLeafBrushes = 1;

 VAR_2.leaf.firstLeafBrush = VAR_4.numLeafBrushes;
 VAR_4.leafbrushes[VAR_4.numLeafBrushes] = VAR_4.numBrushes;

 for (VAR_5=0 ; VAR_5<6 ; VAR_5++)
 {
  VAR_6 = VAR_5&1;


  VAR_8 = &VAR_4.brushsides[VAR_4.numBrushSides+VAR_5];
  VAR_8->plane = VAR_4.planes + (VAR_4.numPlanes+VAR_5*2+VAR_6);
  VAR_8->surfaceFlags = 0;


  VAR_7 = &VAR_3[VAR_5*2];
  VAR_7->type = VAR_5>>1;
  VAR_7->signbits = 0;
  FUNC_1 (VAR_7->normal);
  VAR_7->normal[VAR_5>>1] = 1;

  VAR_7 = &VAR_3[VAR_5*2+1];
  VAR_7->type = 3 + (VAR_5>>1);
  VAR_7->signbits = 0;
  FUNC_1 (VAR_7->normal);
  VAR_7->normal[VAR_5>>1] = -1;

  FUNC_0( VAR_7 );
 }
}
