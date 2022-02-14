
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_3__ {int time; int captures; int shutoutBonus; int skillBonus; int timeBonus; int baseScore; int blueScore; int redScore; int perfects; int score; int gauntlets; int assists; int defends; int excellents; int impressives; int accuracy; } ;
typedef TYPE_1__ postGameInfo_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,...) ;

void FUNC_2(postGameInfo_t *VAR_0, qboolean VAR_1) {
 FUNC_0("ui_scoreAccuracy", FUNC_1("%i%%", VAR_0->accuracy));
 FUNC_0("ui_scoreImpressives", FUNC_1("%i", VAR_0->impressives));
 FUNC_0("ui_scoreExcellents", FUNC_1("%i", VAR_0->excellents));
 FUNC_0("ui_scoreDefends", FUNC_1("%i", VAR_0->defends));
 FUNC_0("ui_scoreAssists", FUNC_1("%i", VAR_0->assists));
 FUNC_0("ui_scoreGauntlets", FUNC_1("%i", VAR_0->gauntlets));
 FUNC_0("ui_scoreScore", FUNC_1("%i", VAR_0->score));
 FUNC_0("ui_scorePerfect", FUNC_1("%i", VAR_0->perfects));
 FUNC_0("ui_scoreTeam", FUNC_1("%i to %i", VAR_0->redScore, VAR_0->blueScore));
 FUNC_0("ui_scoreBase", FUNC_1("%i", VAR_0->baseScore));
 FUNC_0("ui_scoreTimeBonus", FUNC_1("%i", VAR_0->timeBonus));
 FUNC_0("ui_scoreSkillBonus", FUNC_1("%i", VAR_0->skillBonus));
 FUNC_0("ui_scoreShutoutBonus", FUNC_1("%i", VAR_0->shutoutBonus));
 FUNC_0("ui_scoreTime", FUNC_1("%02i:%02i", VAR_0->time / 60, VAR_0->time % 60));
 FUNC_0("ui_scoreCaptures", FUNC_1("%i", VAR_0->captures));
  if (VAR_1) {
  FUNC_0("ui_scoreAccuracy2", FUNC_1("%i%%", VAR_0->accuracy));
  FUNC_0("ui_scoreImpressives2", FUNC_1("%i", VAR_0->impressives));
  FUNC_0("ui_scoreExcellents2", FUNC_1("%i", VAR_0->excellents));
  FUNC_0("ui_scoreDefends2", FUNC_1("%i", VAR_0->defends));
  FUNC_0("ui_scoreAssists2", FUNC_1("%i", VAR_0->assists));
  FUNC_0("ui_scoreGauntlets2", FUNC_1("%i", VAR_0->gauntlets));
  FUNC_0("ui_scoreScore2", FUNC_1("%i", VAR_0->score));
  FUNC_0("ui_scorePerfect2", FUNC_1("%i", VAR_0->perfects));
  FUNC_0("ui_scoreTeam2", FUNC_1("%i to %i", VAR_0->redScore, VAR_0->blueScore));
  FUNC_0("ui_scoreBase2", FUNC_1("%i", VAR_0->baseScore));
  FUNC_0("ui_scoreTimeBonus2", FUNC_1("%i", VAR_0->timeBonus));
  FUNC_0("ui_scoreSkillBonus2", FUNC_1("%i", VAR_0->skillBonus));
  FUNC_0("ui_scoreShutoutBonus2", FUNC_1("%i", VAR_0->shutoutBonus));
  FUNC_0("ui_scoreTime2", FUNC_1("%02i:%02i", VAR_0->time / 60, VAR_0->time % 60));
  FUNC_0("ui_scoreCaptures2", FUNC_1("%i", VAR_0->captures));
 }
}
