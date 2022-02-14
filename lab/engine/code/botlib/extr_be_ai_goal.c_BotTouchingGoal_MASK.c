
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_3__ {scalar_t__* mins; scalar_t__* maxs; int origin; } ;
typedef TYPE_1__ bot_goal_t ;


 int FUNC_0 (int ,scalar_t__*,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__*,int ,scalar_t__*) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3(vec3_t VAR_3, bot_goal_t *VAR_4)
{
 int VAR_5;
 vec3_t VAR_6, VAR_7;
 vec3_t VAR_8, VAR_9;
 vec3_t VAR_10 = {0, 0, 0};
 vec3_t VAR_11 = {0, 0, 0};

 FUNC_0(VAR_0, VAR_6, VAR_7);
 FUNC_2(VAR_4->mins, VAR_7, VAR_8);
 FUNC_2(VAR_4->maxs, VAR_6, VAR_9);
 FUNC_1(VAR_8, VAR_4->origin, VAR_8);
 FUNC_1(VAR_9, VAR_4->origin, VAR_9);

 FUNC_2(VAR_9, VAR_10, VAR_9);
 FUNC_2(VAR_8, VAR_11, VAR_8);

 for (VAR_5 = 0; VAR_5 < 3; VAR_5++)
 {
  if (VAR_3[VAR_5] < VAR_8[VAR_5] || VAR_3[VAR_5] > VAR_9[VAR_5]) return VAR_1;
 }
 return VAR_2;
}
