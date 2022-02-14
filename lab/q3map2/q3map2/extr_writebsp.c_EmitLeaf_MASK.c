
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* drawSurfReferences; scalar_t__ opaque; TYPE_5__* brushlist; int maxs; int mins; int area; int cluster; } ;
typedef TYPE_2__ node_t ;
struct TYPE_11__ {int outputNum; struct TYPE_11__* nextRef; } ;
typedef TYPE_3__ drawSurfRef_t ;
struct TYPE_12__ {size_t firstBSPLeafBrush; size_t numBSPLeafBrushes; size_t firstBSPLeafSurface; size_t numBSPLeafSurfaces; int maxs; int mins; int area; int cluster; } ;
typedef TYPE_4__ bspLeaf_t ;
struct TYPE_13__ {TYPE_1__* original; struct TYPE_13__* next; } ;
typedef TYPE_5__ brush_t ;
struct TYPE_9__ {int outputNum; } ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,TYPE_5__*) ;
 int FUNC_2 (int ,int ) ;
 int * VAR_4 ;
 int * VAR_5 ;
 TYPE_4__* VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;

void FUNC_3( node_t *VAR_10 ){
 bspLeaf_t *VAR_11;
 brush_t *VAR_12;
 drawSurfRef_t *VAR_13;



 if ( VAR_9 >= VAR_2 ) {
  FUNC_0( "MAX_MAP_LEAFS" );
 }

 VAR_11 = &VAR_6[VAR_9];
 VAR_9++;

 VAR_11->cluster = VAR_10->cluster;
 VAR_11->area = VAR_10->area;


 FUNC_2( VAR_10->mins, VAR_11->mins );
 FUNC_2( VAR_10->maxs, VAR_11->maxs );


 VAR_11->firstBSPLeafBrush = VAR_7;
 for ( VAR_12 = VAR_10->brushlist; VAR_12; VAR_12 = VAR_12->next )
 {

  if ( (size_t) VAR_12 < 256 ) {
   FUNC_1( VAR_3, "WARNING: Node brush list corrupted (0x%08X)\n", VAR_12 );
   break;
  }



  if ( VAR_7 >= VAR_0 ) {
   FUNC_0( "MAX_MAP_LEAFBRUSHES" );
  }
  VAR_4[ VAR_7 ] = VAR_12->original->outputNum;
  VAR_7++;
 }

 VAR_11->numBSPLeafBrushes = VAR_7 - VAR_11->firstBSPLeafBrush;


 if ( VAR_10->opaque ) {
  return;
 }


 VAR_11->firstBSPLeafSurface = VAR_8;
 for ( VAR_13 = VAR_10->drawSurfReferences; VAR_13; VAR_13 = VAR_13->nextRef )
 {
  if ( VAR_8 >= VAR_1 ) {
   FUNC_0( "MAX_MAP_LEAFFACES" );
  }
  VAR_5[ VAR_8 ] = VAR_13->outputNum;
  VAR_8++;
 }

 VAR_11->numBSPLeafSurfaces = VAR_8 - VAR_11->firstBSPLeafSurface;
}
