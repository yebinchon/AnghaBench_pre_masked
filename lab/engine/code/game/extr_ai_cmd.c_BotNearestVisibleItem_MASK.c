
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vec3_t ;
typedef int name ;
struct TYPE_10__ {double fraction; } ;
typedef TYPE_1__ bsp_trace_t ;
struct TYPE_11__ {int client; int eye; int origin; } ;
typedef TYPE_2__ bot_state_t ;
struct TYPE_12__ {int origin; int number; } ;
typedef TYPE_3__ bot_goal_t ;


 int FUNC_0 (TYPE_1__*,int ,int *,int *,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 float FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_5 (int,char*,TYPE_3__*) ;
 int FUNC_6 (int ,char*,int) ;

float FUNC_7(bot_state_t *VAR_2, char *VAR_3, bot_goal_t *VAR_4) {
 int VAR_5;
 char VAR_6[64];
 bot_goal_t VAR_7;
 float VAR_8, VAR_9;
 vec3_t VAR_10;
 bsp_trace_t VAR_11;

 VAR_9 = 999999;
 VAR_5 = -1;
 do {
  VAR_5 = FUNC_5(VAR_5, VAR_3, &VAR_7);
  FUNC_6(VAR_7.number, VAR_6, sizeof(VAR_6));
  if (FUNC_1(VAR_3, VAR_6) != 0)
   continue;
  FUNC_3(VAR_7.origin, VAR_2->origin, VAR_10);
  VAR_8 = FUNC_2(VAR_10);
  if (VAR_8 < VAR_9) {

   FUNC_0(&VAR_11, VAR_2->eye, ((void*)0), ((void*)0), VAR_7.origin, VAR_2->client, VAR_1|VAR_0);
   if (VAR_11.fraction >= 1.0) {
    VAR_9 = VAR_8;
    FUNC_4(VAR_4, &VAR_7, sizeof(bot_goal_t));
   }
  }
 } while(VAR_5 > 0);
 return VAR_9;
}
