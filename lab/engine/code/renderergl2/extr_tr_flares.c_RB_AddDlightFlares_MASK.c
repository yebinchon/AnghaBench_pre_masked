
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__** bounds; } ;
typedef TYPE_3__ fog_t ;
struct TYPE_11__ {scalar_t__* origin; int color; } ;
typedef TYPE_4__ dlight_t ;
struct TYPE_8__ {int num_dlights; TYPE_4__* dlights; } ;
struct TYPE_14__ {TYPE_1__ refdef; } ;
struct TYPE_13__ {int integer; } ;
struct TYPE_12__ {TYPE_2__* world; } ;
struct TYPE_9__ {int numfogs; TYPE_3__* fogs; } ;


 int FUNC_0 (void*,int,scalar_t__*,int ,int *) ;
 TYPE_7__ VAR_0 ;
 TYPE_6__* VAR_1 ;
 TYPE_5__ VAR_2 ;

void FUNC_1( void ) {
 dlight_t *VAR_3;
 int VAR_4, VAR_5, VAR_6;
 fog_t *VAR_7 = ((void*)0);

 if ( !VAR_1->integer ) {
  return;
 }

 VAR_3 = VAR_0.refdef.dlights;

 if(VAR_2.world)
  VAR_7 = VAR_2.world->fogs;

 for (VAR_4=0 ; VAR_4<VAR_0.refdef.num_dlights ; VAR_4++, VAR_3++) {

  if(VAR_7)
  {

   for ( VAR_5 = 1 ; VAR_5 < VAR_2.world->numfogs ; VAR_5++ ) {
    VAR_7 = &VAR_2.world->fogs[VAR_5];
    for ( VAR_6 = 0 ; VAR_6 < 3 ; VAR_6++ ) {
     if ( VAR_3->origin[VAR_6] < VAR_7->bounds[0][VAR_6] || VAR_3->origin[VAR_6] > VAR_7->bounds[1][VAR_6] ) {
      break;
     }
    }
    if ( VAR_6 == 3 ) {
     break;
    }
   }
   if ( VAR_5 == VAR_2.world->numfogs ) {
    VAR_5 = 0;
   }
  }
  else
   VAR_5 = 0;

  FUNC_0( (void *)VAR_3, VAR_5, VAR_3->origin, VAR_3->color, ((void*)0) );
 }
}
