
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


typedef int vec3_t ;
struct TYPE_11__ {int velocity; int origin; } ;
typedef TYPE_4__ playerState_t ;
struct TYPE_8__ {int origin; } ;
struct TYPE_12__ {void (* think ) (TYPE_5__*) ;scalar_t__ nextthink; TYPE_1__ s; int id; TYPE_3__* activator; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_13__ {scalar_t__ time; } ;
struct TYPE_10__ {TYPE_2__* client; } ;
struct TYPE_9__ {TYPE_4__ ps; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,float,float,float) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 TYPE_6__ VAR_1 ;

void FUNC_3( gentity_t *VAR_2 ) {
 vec3_t VAR_3;
 vec3_t VAR_4;
 playerState_t* VAR_5 = &(VAR_2->activator->client->ps);

 FUNC_1(VAR_3, 0.0f, 0.0f, 0.0f);
 FUNC_1(VAR_4, 0.0f, 0.0f, 0.0f);

 FUNC_2(VAR_2->id, VAR_2->s.origin, VAR_5->origin, VAR_5->velocity, VAR_3, VAR_4);

 FUNC_0(VAR_5->origin, VAR_3, VAR_5->origin);
 FUNC_0(VAR_5->velocity, VAR_4, VAR_5->velocity);

 VAR_2->nextthink = VAR_1.time + VAR_0;
 VAR_2->think = FUNC_3;
}
