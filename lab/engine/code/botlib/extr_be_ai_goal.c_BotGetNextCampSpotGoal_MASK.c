
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int member_0; int member_1; int member_2; } ;
typedef TYPE_1__ vec3_t ;
struct TYPE_8__ {TYPE_1__ origin; int areanum; struct TYPE_8__* next; } ;
typedef TYPE_2__ campspot_t ;
struct TYPE_9__ {scalar_t__ iteminfo; scalar_t__ flags; scalar_t__ number; int maxs; int mins; scalar_t__ entitynum; int origin; int areanum; } ;
typedef TYPE_3__ bot_goal_t ;


 int FUNC_0 (TYPE_1__,int ) ;
 TYPE_2__* VAR_0 ;

int FUNC_1(int VAR_1, bot_goal_t *VAR_2)
{
 int VAR_3;
 campspot_t *VAR_4;
 vec3_t VAR_5 = {-8, -8, -8}, VAR_6 = {8, 8, 8};

 if (VAR_1 < 0) VAR_1 = 0;
 VAR_3 = VAR_1;
 for (VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_4->next)
 {
  if (--VAR_3 < 0)
  {
   VAR_2->areanum = VAR_4->areanum;
   FUNC_0(VAR_4->origin, VAR_2->origin);
   VAR_2->entitynum = 0;
   FUNC_0(VAR_5, VAR_2->mins);
   FUNC_0(VAR_6, VAR_2->maxs);
   VAR_2->number = 0;
   VAR_2->flags = 0;
   VAR_2->iteminfo = 0;
   return VAR_1+1;
  }
 }
 return 0;
}
