
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int number; int flags; size_t iteminfo; scalar_t__ timeout; int entitynum; int goalorigin; int goalareanum; struct TYPE_8__* next; } ;
typedef TYPE_2__ levelitem_t ;
struct TYPE_9__ {int number; size_t iteminfo; int flags; int maxs; int mins; int entitynum; int origin; int areanum; } ;
typedef TYPE_3__ bot_goal_t ;
struct TYPE_10__ {TYPE_1__* iteminfo; } ;
struct TYPE_7__ {int maxs; int mins; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_8 ;
 TYPE_5__* VAR_9 ;
 TYPE_2__* VAR_10 ;

int FUNC_2(int VAR_11, char *VAR_12, bot_goal_t *VAR_13)
{
 levelitem_t *VAR_14;

 if (!VAR_9) return -1;
 VAR_14 = VAR_10;
 if (VAR_11 >= 0)
 {
  for (; VAR_14; VAR_14 = VAR_14->next)
  {
   if (VAR_14->number == VAR_11)
   {
    VAR_14 = VAR_14->next;
    break;
   }
  }
 }
 for (; VAR_14; VAR_14 = VAR_14->next)
 {

  if (VAR_8 == VAR_2) {
   if (VAR_14->flags & VAR_6) continue;
  }
  else if (VAR_8 >= VAR_3) {
   if (VAR_14->flags & VAR_7) continue;
  }
  else {
   if (VAR_14->flags & VAR_5) continue;
  }
  if (VAR_14->flags & VAR_4) continue;

  if (!FUNC_0(VAR_12, VAR_9->iteminfo[VAR_14->iteminfo].name))
  {
   VAR_13->areanum = VAR_14->goalareanum;
   FUNC_1(VAR_14->goalorigin, VAR_13->origin);
   VAR_13->entitynum = VAR_14->entitynum;
   FUNC_1(VAR_9->iteminfo[VAR_14->iteminfo].mins, VAR_13->mins);
   FUNC_1(VAR_9->iteminfo[VAR_14->iteminfo].maxs, VAR_13->maxs);
   VAR_13->number = VAR_14->number;
   VAR_13->flags = VAR_1;
   if (VAR_14->timeout) VAR_13->flags |= VAR_0;
   VAR_13->iteminfo = VAR_14->iteminfo;

   return VAR_14->number;
  }
 }
 return -1;
}
