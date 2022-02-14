
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int* vec3_t ;
typedef int model ;
typedef int bot_state_t ;
struct TYPE_4__ {int* origin; int areanum; int entitynum; scalar_t__ flags; scalar_t__ number; int maxs; int mins; } ;
struct TYPE_5__ {int shoot; TYPE_1__ goal; int target; } ;
typedef TYPE_2__ bot_activategoal_t ;


 int FUNC_0 (int,int ,int ,int*,int*) ;
 int VAR_0 ;
 int FUNC_1 (int*,int*,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int*) ;
 int FUNC_4 (int*,double,int*) ;
 int FUNC_5 (int*,int*,int ) ;
 int FUNC_6 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int*,int*,int*,int *,int) ;
 int FUNC_9 (int,char*,char*,int) ;

int FUNC_10(bot_state_t *VAR_3, int VAR_4, bot_activategoal_t *VAR_5) {
 int VAR_6, VAR_7[10], VAR_8, VAR_9, VAR_10;
 char VAR_11[128];
 vec3_t VAR_12, VAR_13, VAR_14, VAR_15;
 vec3_t VAR_16, VAR_17;

 VAR_5->shoot = VAR_1;
 FUNC_2(VAR_5->target);

 FUNC_9(VAR_4, "model", VAR_11, sizeof(VAR_11));
 if (!*VAR_11)
  return VAR_1;
 VAR_9 = FUNC_6(VAR_11+1);
 if (!VAR_9)
  return VAR_1;
 VAR_10 = FUNC_0(VAR_9, 0, VAR_0, VAR_14, VAR_15);

 FUNC_1(VAR_14, VAR_15, VAR_16);
 FUNC_4(VAR_16, 0.5, VAR_16);
 FUNC_3(VAR_16, VAR_17);

 FUNC_3(VAR_17, VAR_12);
 VAR_12[2] += 24;
 FUNC_3(VAR_12, VAR_13);
 VAR_13[2] -= 100;
 VAR_8 = FUNC_8(VAR_12, VAR_13, VAR_7, ((void*)0), 10);

 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  if (FUNC_7(VAR_7[VAR_6])) {
   break;
  }
 }
 if (VAR_6 < VAR_8) {
  FUNC_3(VAR_16, VAR_5->goal.origin);
  VAR_5->goal.areanum = VAR_7[VAR_6];
  FUNC_5(VAR_14, VAR_16, VAR_5->goal.mins);
  FUNC_5(VAR_15, VAR_16, VAR_5->goal.maxs);

  VAR_5->goal.entitynum = VAR_10;
  VAR_5->goal.number = 0;
  VAR_5->goal.flags = 0;
  return VAR_2;
 }
 return VAR_1;
}
