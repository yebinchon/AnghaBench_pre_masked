
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
typedef int model ;
struct TYPE_7__ {int areanum; int origin; } ;
typedef TYPE_2__ bot_state_t ;
struct TYPE_6__ {int entitynum; int maxs; int mins; int areanum; int origin; scalar_t__ flags; scalar_t__ number; } ;
struct TYPE_8__ {int shoot; TYPE_1__ goal; int target; } ;
typedef TYPE_3__ bot_activategoal_t ;


 int FUNC_0 (int,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,double,int ) ;
 int FUNC_4 (int ,int,int,int) ;
 int FUNC_5 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int,char*,char*,int) ;

int FUNC_7(bot_state_t *VAR_4, int VAR_5, bot_activategoal_t *VAR_6) {
 int VAR_7, VAR_8;
 char VAR_9[VAR_1];
 vec3_t VAR_10, VAR_11, VAR_12;


 FUNC_6(VAR_5, "model", VAR_9, sizeof(VAR_9));
 if (!*VAR_9)
  return VAR_2;
 VAR_7 = FUNC_5(VAR_9+1);
 if (!VAR_7)
  return VAR_2;
 VAR_8 = FUNC_0(VAR_7, VAR_0, 0, VAR_10, VAR_11);

 FUNC_1(VAR_10, VAR_11, VAR_12);
 FUNC_3(VAR_12, 0.5, VAR_12);
 FUNC_2(VAR_12, VAR_6->target);
 VAR_6->shoot = VAR_3;

 VAR_6->goal.entitynum = VAR_8;
 VAR_6->goal.number = 0;
 VAR_6->goal.flags = 0;
 FUNC_2(VAR_4->origin, VAR_6->goal.origin);
 VAR_6->goal.areanum = VAR_4->areanum;
 FUNC_4(VAR_6->goal.mins, -8, -8, -8);
 FUNC_4(VAR_6->goal.maxs, 8, 8, 8);
 return VAR_3;
}
