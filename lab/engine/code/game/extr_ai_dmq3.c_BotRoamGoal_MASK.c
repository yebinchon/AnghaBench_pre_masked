
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_5__ {float fraction; int * endpos; int startsolid; } ;
typedef TYPE_1__ bsp_trace_t ;
struct TYPE_6__ {int entitynum; scalar_t__* origin; } ;
typedef TYPE_2__ bot_state_t ;


 int FUNC_0 (TYPE_1__*,scalar_t__*,int *,int *,scalar_t__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_2 (scalar_t__*,scalar_t__*) ;
 float FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__*,float,scalar_t__*) ;
 int FUNC_5 (int *,scalar_t__*,scalar_t__*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int ) ;

void FUNC_9(bot_state_t *VAR_3, vec3_t VAR_4) {
 int VAR_5, VAR_6;
 float VAR_7, VAR_8;
 vec3_t VAR_9, VAR_10, VAR_11;
 bsp_trace_t VAR_12;

 for (VAR_6 = 0; VAR_6 < 10; VAR_6++) {

  FUNC_2(VAR_3->origin, VAR_10);
  VAR_8 = FUNC_7();
  if (VAR_8 > 0.25) {

   if (FUNC_7() < 0.5) VAR_10[0] -= 800 * FUNC_7() + 100;
   else VAR_10[0] += 800 * FUNC_7() + 100;
  }
  if (VAR_8 < 0.75) {

   if (FUNC_7() < 0.5) VAR_10[1] -= 800 * FUNC_7() + 100;
   else VAR_10[1] += 800 * FUNC_7() + 100;
  }

  VAR_10[2] += 2 * 48 * FUNC_6();

  FUNC_0(&VAR_12, VAR_3->origin, ((void*)0), ((void*)0), VAR_10, VAR_3->entitynum, VAR_2);

  FUNC_5(VAR_12.endpos, VAR_3->origin, VAR_9);
  VAR_7 = FUNC_3(VAR_9);

  if (VAR_7 > 200) {

   FUNC_4(VAR_9, VAR_7 * VAR_12.fraction - 40, VAR_9);
   FUNC_1(VAR_3->origin, VAR_9, VAR_10);

   VAR_11[0] = VAR_10[0];
   VAR_11[1] = VAR_10[1];
   VAR_11[2] = VAR_10[2] - 800;
   FUNC_0(&VAR_12, VAR_10, ((void*)0), ((void*)0), VAR_11, VAR_3->entitynum, VAR_2);

   if (!VAR_12.startsolid) {
    VAR_12.endpos[2]++;
    VAR_5 = FUNC_8(VAR_12.endpos, VAR_3->entitynum);
    if (!(VAR_5 & (VAR_0 | VAR_1))) {
     FUNC_2(VAR_10, VAR_4);
     return;
    }
   }
  }
 }
 FUNC_2(VAR_10, VAR_4);
}
