
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_7__ {int fraction; } ;
typedef TYPE_1__ bsp_trace_t ;
struct TYPE_8__ {int flags; scalar_t__ entitynum; int origin; int mins; } ;
typedef TYPE_2__ bot_goal_t ;
struct TYPE_9__ {double ltime; } ;
typedef TYPE_3__ aas_entityinfo_t ;


 int FUNC_0 (scalar_t__,TYPE_3__*) ;
 double FUNC_1 () ;
 TYPE_1__ FUNC_2 (int ,int *,int *,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,double,int ) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_5(int VAR_4, vec3_t VAR_5, vec3_t VAR_6, bot_goal_t *VAR_7)
{
 aas_entityinfo_t VAR_8;
 bsp_trace_t VAR_9;
 vec3_t VAR_10;

 if (!(VAR_7->flags & VAR_1)) return VAR_2;

 FUNC_3(VAR_7->mins, VAR_7->mins, VAR_10);
 FUNC_4(VAR_10, 0.5, VAR_10);
 FUNC_3(VAR_7->origin, VAR_10, VAR_10);

 VAR_9 = FUNC_2(VAR_5, ((void*)0), ((void*)0), VAR_10, VAR_4, VAR_0);

 if (VAR_9.fraction >= 1)
 {


  if (VAR_7->entitynum <= 0)
   return VAR_2;


  FUNC_0(VAR_7->entitynum, &VAR_8);



  if (VAR_8.ltime < FUNC_1() - 0.5)
   return VAR_3;
 }
 return VAR_2;
}
