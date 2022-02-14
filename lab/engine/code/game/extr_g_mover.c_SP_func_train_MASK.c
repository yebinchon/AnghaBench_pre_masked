
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int absmin; } ;
struct TYPE_10__ {int angles; } ;
struct TYPE_11__ {int spawnflags; int damage; int speed; int think; scalar_t__ nextthink; int reached; int model; TYPE_1__ r; int target; TYPE_2__ s; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_12__ {scalar_t__ time; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 TYPE_5__ VAR_4 ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int ) ;

void FUNC_6 (gentity_t *VAR_5) {
 FUNC_3 (VAR_5->s.angles);

 if (VAR_5->spawnflags & VAR_2) {
  VAR_5->damage = 0;
 } else {
  if (!VAR_5->damage) {
   VAR_5->damage = 2;
  }
 }

 if ( !VAR_5->speed ) {
  VAR_5->speed = 100;
 }

 if ( !VAR_5->target ) {
  FUNC_1 ("func_train without a target at %s\n", FUNC_5(VAR_5->r.absmin));
  FUNC_0( VAR_5 );
  return;
 }

 FUNC_4( VAR_5, VAR_5->model );
 FUNC_2( VAR_5 );

 VAR_5->reached = VAR_1;



 VAR_5->nextthink = VAR_4.time + VAR_0;
 VAR_5->think = VAR_3;
}
