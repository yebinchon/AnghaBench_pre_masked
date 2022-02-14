
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_11__ {int currentOrigin; int ownerNum; int svFlags; } ;
struct TYPE_9__ {int trDelta; int trBase; scalar_t__ trTime; int trType; } ;
struct TYPE_10__ {TYPE_1__ pos; int number; int eFlags; int weapon; int eType; } ;
struct TYPE_12__ {char* classname; int damage; int splashDamage; int splashRadius; TYPE_3__ r; TYPE_2__ s; int * target_ent; int clipmask; int splashMethodOfDeath; int methodOfDeath; struct TYPE_12__* parent; int think; scalar_t__ nextthink; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_13__ {scalar_t__ time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 () ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ) ;
 int VAR_9 ;
 TYPE_5__ VAR_10 ;

gentity_t *FUNC_5 (gentity_t *VAR_11, vec3_t VAR_12, vec3_t VAR_13) {
 gentity_t *VAR_14;

 FUNC_3 (VAR_13);

 VAR_14 = FUNC_0();
 VAR_14->classname = "grenade";
 VAR_14->nextthink = VAR_10.time + 2500;
 VAR_14->think = VAR_2;
 VAR_14->s.eType = VAR_1;
 VAR_14->r.svFlags = VAR_7;
 VAR_14->s.weapon = VAR_9;
 VAR_14->s.eFlags = VAR_0;
 VAR_14->r.ownerNum = VAR_11->s.number;
 VAR_14->parent = VAR_11;
 VAR_14->damage = 100;
 VAR_14->splashDamage = 100;
 VAR_14->splashRadius = 150;
 VAR_14->methodOfDeath = VAR_5;
 VAR_14->splashMethodOfDeath = VAR_6;
 VAR_14->clipmask = VAR_3;
 VAR_14->target_ent = ((void*)0);

 VAR_14->s.pos.trType = VAR_8;
 VAR_14->s.pos.trTime = VAR_10.time - VAR_4;
 FUNC_2( VAR_12, VAR_14->s.pos.trBase );
 FUNC_4( VAR_13, 700, VAR_14->s.pos.trDelta );
 FUNC_1( VAR_14->s.pos.trDelta );

 FUNC_2 (VAR_12, VAR_14->r.currentOrigin);

 return VAR_14;
}
