
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__* origin; scalar_t__ areanum; int lastair_time; int viewangles; int eye; int entitynum; int gs; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_8__ {int flags; scalar_t__ areanum; scalar_t__* origin; scalar_t__* mins; scalar_t__* maxs; int number; } ;
typedef TYPE_2__ bot_goal_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,TYPE_2__*) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (scalar_t__*,TYPE_2__*) ;

int FUNC_5(bot_state_t *VAR_5, bot_goal_t *VAR_6) {
 if (VAR_6->flags & VAR_2) {

  if (FUNC_4(VAR_5->origin, VAR_6)) {
   if (!(VAR_6->flags & VAR_1)) {
    FUNC_3(VAR_5->gs, VAR_6->number, -1);
   }
   return VAR_4;
  }

  if (FUNC_2(VAR_5->entitynum, VAR_5->eye, VAR_5->viewangles, VAR_6)) {
   return VAR_4;
  }

  if (VAR_5->areanum == VAR_6->areanum) {
   if (VAR_5->origin[0] > VAR_6->origin[0] + VAR_6->mins[0] && VAR_5->origin[0] < VAR_6->origin[0] + VAR_6->maxs[0]) {
    if (VAR_5->origin[1] > VAR_6->origin[1] + VAR_6->mins[1] && VAR_5->origin[1] < VAR_6->origin[1] + VAR_6->maxs[1]) {
     if (!FUNC_1(VAR_5->origin)) {
      return VAR_4;
     }
    }
   }
  }
 }
 else if (VAR_6->flags & VAR_0) {

  if (FUNC_4(VAR_5->origin, VAR_6)) return VAR_4;

  if (VAR_5->lastair_time > FUNC_0() - 1) return VAR_4;
 }
 else {

  if (FUNC_4(VAR_5->origin, VAR_6)) return VAR_4;
 }
 return VAR_3;
}
