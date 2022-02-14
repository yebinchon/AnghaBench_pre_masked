
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int axis; scalar_t__ dist; struct TYPE_12__** children; TYPE_3__* entities; } ;
typedef TYPE_2__ worldSector_t ;
struct TYPE_13__ {struct TYPE_13__* nextEntityInWorldSector; } ;
typedef TYPE_3__ svEntity_t ;
struct TYPE_11__ {scalar_t__* absmin; scalar_t__* absmax; } ;
struct TYPE_14__ {TYPE_1__ r; } ;
typedef TYPE_4__ sharedEntity_t ;
struct TYPE_15__ {scalar_t__* maxs; scalar_t__* mins; size_t count; size_t maxcount; TYPE_3__** list; } ;
typedef TYPE_5__ areaParms_t ;
struct TYPE_16__ {int svEntities; } ;


 int FUNC_0 (char*) ;
 TYPE_4__* FUNC_1 (TYPE_3__*) ;
 TYPE_6__ VAR_0 ;

__attribute__((used)) static void FUNC_2( worldSector_t *VAR_1, areaParms_t *VAR_2 ) {
 svEntity_t *VAR_3, *VAR_4;
 sharedEntity_t *VAR_5;

 for ( VAR_3 = VAR_1->entities ; VAR_3 ; VAR_3 = VAR_4 ) {
  VAR_4 = VAR_3->nextEntityInWorldSector;

  VAR_5 = FUNC_1( VAR_3 );

  if ( VAR_5->r.absmin[0] > VAR_2->maxs[0]
  || VAR_5->r.absmin[1] > VAR_2->maxs[1]
  || VAR_5->r.absmin[2] > VAR_2->maxs[2]
  || VAR_5->r.absmax[0] < VAR_2->mins[0]
  || VAR_5->r.absmax[1] < VAR_2->mins[1]
  || VAR_5->r.absmax[2] < VAR_2->mins[2]) {
   continue;
  }

  if ( VAR_2->count == VAR_2->maxcount ) {
   FUNC_0 ("SV_AreaEntities: MAXCOUNT\n");
   return;
  }

  VAR_2->list[VAR_2->count] = VAR_3 - VAR_0.svEntities;
  VAR_2->count++;
 }

 if (VAR_1->axis == -1) {
  return;
 }


 if ( VAR_2->maxs[VAR_1->axis] > VAR_1->dist ) {
  FUNC_2 ( VAR_1->children[0], VAR_2 );
 }
 if ( VAR_2->mins[VAR_1->axis] < VAR_1->dist ) {
  FUNC_2 ( VAR_1->children[1], VAR_2 );
 }
}
