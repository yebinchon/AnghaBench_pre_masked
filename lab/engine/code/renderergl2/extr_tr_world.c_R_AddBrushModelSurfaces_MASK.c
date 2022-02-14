
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int hModel; } ;
struct TYPE_15__ {TYPE_1__ e; } ;
typedef TYPE_4__ trRefEntity_t ;
struct TYPE_16__ {TYPE_6__* bmodel; } ;
typedef TYPE_5__ model_t ;
struct TYPE_17__ {int numSurfaces; int firstSurface; int bounds; } ;
typedef TYPE_6__ bmodel_t ;
struct TYPE_18__ {scalar_t__ viewCount; TYPE_3__* currentEntity; TYPE_2__* world; int refdef; } ;
struct TYPE_14__ {int needDlights; } ;
struct TYPE_13__ {scalar_t__* surfacesViewCount; scalar_t__ surfaces; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*) ;
 TYPE_5__* FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_4__*) ;
 TYPE_7__ VAR_1 ;

void FUNC_5 ( trRefEntity_t *VAR_2 ) {
 bmodel_t *VAR_3;
 int VAR_4;
 model_t *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3( VAR_2->e.hModel );

 VAR_3 = VAR_5->bmodel;

 VAR_4 = FUNC_1( VAR_3->bounds );
 if ( VAR_4 == VAR_0 ) {
  return;
 }

 FUNC_4( &VAR_1.refdef, VAR_2 );
 FUNC_2( VAR_3 );

 for ( VAR_6 = 0 ; VAR_6 < VAR_3->numSurfaces ; VAR_6++ ) {
  int VAR_7 = VAR_3->firstSurface + VAR_6;

  if (VAR_1.world->surfacesViewCount[VAR_7] != VAR_1.viewCount)
  {
   VAR_1.world->surfacesViewCount[VAR_7] = VAR_1.viewCount;
   FUNC_0( VAR_1.world->surfaces + VAR_7, VAR_1.currentEntity->needDlights, 0 );
  }
 }
}
