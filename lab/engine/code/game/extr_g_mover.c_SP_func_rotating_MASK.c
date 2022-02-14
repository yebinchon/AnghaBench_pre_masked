
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int currentAngles; int currentOrigin; } ;
struct TYPE_11__ {int* trDelta; int trBase; int trType; } ;
struct TYPE_10__ {int trBase; } ;
struct TYPE_12__ {TYPE_2__ apos; TYPE_1__ pos; int origin; } ;
struct TYPE_14__ {int speed; int spawnflags; int damage; TYPE_4__ r; TYPE_3__ s; int model; } ;
typedef TYPE_5__ gentity_t ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*,int ) ;

void FUNC_4 (gentity_t *VAR_1) {
 if ( !VAR_1->speed ) {
  VAR_1->speed = 100;
 }


 VAR_1->s.apos.trType = VAR_0;
 if ( VAR_1->spawnflags & 4 ) {
  VAR_1->s.apos.trDelta[2] = VAR_1->speed;
 } else if ( VAR_1->spawnflags & 8 ) {
  VAR_1->s.apos.trDelta[0] = VAR_1->speed;
 } else {
  VAR_1->s.apos.trDelta[1] = VAR_1->speed;
 }

 if (!VAR_1->damage) {
  VAR_1->damage = 2;
 }

 FUNC_3( VAR_1, VAR_1->model );
 FUNC_0( VAR_1 );

 FUNC_1( VAR_1->s.origin, VAR_1->s.pos.trBase );
 FUNC_1( VAR_1->s.pos.trBase, VAR_1->r.currentOrigin );
 FUNC_1( VAR_1->s.apos.trBase, VAR_1->r.currentAngles );

 FUNC_2( VAR_1 );
}
