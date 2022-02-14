
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {struct TYPE_13__* next; struct TYPE_13__* prev; } ;
typedef TYPE_1__ bot_waypoint_t ;
struct TYPE_14__ {int patrolflags; TYPE_1__* patrolpoints; TYPE_1__* curpatrolpoint; int client; } ;
typedef TYPE_2__ bot_state_t ;
struct TYPE_15__ {int subtype; } ;
typedef TYPE_3__ bot_match_t ;
struct TYPE_16__ {int areanum; int origin; } ;
typedef TYPE_4__ bot_goal_t ;


 TYPE_1__* FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,char*,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (char*,TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,int ,char*,int) ;
 int FUNC_5 (int ,char*) ;

int FUNC_6(bot_state_t *VAR_11, bot_match_t *VAR_12) {
 char VAR_13[VAR_1];
 int VAR_14;
 bot_waypoint_t *VAR_15, *VAR_16, *VAR_17;
 bot_match_t VAR_18;
 bot_goal_t VAR_19;

 VAR_17 = ((void*)0);
 VAR_14 = 0;

 FUNC_4(VAR_12, VAR_0, VAR_13, VAR_1);

 while(1) {
  if (!FUNC_3(VAR_13, &VAR_18, VAR_3)) {
   FUNC_5(VAR_11->client, "what do you say?");
   FUNC_1(VAR_17);
   VAR_11->patrolpoints = ((void*)0);
   return VAR_9;
  }
  FUNC_4(&VAR_18, VAR_0, VAR_13, VAR_1);
  if (!FUNC_2(VAR_11, VAR_13, &VAR_19)) {


   FUNC_1(VAR_17);
   VAR_11->patrolpoints = ((void*)0);
   return VAR_9;
  }

  VAR_16 = FUNC_0(VAR_13, VAR_19.origin, VAR_19.areanum);
  if (!VAR_16)
   break;

  VAR_16->next = ((void*)0);
  for (VAR_15 = VAR_17; VAR_15 && VAR_15->next; VAR_15 = VAR_15->next);
  if (!VAR_15) {
   VAR_17 = VAR_16;
   VAR_16->prev = ((void*)0);
  }
  else {
   VAR_15->next = VAR_16;
   VAR_16->prev = VAR_15;
  }

  if (VAR_18.subtype & VAR_6) {
   VAR_14 = VAR_4;
   break;
  }
  else if (VAR_18.subtype & VAR_8) {
   VAR_14 = VAR_5;
   break;
  }
  else if (VAR_18.subtype & VAR_7) {
   FUNC_4(&VAR_18, VAR_2, VAR_13, VAR_1);
  }
  else {
   break;
  }
 }

 if (!VAR_17 || !VAR_17->next) {
  FUNC_5(VAR_11->client, "I need more key points to patrol\n");
  FUNC_1(VAR_17);
  VAR_17 = ((void*)0);
  return VAR_9;
 }

 FUNC_1(VAR_11->patrolpoints);
 VAR_11->patrolpoints = VAR_17;

 VAR_11->curpatrolpoint = VAR_11->patrolpoints;
 VAR_11->patrolflags = VAR_14;

 return VAR_10;
}
