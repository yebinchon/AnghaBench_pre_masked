
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int compileFlags; int numTestNodes; float distance; scalar_t__ numSurfaces; size_t* surfaces; size_t* testNodes; int end; int origin; scalar_t__ testAll; void* opaque; void* passSolid; int testOcclusion; int recvShadows; } ;
typedef TYPE_1__ trace_t ;
struct TYPE_12__ {size_t infoNum; } ;
typedef TYPE_2__ traceTriangle_t ;
struct TYPE_13__ {int numItems; size_t* items; } ;
typedef TYPE_3__ traceNode_t ;
typedef int traceInfo_t ;
struct TYPE_14__ {scalar_t__ childSurfaceNum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*,TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 TYPE_6__* VAR_7 ;
 int * VAR_8 ;
 TYPE_3__* VAR_9 ;
 TYPE_2__* VAR_10 ;

void FUNC_2( trace_t *VAR_11 ){
 int VAR_12, VAR_13;
 traceNode_t *VAR_14;
 traceTriangle_t *VAR_15;
 traceInfo_t *VAR_16;



 VAR_11->passSolid = VAR_4;
 VAR_11->opaque = VAR_4;
 VAR_11->compileFlags = 0;
 VAR_11->numTestNodes = 0;


 if ( !VAR_11->recvShadows || !VAR_11->testOcclusion || VAR_11->distance <= 0.00001f ) {
  return;
 }


 FUNC_0( VAR_2, VAR_11->origin, VAR_11->end, VAR_11 );
 if ( VAR_11->passSolid && !VAR_11->testAll ) {
  VAR_11->opaque = VAR_5;
  return;
 }


 if ( VAR_3 ) {
  return;
 }


 if ( VAR_11->testAll && VAR_11->numTestNodes < VAR_1 &&
   VAR_11->compileFlags & VAR_0 &&
   ( VAR_11->numSurfaces == 0 || VAR_7[ VAR_11->surfaces[ 0 ] ].childSurfaceNum < 0 ) ) {

  FUNC_0( VAR_6, VAR_11->origin, VAR_11->end, VAR_11 );
 }


 for ( VAR_12 = 0; VAR_12 < VAR_11->numTestNodes; VAR_12++ )
 {

  VAR_14 = &VAR_9[ VAR_11->testNodes[ VAR_12 ] ];


  for ( VAR_13 = 0; VAR_13 < VAR_14->numItems; VAR_13++ )
  {
   VAR_15 = &VAR_10[ VAR_14->items[ VAR_13 ] ];
   VAR_16 = &VAR_8[ VAR_15->infoNum ];
   if ( FUNC_1( VAR_16, VAR_15, VAR_11 ) ) {
    return;
   }


  }
 }
}
