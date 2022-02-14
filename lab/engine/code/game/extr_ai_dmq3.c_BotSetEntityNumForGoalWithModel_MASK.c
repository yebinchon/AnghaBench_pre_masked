
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_7__ {int eType; int modelindex; int origin; } ;
struct TYPE_8__ {TYPE_1__ s; int inuse; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_9__ {int entitynum; int origin; } ;
typedef TYPE_3__ bot_goal_t ;
struct TYPE_10__ {int num_entities; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_2__* VAR_0 ;
 TYPE_4__ VAR_1 ;

void FUNC_4(bot_goal_t *VAR_2, int VAR_3, char *VAR_4) {
 gentity_t *VAR_5;
 int VAR_6, VAR_7;
 vec3_t VAR_8;

 VAR_7 = FUNC_0( VAR_4 );
 VAR_5 = &VAR_0[0];
 for (VAR_6 = 0; VAR_6 < VAR_1.num_entities; VAR_6++, VAR_5++) {
  if ( !VAR_5->inuse ) {
   continue;
  }
  if ( VAR_3 && VAR_5->s.eType != VAR_3) {
   continue;
  }
  if (VAR_5->s.modelindex != VAR_7) {
   continue;
  }
  FUNC_3(VAR_2->origin, VAR_5->s.origin, VAR_8);
  if (FUNC_2(VAR_8) < FUNC_1(10)) {
   VAR_2->entitynum = VAR_6;
   return;
  }
 }
}
