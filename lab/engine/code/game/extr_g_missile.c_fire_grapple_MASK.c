
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_12__ {int currentOrigin; int ownerNum; int svFlags; } ;
struct TYPE_10__ {int trDelta; int trBase; scalar_t__ trTime; int trType; } ;
struct TYPE_11__ {TYPE_1__ pos; int number; int otherEntityNum; int weapon; int eType; } ;
struct TYPE_14__ {char* classname; TYPE_4__* client; TYPE_3__ r; TYPE_2__ s; int * target_ent; struct TYPE_14__* parent; int clipmask; int methodOfDeath; int think; scalar_t__ nextthink; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_15__ {scalar_t__ time; } ;
struct TYPE_13__ {TYPE_5__* hook; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_6__ VAR_8 ;

gentity_t *FUNC_5 (gentity_t *VAR_9, vec3_t VAR_10, vec3_t VAR_11) {
 gentity_t *VAR_12;

 FUNC_3 (VAR_11);

 VAR_12 = FUNC_0();
 VAR_12->classname = "hook";
 VAR_12->nextthink = VAR_8.time + 10000;
 VAR_12->think = VAR_7;
 VAR_12->s.eType = VAR_0;
 VAR_12->r.svFlags = VAR_4;
 VAR_12->s.weapon = VAR_6;
 VAR_12->r.ownerNum = VAR_9->s.number;
 VAR_12->methodOfDeath = VAR_3;
 VAR_12->clipmask = VAR_1;
 VAR_12->parent = VAR_9;
 VAR_12->target_ent = ((void*)0);

 VAR_12->s.pos.trType = VAR_5;
 VAR_12->s.pos.trTime = VAR_8.time - VAR_2;
 VAR_12->s.otherEntityNum = VAR_9->s.number;
 FUNC_2( VAR_10, VAR_12->s.pos.trBase );
 FUNC_4( VAR_11, 800, VAR_12->s.pos.trDelta );
 FUNC_1( VAR_12->s.pos.trDelta );
 FUNC_2 (VAR_10, VAR_12->r.currentOrigin);

 VAR_9->client->hook = VAR_12;

 return VAR_12;
}
