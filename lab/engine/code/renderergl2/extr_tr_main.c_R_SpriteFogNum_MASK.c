
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


struct TYPE_10__ {int renderfx; scalar_t__* origin; scalar_t__ radius; } ;
struct TYPE_11__ {TYPE_3__ e; } ;
typedef TYPE_4__ trRefEntity_t ;
struct TYPE_12__ {scalar_t__** bounds; } ;
typedef TYPE_5__ fog_t ;
struct TYPE_8__ {int rdflags; } ;
struct TYPE_13__ {TYPE_2__* world; TYPE_1__ refdef; } ;
struct TYPE_9__ {int numfogs; TYPE_5__* fogs; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__ VAR_2 ;

int FUNC_0( trRefEntity_t *VAR_3 ) {
 int VAR_4, VAR_5;
 fog_t *VAR_6;

 if ( VAR_2.refdef.rdflags & VAR_0 ) {
  return 0;
 }

 if ( VAR_3->e.renderfx & VAR_1 ) {
  return 0;
 }

 for ( VAR_4 = 1 ; VAR_4 < VAR_2.world->numfogs ; VAR_4++ ) {
  VAR_6 = &VAR_2.world->fogs[VAR_4];
  for ( VAR_5 = 0 ; VAR_5 < 3 ; VAR_5++ ) {
   if ( VAR_3->e.origin[VAR_5] - VAR_3->e.radius >= VAR_6->bounds[1][VAR_5] ) {
    break;
   }
   if ( VAR_3->e.origin[VAR_5] + VAR_3->e.radius <= VAR_6->bounds[0][VAR_5] ) {
    break;
   }
  }
  if ( VAR_5 == 3 ) {
   return VAR_4;
  }
 }

 return 0;
}
