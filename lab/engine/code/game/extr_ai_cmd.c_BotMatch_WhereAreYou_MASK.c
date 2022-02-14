
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int netname ;
struct TYPE_10__ {int cs; int origin; int areanum; } ;
typedef TYPE_1__ bot_state_t ;
typedef int bot_match_t ;
typedef int bot_goal_t ;
struct TYPE_14__ {int areanum; } ;
struct TYPE_13__ {int areanum; } ;
struct TYPE_12__ {int areanum; } ;
struct TYPE_11__ {int areanum; } ;


 int FUNC_0 (TYPE_1__*,char*,char*,char*,...) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 float FUNC_2 (TYPE_1__*,char*,int *) ;
 int VAR_0 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 () ;
 TYPE_5__ VAR_8 ;
 TYPE_4__ VAR_9 ;
 TYPE_3__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_2__ VAR_12 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int *,int ,char*,int) ;

void FUNC_8(bot_state_t *VAR_13, bot_match_t *VAR_14) {
 float VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 bot_goal_t VAR_22;
 char VAR_23[VAR_5];
 char *VAR_24[] = {
  "Shotgun",
  "Grenade Launcher",
  "Rocket Launcher",
  "Plasmagun",
  "Railgun",
  "Lightning Gun",
  "BFG10K",
  "Quad Damage",
  "Regeneration",
  "Battle Suit",
  "Speed",
  "Invisibility",
  "Flight",
  "Armor",
  "Heavy Armor",
  "Red Flag",
  "Blue Flag",
  ((void*)0)
 };

 if (!FUNC_4())
  return;

 if (!FUNC_1(VAR_13, VAR_14))
  return;

 VAR_18 = -1;
 VAR_16 = 999999;
 for (VAR_17 = 0; VAR_24[VAR_17]; VAR_17++) {
  VAR_15 = FUNC_2(VAR_13, VAR_24[VAR_17], &VAR_22);
  if (VAR_15 < VAR_16) {
   VAR_16 = VAR_15;
   VAR_18 = VAR_17;
  }
 }
 if (VAR_18 != -1) {
  if (VAR_11 == VAR_2



   ) {
   VAR_19 = FUNC_5(VAR_13->areanum, VAR_13->origin, VAR_10.areanum, VAR_7);
   VAR_20 = FUNC_5(VAR_13->areanum, VAR_13->origin, VAR_9.areanum, VAR_7);
   if (VAR_19 < (VAR_19 + VAR_20) * 0.4) {
    FUNC_0(VAR_13, "teamlocation", VAR_24[VAR_18], "red", ((void*)0));
   }
   else if (VAR_20 < (VAR_19 + VAR_20) * 0.4) {
    FUNC_0(VAR_13, "teamlocation", VAR_24[VAR_18], "blue", ((void*)0));
   }
   else {
    FUNC_0(VAR_13, "location", VAR_24[VAR_18], ((void*)0));
   }
  }
  else {
   FUNC_0(VAR_13, "location", VAR_24[VAR_18], ((void*)0));
  }
  FUNC_7(VAR_14, VAR_6, VAR_23, sizeof(VAR_23));
  VAR_21 = FUNC_3(VAR_23);
  FUNC_6(VAR_13->cs, VAR_21, VAR_0);
 }
}
