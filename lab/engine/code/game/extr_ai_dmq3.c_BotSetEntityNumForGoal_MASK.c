
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_7__ {int origin; } ;
struct TYPE_8__ {TYPE_1__ s; int classname; int inuse; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_9__ {int entitynum; int origin; } ;
typedef TYPE_3__ bot_goal_t ;
struct TYPE_10__ {int num_entities; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_2__* VAR_0 ;
 TYPE_4__ VAR_1 ;

void FUNC_4(bot_goal_t *VAR_2, char *VAR_3) {
 gentity_t *VAR_4;
 int VAR_5;
 vec3_t VAR_6;

 VAR_4 = &VAR_0[0];
 for (VAR_5 = 0; VAR_5 < VAR_1.num_entities; VAR_5++, VAR_4++) {
  if ( !VAR_4->inuse ) {
   continue;
  }
  if ( !FUNC_0(VAR_4->classname, VAR_3) ) {
   continue;
  }
  FUNC_3(VAR_2->origin, VAR_4->s.origin, VAR_6);
  if (FUNC_2(VAR_6) < FUNC_1(10)) {
   VAR_2->entitynum = VAR_5;
   return;
  }
 }
}
