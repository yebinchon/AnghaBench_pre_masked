
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_7__ {int* endpos; scalar_t__ fraction; } ;
typedef TYPE_1__ bsp_trace_t ;
struct TYPE_8__ {int* origin; int entitynum; } ;
typedef TYPE_2__ bot_state_t ;
struct TYPE_9__ {int* origin; int areanum; int* mins; int* maxs; scalar_t__ entitynum; scalar_t__ iteminfo; scalar_t__ number; int flags; } ;
typedef TYPE_3__ bot_goal_t ;


 int FUNC_0 (TYPE_1__*,int*,int*,int*,int*,int ,int) ;
 int FUNC_1 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int*,int*) ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_3(bot_state_t *VAR_8, bot_goal_t *VAR_9) {
 bsp_trace_t VAR_10;
 vec3_t VAR_11, VAR_12 = {-15, -15, -2}, VAR_13 = {15, 15, 2};
 int VAR_14;


 FUNC_2(VAR_8->origin, VAR_11);
 VAR_11[2] += 1000;
 FUNC_0(&VAR_10, VAR_8->origin, VAR_12, VAR_13, VAR_11, VAR_8->entitynum, VAR_3|VAR_1);

 FUNC_2(VAR_10.endpos, VAR_11);
 FUNC_0(&VAR_10, VAR_11, VAR_12, VAR_13, VAR_8->origin, VAR_8->entitynum, VAR_4|VAR_2|VAR_0);

 if (VAR_10.fraction > 0) {
  VAR_14 = FUNC_1(VAR_10.endpos);
  if (VAR_14) {
   FUNC_2(VAR_10.endpos, VAR_9->origin);
   VAR_9->origin[2] -= 2;
   VAR_9->areanum = VAR_14;
   VAR_9->mins[0] = -15;
   VAR_9->mins[1] = -15;
   VAR_9->mins[2] = -1;
   VAR_9->maxs[0] = 15;
   VAR_9->maxs[1] = 15;
   VAR_9->maxs[2] = 1;
   VAR_9->flags = VAR_5;
   VAR_9->number = 0;
   VAR_9->iteminfo = 0;
   VAR_9->entitynum = 0;
   return VAR_7;
  }
 }
 return VAR_6;
}
