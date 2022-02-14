
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int netname ;
typedef int classname ;
typedef int buf ;
struct TYPE_7__ {int client; } ;
typedef TYPE_2__ bot_state_t ;
struct TYPE_6__ {int areanum; int * origin; } ;
struct TYPE_8__ {TYPE_1__ goal; scalar_t__ shoot; } ;
typedef TYPE_3__ bot_activategoal_t ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int,char*,char*,char*,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int,char*,char*,int) ;
 int FUNC_3 (int ,char*) ;

void FUNC_4(bot_state_t *VAR_1, bot_activategoal_t *VAR_2, int VAR_3) {
 char VAR_4[VAR_0];
 char VAR_5[128];
 char VAR_6[128];

 FUNC_0(VAR_1->client, VAR_4, sizeof(VAR_4));
 FUNC_2(VAR_3, "classname", VAR_5, sizeof(VAR_5));
 if (VAR_2->shoot) {
  FUNC_1(VAR_6, sizeof(VAR_6), "%s: I have to shoot at a %s from %1.1f %1.1f %1.1f in area %d\n",
      VAR_4, VAR_5,
      VAR_2->goal.origin[0],
      VAR_2->goal.origin[1],
      VAR_2->goal.origin[2],
      VAR_2->goal.areanum);
 }
 else {
  FUNC_1(VAR_6, sizeof(VAR_6), "%s: I have to activate a %s at %1.1f %1.1f %1.1f in area %d\n",
      VAR_4, VAR_5,
      VAR_2->goal.origin[0],
      VAR_2->goal.origin[1],
      VAR_2->goal.origin[2],
      VAR_2->goal.areanum);
 }
 FUNC_3(VAR_1->client, VAR_6);
}
