
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int* vec3_t ;
typedef int value ;
struct TYPE_4__ {int* origin; int areanum; } ;
typedef TYPE_1__ bot_goal_t ;


 int VAR_0 ;
 int FUNC_0 (int*,int*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int*,int*,int *,int) ;
 int FUNC_5 (int,char*,char*,int) ;
 int FUNC_6 (int,char*,int*) ;

int FUNC_7( char *VAR_3, bot_goal_t *VAR_4 ) {
 char VAR_5[VAR_0];
 vec3_t VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11[10];

 FUNC_1(VAR_4, 0, sizeof(bot_goal_t));
 for (VAR_9 = FUNC_3(0); VAR_9; VAR_9 = FUNC_3(VAR_9)) {
  if (!FUNC_5(VAR_9, "classname", VAR_5, sizeof(VAR_5)))
   continue;
  if (!FUNC_2(VAR_5, VAR_3)) {
   if (!FUNC_6(VAR_9, "origin", VAR_6))
    return VAR_1;
   FUNC_0(VAR_6, VAR_4->origin);
   FUNC_0(VAR_6, VAR_7);
   VAR_7[2] -= 32;
   FUNC_0(VAR_6, VAR_8);
   VAR_8[2] += 32;
   VAR_10 = FUNC_4(VAR_7, VAR_8, VAR_11, ((void*)0), 10);
   if (!VAR_10)
    return VAR_1;
   VAR_4->areanum = VAR_11[0];
   return VAR_2;
  }
 }
 return VAR_1;
}
