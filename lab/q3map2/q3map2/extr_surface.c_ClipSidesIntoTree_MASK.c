
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_14__ {int headnode; } ;
typedef TYPE_1__ tree_t ;
struct TYPE_15__ {int planenum; int * visibleHull; int * winding; TYPE_3__* shaderInfo; } ;
typedef TYPE_2__ side_t ;
struct TYPE_16__ {int compileFlags; scalar_t__ indexed; scalar_t__ noClip; scalar_t__ autosprite; } ;
typedef TYPE_3__ shaderInfo_t ;
struct TYPE_17__ {TYPE_5__* brushes; } ;
typedef TYPE_4__ entity_t ;
struct TYPE_18__ {int numsides; TYPE_2__* sides; struct TYPE_18__* next; } ;
typedef TYPE_5__ brush_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_5__*,TYPE_2__*,int *) ;
 int * FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ VAR_3 ;
 TYPE_2__* FUNC_6 (int) ;

void FUNC_7( entity_t *VAR_4, tree_t *VAR_5 ){
 brush_t *VAR_6;
 int VAR_7;
 winding_t *VAR_8;
 side_t *VAR_9, *VAR_10;
 shaderInfo_t *VAR_11;



 FUNC_2( VAR_4 );


 FUNC_5( VAR_2, "--- ClipSidesIntoTree ---\n" );


 for ( VAR_6 = VAR_4->brushes; VAR_6; VAR_6 = VAR_6->next )
 {

  for ( VAR_7 = 0; VAR_7 < VAR_6->numsides; VAR_7++ )
  {

   VAR_9 = &VAR_6->sides[ VAR_7 ];
   if ( VAR_9->winding == ((void*)0) ) {
    continue;
   }


   VAR_8 = FUNC_1( VAR_9->winding );
   VAR_9->visibleHull = ((void*)0);
   FUNC_0( VAR_8, VAR_9, VAR_5->headnode );


   VAR_8 = VAR_9->visibleHull;
   if ( VAR_8 == ((void*)0) ) {
    continue;
   }


   VAR_11 = VAR_9->shaderInfo;
   if ( VAR_11 == ((void*)0) ) {
    continue;
   }



   if ( ( VAR_11->compileFlags & VAR_1 ) && VAR_11->indexed == VAR_3 && !( VAR_11->compileFlags & VAR_0 ) ) {
    continue;
   }


   if ( VAR_11->autosprite || VAR_11->noClip ) {
    VAR_8 = VAR_9->winding;
   }


   FUNC_3( VAR_4, VAR_6, VAR_9, VAR_8 );


   if ( !( VAR_11->compileFlags & VAR_0 ) ) {
    continue;
   }


   VAR_8 = FUNC_4( VAR_8 );
   VAR_10 = FUNC_6( sizeof( *VAR_9 ) );
   *VAR_10 = *VAR_9;
   VAR_10->visibleHull = VAR_8;
   VAR_10->planenum ^= 1;


   FUNC_3( VAR_4, VAR_6, VAR_10, VAR_8 );
  }
 }
}
