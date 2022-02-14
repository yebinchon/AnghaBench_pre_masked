
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int member_0; int member_1; int member_2; } ;
typedef TYPE_1__ vec3_t ;
struct TYPE_8__ {TYPE_1__ origin; int areanum; int name; struct TYPE_8__* next; } ;
typedef TYPE_2__ maplocation_t ;
struct TYPE_9__ {scalar_t__ iteminfo; scalar_t__ flags; scalar_t__ number; int maxs; int mins; scalar_t__ entitynum; int origin; int areanum; } ;
typedef TYPE_3__ bot_goal_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__,int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2(char *VAR_3, bot_goal_t *VAR_4)
{
 maplocation_t *VAR_5;
 vec3_t VAR_6 = {-8, -8, -8}, VAR_7 = {8, 8, 8};

 for (VAR_5 = VAR_0; VAR_5; VAR_5 = VAR_5->next)
 {
  if (!FUNC_0(VAR_5->name, VAR_3))
  {
   VAR_4->areanum = VAR_5->areanum;
   FUNC_1(VAR_5->origin, VAR_4->origin);
   VAR_4->entitynum = 0;
   FUNC_1(VAR_6, VAR_4->mins);
   FUNC_1(VAR_7, VAR_4->maxs);
   VAR_4->number = 0;
   VAR_4->flags = 0;
   VAR_4->iteminfo = 0;
   return VAR_2;
  }
 }
 return VAR_1;
}
